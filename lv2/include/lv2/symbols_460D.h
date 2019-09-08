#if defined(FIRMWARE_460D)

	#define FIRMWARE_VERSION					0x0460
	//#define PS3MAPI_FW_VERSION			 		0x0460
	#if defined(IS_MAMBA)
		#define PS3MAPI_FW_TYPE			 		"DEX MAMBA"
	#else
		#define PS3MAPI_FW_TYPE			 		"DEX COBRA"
	#endif
	#define PS3MAPI_IDPS_1			 			0x80000000004095B0ULL
	#define PS3MAPI_IDPS_2			 			0x800000000049CF1CULL
	//#define PS3MAPI_PSID						0x800000000049CF34ULL

	#define EXPLORE_PLUGIN_HASH		0xacf4af2b000ed045
	#define EXPLORE_CATEGORY_GAME_HASH	0x9cb337a200056fad
	#define GAME_EXT_PLUGIN_HASH		0xe274af7b0001e7c3
	#define LIBFS_EXTERNAL_HASH			0x5bc7bce800006477
	//#define BASIC_PLUGINS_HASH		0xb5988016000200a4
	#define PSP_EMULATOR_HASH		0x7be641f500023793
	#define PEMUCORELIB_HASH		0xf349a563000c0d6b
	#define EMULATOR_API_HASH		0xa9f5b37a0001bb3c
	#define EMULATOR_DRM_HASH		0xa324dc4a00005399
	#define EMULATOR_DRM_DATA_HASH		0x75c390860001b75f
	#define LIBSYSUTIL_SAVEDATA_PSP_HASH	0x57bbc3b800003212

	//WARNING: search this address in RAM!
	//The offset is found with bruteforce if you set it to 0x0 or wrong.
	#define vsh_pos_in_ram			0x930000 //Search in RAM 0xF821FF917C0802A6F80100804800039D or use socat ;)
	//---------------------//
	/* vsh */
	#define ps2tonet_patch			0x0
	#define ps2tonet_size_patch	    0x0
	#define vmode_patch_offset			0x0
	#define psp_drm_patch1		0x0
	#define psp_drm_patch2		0x0
	#define psp_drm_patch3		0x0
	#define psp_drm_patch4		0x0
	#define psp_drm_patchA		0x0
	#define psp_drm_patchB		0x0
	#define psp_drm_patchC		0x0
	#define psp_drm_patchD		0x0
	#define psp_drm_patchE		0x0
	#define psp_drm_patchF		0x0

	#define ps2_nonbw_offset       0xDDD88
	#define ps2_nonbw_offset2		0x68294
	#define ps2_nonbw_offset3		0x172F4

	/* basic_plugins */
	//#define pspemu_path_offset		0x4b9f0
	//#define psptrans_path_offset		0x4c658

	/* psp_emulator */
	#define psp_set_psp_mode_offset 	0x1c18

	/* emulator_api */
	#define psp_read			0x102d8
	#define psp_read_header			0x1125c
	#define psp_drm_patch5			0x11080
	#define psp_drm_patch6			0x110b0
	#define psp_drm_patch7			0x110c8
	#define psp_drm_patch8			0x110cc
	#define psp_drm_patch9			0x1120c
	#define psp_drm_patch11			0x11210
	#define psp_drm_patch12			0x11220
	#define psp_product_id_patch1		0x11320
	#define psp_product_id_patch3		0x115f8
	#define umd_mutex_offset		(0x64480+0x38C)

	/* pemucorelib */
	#define psp_eboot_dec_patch		0x5e6bc
	#define psp_prx_patch			0x577d8
	#define psp_savedata_bind_patch1	0x7a4bc
	#define psp_savedata_bind_patch2	0x7a514
	#define psp_savedata_bind_patch3	0x7a030
	#define psp_extra_savedata_patch	0x87540
	#define psp_prometheus_patch		0x12ea28
	#define prx_patch_call_lr		0x5892c

	/* emulator_drm */
	#define psp_drm_tag_overwrite		0x4c68
	#define psp_drm_key_overwrite		(0x27600-0xBE80C)

	/* libsysutil_savedata_psp */
	#define psp_savedata_patch1		0x46CC
	#define psp_savedata_patch2		0x46A4
	#define psp_savedata_patch3		0x4504
	#define psp_savedata_patch4		0x453C
	#define psp_savedata_patch5		0x4550
	#define psp_savedata_patch6		0x46B8

	/* libfs */
	#define aio_copy_root_offset		0xD658

#endif /* FIRMWARE */
