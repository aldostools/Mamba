#ifndef __STORAGE_EXT_H__
#define __STORAGE_EXT_H__

#include <lv2/io.h>
#include <lv2/storage.h>
#include <lv2/synchronization.h>
#include "scsi.h"

enum EMU_TYPE
{
	EMU_OFF = 0,
	EMU_PS3,
	EMU_PS2_DVD,
	EMU_PS2_CD,
	EMU_PSX,
	EMU_BD,
	EMU_DVD,
	EMU_MAX,
};

enum STORAGE_COMMAND
{
	CMD_READ_ISO,
	CMD_READ_DISC,
	CMD_READ_CD_ISO_2352,
	CMD_FAKE_STORAGE_EVENT,
	CMD_GET_PSX_VIDEO_MODE
};

extern u8 storage_ext_patches_done;
extern int vsh_type;

void storage_ext_init(void);
void storage_ext_patches(void);

/* Syscalls */

typedef struct
{
	int size;
	int disc_emulation;
	char firstfile_path[MAX_PATH];
} __attribute__((packed)) sys_emu_state_t;

int emu_storage_read(device_handle_t device_handle, u64 unk, u64 start_sector, u32 sector_count, void *buf, u32 *nread, u64 unk2);

int sys_storage_ext_get_disc_type(unsigned int *real_disctype, unsigned int *effective_disctype, unsigned int *fake_disctype);
int sys_storage_ext_read_ps3_disc(void *buf, u64 start_sector, u32 count);
int sys_storage_ext_fake_storage_event(u64 event, u64 param, u64 device);
int sys_storage_ext_get_emu_state(sys_emu_state_t *state);
int sys_storage_ext_mount_ps3_discfile(unsigned int filescount, char *files[]);
int sys_storage_ext_mount_dvd_discfile(unsigned int filescount, char *files[]);
int sys_storage_ext_mount_bd_discfile(unsigned int filescount, char *files[]);
int sys_storage_ext_mount_psx_discfile(char *file, unsigned int trackscount, ScsiTrackDescriptor *tracks);
int sys_storage_ext_mount_ps2_discfile(unsigned int filescount, char *files[], unsigned int trackscount, ScsiTrackDescriptor *tracks);
int sys_storage_ext_umount_discfile(void);
int sys_storage_ext_mount_discfile_proxy(sys_event_port_t result_port, sys_event_queue_t command_queue, int emu_type, u64 disc_size_bytes, u32 read_size, unsigned int trackscount, ScsiTrackDescriptor *tracks);
//int sys_storage_ext_mount_encrypted_image(char *image, char *mount_point, char *filesystem, u64 nonce);

size_t read_file(const char *path, void *buf, size_t size);
int save_file(const char *path, void *buf, size_t size);

#ifdef PS3M_API
void unhook_all_storage_ext(void);
#endif

void init_mount_hdd0(void);

#ifdef DO_CFW2OFW_FIX
void restore_BD(void);
#endif

#endif /* __STORAGE_EXT_H__ */

