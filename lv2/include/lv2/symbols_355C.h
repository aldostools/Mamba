#if defined(FIRMWARE_355C)

	#define FIRMWARE_VERSION					0x0355
	//#define PS3MAPI_FW_VERSION			 		0x0355
	#if defined(IS_MAMBA)
		#define PS3MAPI_FW_TYPE			 		"CEX MAMBA"
	#else
		#define PS3MAPI_FW_TYPE			 		"CEX COBRA"
	#endif
	#define PS3MAPI_IDPS_1			 			0x80000000003BA880ULL
	#define PS3MAPI_IDPS_2			 			0x800000000044A174ULL
	//#define PS3MAPI_PSID			 			0x800000000044A18CULL

	#define EXPLORE_PLUGIN_HASH		0x8c0a948c000db78d
	#define EXPLORE_PLUGIN_REBUG_HASH		0x8c0a948c000dbd9b //rebug rex
	#define EXPLORE_CATEGORY_GAME_HASH	0xa2bc18fa00052c74
	#define EXPLORE_CATEGORY_GAME_REBUG_HASH	0xa2bc1e5e00052fd7 //rebug rex
	#define GAME_EXT_PLUGIN_HASH		0x3bebd0440001dd6b
	#define GAME_EXT_PLUGIN_REBUG_HASH		0x3bebc61c0001deeb //rebug rex
	#define LIBFS_EXTERNAL_HASH			0x4437cd5500000000


	//WARNING: search this address in RAM!
	//The offset is found with bruteforce if you set it to 0x0 or wrong.
	#define vsh_pos_in_ram			0x930000 //Search in RAM 0xF821FF917C0802A6F80100804800039D or use socat ;)
	//---------------------//
	/* vsh */
	#define ps2tonet_patch			0x0
	#define ps2tonet_size_patch	    0x0
	#define vmode_patch_offset			0x4637F4

	#define ps2_nonbw_offset       0xD7708
	#define ps2_nonbw_offset2		0x7544C
	#define ps2_nonbw_offset3		0x14314

	#define aio_copy_root_offset		0xD37C
	//rebug rex
	#define dex_ps2_nonbw_offset       0xD7E64
	#define dex_ps2_nonbw_offset2		0x75C48
	#define dex_ps2_nonbw_offset3		0x14624
	#define dex_ps2tonet_patch			0x0
	#define dex_ps2tonet_size_patch	    0x0
	#define dex_vmode_patch_offset		0x0

#endif /* FIRMWARE */
