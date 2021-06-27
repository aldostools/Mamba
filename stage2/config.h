#ifndef __CONFIG_H__
#define __CONFIG_H__

#include <lv1/inttypes.h>

typedef struct
{
	uint16_t size;			// size of structure, this will be set automatically by the library
	uint16_t checksum;		// Only for core, don't mess with this
	u8 bd_video_region;		// One of BDRegion, or 0 for default
	u8 dvd_video_region;	// One of DVDRegion or 0 for default
	u8 ps2softemu;			// Non-zero to show ps2 discs in non bc consoles
	u32 spoof_version;		// version in BCD, eg. 0x0484, Max value: 0x0999 // feature is unavailable (use SEN Enabler for version spoofer)
	u32 spoof_revision;		// revision number (decimal), MAx value: 99999 // feature is unavailable (use SEN Enabler for version spoofer)
	u8 fan_speed;			// 0 = Disabled | 1 = SYSCON | Dynamic Fan Controller (2 = Max 60°C | 3 = Max 65°C | 4 = Max 70°C | 5 = Max 75°C) | 0x33 to 0xFF = Manual
	u8 ps2_speed;			// 0 = Disabled | 1 = SYSCON | 0x60 | 0x65 | 0x70 | 0x75 | 0x80 | 0x85 | 0x90
	u8 allow_restore_sc;	// 0 = Does not allow to restore CFW syscalls | 1 = Allow to restore CFW syscalls
	u8 skip_existing_rif;	// 0 = Does not skip if .rif already exists | 1 = Skip if .rif already exists
	u8 photo_gui;			// 1 = Allow Photo GUI               | 0 = Does not allow Photo GUI
	u8 auto_earth;			// deprecated
	u8 auto_dev_blind;		// 1 = Allow auto-mount /dev_blind   | 0 = Does not allow auto-mount /dev_blind
} __attribute__((packed)) MambaConfig;

extern MambaConfig config;

int read_mamba_config(void);

// Syscalls
int sys_read_mamba_config(MambaConfig *cfg);
int sys_write_mamba_config(MambaConfig *cfg);
int save_config_value(uint8_t member, uint8_t value);

#define CFG_FAN_SPEED			1
#define CFG_PS2_SPEED			2
#define CFG_ALLOW_RESTORE_SC	3
#define CFG_SKIP_EXISTING_RIF	4

#endif /* __CONFIG_H__ */
