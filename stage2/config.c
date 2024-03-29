#include <lv2/lv2.h>
#include <lv2/error.h>
#include <lv2/libc.h>
#include <lv2/io.h>
#include <lv2/memory.h>

#include "common.h"
#include "config.h"
#include "region.h"
#include "storage_ext.h"
#include "modulespatch.h"

#define MAMBA_CONFIG_FILE	"/dev_hdd0/vm/mamba_cfg.bin"

MambaConfig config;

#ifdef FAN_CONTROL
extern u8 set_fan_speed;		// fan_control.h
extern u8 set_ps2_speed;
void load_fan_control(void);
#endif
#ifdef DO_AUTO_MOUNT_DEV_BLIND
extern u8 auto_dev_blind;		// homebrew_blocker.h
#endif
#ifdef DO_AUTO_RESTORE_SC
extern u8 allow_restore_sc;	// homebrew_blocker.h
#endif
#ifdef DO_PHOTO_GUI
extern u8 photo_gui;			// mappath.c
#endif
#ifdef MAKE_RIF
extern u8 skip_existing_rif;	// make_rif.h;
#endif

static void check_and_correct(MambaConfig *cfg)
{
	int found = 0;

	int i;
	for (i = 1; i <= BD_VIDEO_REGION_MAX; i *= 2)
	{
		if (cfg->bd_video_region == i)
		{
			found = 1;
			break;
		}
	}

	if (!found)
		cfg->bd_video_region = 0;
	else
		found = 0;

	for (i = 1; i <= DVD_VIDEO_REGION_MAX; i *= 2)
	{
		if (cfg->dvd_video_region == i)
		{
			found = 1;
			break;
		}
	}

	if (!found)
		cfg->dvd_video_region = 0;

	if (cfg->ps2softemu > 1)
		cfg->ps2softemu = 0;

	cfg->spoof_version  = 0; // deprecated
	cfg->spoof_revision = 0; // deprecated

	if(cfg->size == 0)
	{
		#ifdef MAKE_RIF
		config.skip_existing_rif = 1;
		#endif
		#ifdef DO_AUTO_MOUNT_DEV_BLIND
		config.auto_dev_blind = 1;
		#endif
		#ifdef DO_AUTO_RESTORE_SC
		config.allow_restore_sc = 1;
		#endif
		#ifdef DO_PHOTO_GUI
		config.photo_gui = 1;
		#endif
	}

	//if (cfg->size > sizeof(MambaConfig))
		cfg->size = sizeof(MambaConfig);
}
/*
static uint16_t checksum(MambaConfig *cfg)
{
	u8 *buf = &cfg->bd_video_region;
	uint16_t size = cfg->size - sizeof(cfg->size) - sizeof(cfg->checksum);
	uint16_t cs = 0;

	for (int i = 0; i < size; i++)
		cs += buf[i];

	return cs;
}
*/
int read_mamba_config(void)
{
	memset(&config, 0, sizeof(config));

	config.size = read_file(MAMBA_CONFIG_FILE, &config, sizeof(config));

	check_and_correct(&config);

	bd_video_region = config.bd_video_region;
	dvd_video_region = config.dvd_video_region;
	#ifdef MAKE_RIF
	skip_existing_rif = config.skip_existing_rif;
	#endif
	#ifdef DO_AUTO_MOUNT_DEV_BLIND
	auto_dev_blind   = config.auto_dev_blind;	// 1 = Allow auto-mount /dev_blind   | 0 = Does not allow auto-mount /dev_blind
	#endif
	#ifdef DO_AUTO_RESTORE_SC
	allow_restore_sc = config.allow_restore_sc;	// 1 = Allow to restore CFW syscalls | 0 = Does not allow to restore CFW syscalls
	#endif
	#ifdef DO_PHOTO_GUI
	photo_gui        = config.photo_gui;		// 1 = Allow Photo GUI				 | 0 = Does not allow Photo GUI
	#endif
	#ifdef FAN_CONTROL
	set_fan_speed    = config.fan_speed;		// 1 = DISABLED, 1 = SYSCON, 2 = Dynamic Fan Controller, 0x33 to 0xFF = Set manual fan speed
	set_ps2_speed    = config.ps2_speed;
	load_fan_control();
	#endif

	#ifdef DEBUG
		DPRINTF("Configuration read. bd_video_region=%d,dvd_video_region=%d\n",
				bd_video_region, dvd_video_region);
	#endif

	return SUCCEEDED;
}

static int write_mamba_config(void)
{
	return save_file(MAMBA_CONFIG_FILE, &config, sizeof(config));
}

int sys_read_mamba_config(MambaConfig *cfg)
{
	//int erase_size, copy_size;

	cfg = get_secure_user_ptr(cfg);

	//if (cfg->size > 4096)
	//	return EINVAL;

/*	erase_size = cfg->size-sizeof(config.size);
	if (erase_size < 0)
		erase_size = 0;

	memset(&cfg->checksum, 0, erase_size);

	copy_size = ((cfg->size > config.size) ? config.size : cfg->size) - sizeof(config.size);
	if (copy_size < 0)
		copy_size = 0;

	#ifdef DEBUG
	DPRINTF("erase = %d, copy = %d\n", erase_size, copy_size);
	#endif
*/
	memcpy(&cfg->checksum, &config.checksum, sizeof(MambaConfig));
	return SUCCEEDED;
}

int sys_write_mamba_config(MambaConfig *cfg)
{
	//int copy_size;

	cfg = get_secure_user_ptr(cfg);

	//if (cfg->size > 4096)
	//	return EINVAL;

	memcpy(&config, &cfg, sizeof(config));

	check_and_correct(cfg);

	#ifdef FAN_CONTROL
	config.fan_speed = set_fan_speed;
	config.ps2_speed = set_ps2_speed;
	#endif
	#ifdef DO_AUTO_RESTORE_SC
	config.allow_restore_sc = allow_restore_sc;
	#endif
	#ifdef DO_PHOTO_GUI
	config.photo_gui = photo_gui;
	#endif
	#ifdef DO_AUTO_MOUNT_DEV_BLIND
	config.auto_dev_blind = auto_dev_blind;
	#endif
	#ifdef MAKE_RIF
	config.skip_existing_rif = skip_existing_rif;
	#endif
/*	cfg->checksum = checksum(cfg);
	copy_size = cfg->size - sizeof(config.size);
	if (copy_size < 0)
		copy_size = 0;

	memcpy(&config.checksum, &cfg->checksum, copy_size);*/
	config.bd_video_region = bd_video_region;
	config.dvd_video_region = dvd_video_region;

	return write_mamba_config();
}

// For internal purposes
// Saves current value in cobra config through opcodes
// Only for fan_speed, ps2_speed, allow_restore_sc and skip_existing_rif
int save_config_value(uint8_t member, uint8_t value)
{
	read_mamba_config();

	if(member == CFG_FAN_SPEED)
		config.fan_speed = value;
	else if(member == CFG_PS2_SPEED)
		config.ps2_speed = value;
	else if(member == CFG_ALLOW_RESTORE_SC)
		config.allow_restore_sc = value;
	else if(member == CFG_SKIP_EXISTING_RIF)
		config.skip_existing_rif = value;
	else
		return 1;

	return write_mamba_config();
}
