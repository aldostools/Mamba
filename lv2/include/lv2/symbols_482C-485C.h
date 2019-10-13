#if defined(FIRMWARE_482C) || defined(FIRMWARE_483C) || defined(FIRMWARE_484C) || defined(FIRMWARE_485C)

    #if defined(FIRMWARE_482C)
        #define FIRMWARE_VERSION                             0x482
    #elif defined(FIRMWARE_483C)
        #define FIRMWARE_VERSION                             0x483
    #elif defined(FIRMWARE_484C)
        #define FIRMWARE_VERSION                             0x484
    #elif defined(FIRMWARE_485C)
        #define FIRMWARE_VERSION                             0x485
    #endif
    #define FIRMWARE_CEX                                     FIRMWARE_VERSION

    #ifdef PS3M_API
        #define PS3MAPI_FW_TYPE                              "CEX MAMBA"
        #define PS3MAPI_IDPS_1                               0x80000000003E2E30ULL
        #define PS3MAPI_IDPS_2                               0x8000000000474AF4ULL
        #define PS3MAPI_PSID                                 0x8000000000474B0CULL
    #endif

    /* lv2 */
    #define TOC                                              0x34FBB0
    #define open_shared_kernel_object_symbol                 0x12410
    #define close_kernel_object_handle_symbol                0x11A30
    #define open_kernel_object_symbol                        0x12600
    #define alloc_symbol                                     0x64824
    #define dealloc_symbol                                   0x64C60
    #define copy_to_user_symbol                              0xF86C
    #define copy_from_user_symbol                            0xFA88
    #define copy_to_process_symbol                           0xF924
    #define copy_from_process_symbol                         0xF734
    #define process_read_memory_symbol                       0x267EC0
    #define process_write_memory_symbol                      0x267D34
    #define page_allocate_symbol                             0x60394
    #define page_free_symbol                                 0x5FDF8
    #define page_export_to_proc_symbol                       0x60530
    #define page_unexport_from_proc_symbol                   0x5FCEC
    #define kernel_ea_to_lpar_addr_symbol                    0x7014C
    #define map_process_memory_symbol                        0x7726C
    #define memcpy_symbol                                    0x7E92C
    #define memset_symbol                                    0x4D66C
    #define memcmp_symbol                                    0x4C97C
    #define printf_symbol                                    0x2706AC
    #define printfnull_symbol                                0x275120
    #define sprintf_symbol                                   0x4EA94
    #define snprintf_symbol                                  0x4EA00
    #define strcpy_symbol                                    0x4D818
    #define strncpy_symbol                                   0x4D8E0
    #define strlen_symbol                                    0x4D840
    #define strcat_symbol                                    0x4D748
    #define strcmp_symbol                                    0x4D7C4
    #define strncmp_symbol                                   0x4D86C
    #define strchr_symbol                                    0x4D780
    #define strrchr_symbol                                   0x4D950
    #define spin_lock_irqsave_ex_symbol                      0x26D798
    #define spin_unlock_irqrestore_ex_symbol                 0x26D76C
    #define load_process_symbol                              0x5004
    #define ppu_thread_create_symbol                         0x13EC8
    #define ppu_thread_exit_symbol                           0x13F80
    #define ppu_thread_join_symbol                           0x13FD4
    #define ppu_thread_delay_symbol                          0x287A4
    #define create_user_thread2_symbol                       0x25080
    #define start_thread_symbol                              0x23D4C
    #define run_thread_symbol                                0x2357C
    #define register_thread_symbol                           0x26794C
    #define allocate_user_stack_symbol                       0x268134
    #define mmapper_flags_temp_patch                         0x70F78
    #define mutex_create_symbol                              0x1363C
    #define mutex_destroy_symbol                             0x135D4
    #define mutex_lock_symbol                                0x135CC
    #define mutex_unlock_symbol                              0x135C4
    #define event_port_create_symbol                         0x13078
    #define event_port_destroy_symbol                        0x134E0
    #define event_port_connect_symbol                        0x13558
    #define event_port_disconnect_symbol                     0x13484
    #define event_port_send_symbol                           0x13070
    #define event_queue_create_symbol                        0x13380
    #define event_queue_destroy_symbol                       0x13308
    #define event_queue_receive_symbol                       0x1314C
    #define cellFsOpen_symbol                                0x297900
    #define cellFsClose_symbol                               0x297768
    #define cellFsRead_symbol                                0x2978A4
    #define cellFsWrite_symbol                               0x297810
    #define cellFsLseek_symbol                               0x296E98
    #define cellFsStat_symbol                                0x29711C
    #define cellFsUnlink_internal_symbol                     0x19C64C
    #define cellFsUtilMount_symbol                           0x296C78
    #define cellFsUtilUmount_symbol                          0x296C4C
    #define pathdup_from_user_symbol                         0x29C8E4
    #define open_path_symbol                                 0x297638
    #define open_fs_object_symbol                            0x18A970
    #define close_fs_object_symbol                           0x1898AC
    #define storage_get_device_info_symbol                   0x279B00
    #define storage_open_symbol                              0x279510
    #define storage_close_symbol                             0x279300
    #define storage_read_symbol                              0x278870
    #define storage_send_device_command_symbol               0x2783FC
    #define storage_map_io_memory_symbol                     0x2799BC
    #define storage_unmap_io_memory_symbol                   0x279888
    #define storage_internal_get_device_object_symbol        0x277EB4
    #define decrypt_func_symbol                              0x34970
    #define lv1_call_99_wrapper_symbol                       0x4EEA8
    #define modules_verification_symbol                      0x58AB8
    #define prx_load_module_symbol                           0x88C04
    #define prx_start_module_symbol                          0x878D0
    #define prx_stop_module_symbol                           0x88CA8
    #define prx_unload_module_symbol                         0x87604
    #define prx_get_module_info_symbol                       0x8708C
    #define prx_get_module_list_symbol                       0x8710C
    #define extend_kstack_symbol                             0x700A4
    #define get_pseudo_random_number_symbol                  0x228180
    #define syscall_table_symbol                             0x363BE0
    #define syscall_call_offset                              0x275C04
    #define read_bdvd0_symbol                                0x1A461C
    #define read_bdvd1_symbol                                0x1A6248
    #define read_bdvd2_symbol                                0x1B3400
    #define device_event_port_send_call                      0x28206C
    #define process_map_caller_call                          0x4D24
    #define fsloop_open_call                                 0x297A98
    #define fsloop_close_call                                0x297AE8
    #define fsloop_read_call                                 0x297B28
    #define io_rtoc_entry_1                                  0x25B8
    #define io_sub_rtoc_entry_1                             -0x7EA0
    #define decrypt_rtoc_entry_2                            -0x66A0
    #define storage_rtoc_entry_1                             0x1DD8
    #define device_event_rtoc_entry_1                        0x2048
    #define process_rtoc_entry_1                            -0x7800
    #define patch_func2                                      0x59D84
    #define patch_func2_offset                               0x2C
    #define user_thread_prio_patch                           0x203FC
    #define user_thread_prio_patch2                          0x20408
    #define shutdown_patch_offset                            0xAAB8
    #define shutdown_copy_params_call                        0xAACC

    #define module_sdk_version_patch_offset					0x26717C
    #define module_add_parameter_to_parse_sprxpatch_offset	0x88310

    #define ECDSA_1											0x59dc4
    #define ECDSA_2											0x2d2b34
    #define fix_80010009									0x5a6e4
    #define fix_8001003D									0x5658C
    #define fix_8001003E									0x56650
    #define patch_func8_offset1 							0x564B0
    #define patch_func8_offset2 							0x56614
    #define patch_func9_offset 								0x5A6F8
    #define mem_base2										0x3D90
    #define PATCH_JUMP										0x56604
    #define lic_patch										0x56230
    #define ode_patch										0x2275F4
    #define ECDSA_FLAG										0x474A80
    #define sysmem_obj										0x474C38
    #define qa_eeprom_offset								0x48c0a

    #define sm_get_temperature_symbol						0x2635A8
    #define sm_get_fan_policy_symbol						0x26293C
    #define sm_set_fan_policy_symbol						0x264734

    #define get_pseudo_random_number_symbol					0x228180
    #define md5_reset_symbol								0x161E20
    #define md5_update_symbol								0x1628C0
    #define md5_final_symbol								0x162A40
    #define ss_get_open_psid_symbol							0x22A668
    #define update_mgr_read_eeprom_symbol					0x223A78
    #define update_mgr_write_eeprom_symbol					0x2239C0
    #define update_mgr_if_get_token_symbol					0x2253DC

    #define ss_params_get_update_status_symbol				0x50AB4

    #define SHA1_init_symbol								0x2ce688
    #define SHA1_update_symbol								0x2ce6e8
    #define SHA1_final_symbol								0x2ce89c

    #define aescbccfb_dec_symbol							0x2ccb7c
    #define aescbccfb_enc_symbol							0x2cc92c

    #define get_path_by_fd_symbol							0x29c180

    /* hash */
//    #define EXPLORE_PLUGIN_HASH                         0xACF4AF2B000EC481
//    #define EXPLORE_CATEGORY_GAME_HASH                  0x9CB378E600056AE5
//    #define GAME_EXT_PLUGIN_HASH                        0xE274AF7B0001E594
//    #define LIBFS_EXTERNAL_HASH                         0x5BC7BCE800006477
//    #define PSP_EMULATOR_HASH                           0x7BE641F500023794
//    #define PEMUCORELIB_HASH                            0xF349A563000C0D66
//    #define EMULATOR_API_HASH                           0xA9F5B37A0001BB45
//    #define EMULATOR_DRM_HASH                           0xA324DC4A00005399
//    #define EMULATOR_DRM_DATA_HASH                      0x75C390860001B75F
//    #define LIBSYSUTIL_SAVEDATA_PSP_HASH                0x57BBC3B800003212

    /* lv1 */
    #define vsh_pos_in_ram                              0x910000

    /* vsh */
    #define ps2tonet_patch                              0xC4E34
    #define ps2tonet_size_patch                         0xC4E28
    #define vmode_patch_offset                          0x4431DC
    #define psp_drm_patch1                              0x242FC0
    #define psp_drm_patch2                              0x243A60
    #define psp_drm_patch3                              0x24369C
    #define psp_drm_patch4                              0x243EA8
    #define psp_drm_patchA                              0x2430DC
    #define psp_drm_patchB                              0x24397C
    #define psp_drm_patchC                              0x242B14
    #define psp_drm_patchD                              0x2430C4
    #define psp_drm_patchE                              0x2430C8
    #define psp_drm_patchF                              0x243A94
    #define psp_extra_drm_patch                         0x245AF0

    /* explore_plugin */
    #define ps2_nonbw_offset                            0xDD9B4

    /* explore_category_game */
    #define ps2_nonbw_offset2                           0x68324

	/* LV2 POKE	*/
	#define hash_checked_area								0x352230

	#define DO_PATCH_COBRA810
	#define VSH_HASH						0xb6b6d000002e0000
	#define BDP_DISC_CHECK_PLUGIN_HASH		0x9940000000003000
	#define EXPLORE_PLUGIN_HASH				0xc50d0000000e0000
	#define EXPLORE_CATEGORY_GAME_HASH		0xde52d00000050000
	#define PS1_EMU_HASH					0xcc28400000090000
	#define PS1_NETEMU_HASH 				0xcc284000000b0000
	#define GAME_EXT_PLUGIN_HASH			0xcc26800000010000
	#define LIBFS_EXTERNAL_HASH				0x05fd000000006000
	#define NAS_PLUGIN_HASH					0xc50d000000020000
	#define BDP_BDMV_HASH					0xcc28700000370000
	#define BDP_BDVD_HASH					0xcc28d00000430000
	#define DOWNLOAD_PLUGIN_HASH			0xcc26800000020000
	#define AUTODOWNLOAD_PLUGIN_HASH		0x6a1af00000040000
	#define PREMO_PLUGIN_HASH				0x1000000000010000
	#define PREMO_GAME_PLUGIN_HASH			0x5bc3000000010000
//	#define BASIC_PLUGINS_HASH				0x55f4700000010000
	#define PSP_EMULATOR_HASH				0xcc29b00000020000
	#define PEMUCORELIB_HASH				0x40425000000c0000
	#define EMULATOR_API_HASH				0x8409f00000010000
	#define EMULATOR_DRM_HASH				0xbbb8800000005000
	#define EMULATOR_DRM_DATA_HASH			0x2f3ab00000010000
	#define LIBSYSUTIL_SAVEDATA_PSP_HASH	0x0dfdc00000003000

	/* bdp_disccheck_plugin */
	#define dvd_video_region_check_offset				0x152C

	/* ps1_emu */
	#define ps1_emu_get_region_offset					0x3E74

	/* ps1_netemu */
	#define ps1_netemu_get_region_offset				0xA4E74

	/* game_ext_plugin */
	#define sfo_check_offset							0x23B90
	#define ps2_nonbw_offset3							0x17000
	#define ps_region_error_offset						0x68C0
	#define remote_play_offset							0x5fc0

	/* premo_plugin */
	#define pcremote_play_offset1						0xb6fc

	/* premo_game_plugin */
	#define pcremote_play_offset2						0xc8fc

	/* nas_plugin */
	#define patch1_nas						0x2eae4
	#define patch2_nas						0x2ec48
	#define patch3_nas						0x1F75C // Install ALL pkgs

	/* download_plugin */
	#define elf_patch1_download				0x42e2c
	#define elf_patch2_download				0x42e34
	/// advanced download patches found by Devil303
	#define elf_patch3_download				0x4D708
	#define elf_patch4_download				0x4E528
	#define elf_patch5_download				0x4E548
	#define elf_patch6_download				0x4E624

	/* autodownload_plugin */
	#define elf_patch1_autodownload			0x82650
	#define elf_patch2_autodownload			0x82658

	/*Cinavia patch*/
	#define bdp_cinavia_patch				0x15ecd0
	#define bdp_cinavia1_patch				0x15ecfc

	/* explore_plugin */
	#define app_home_offset									0x250910
//	#define ps2_nonbw_offset								0xDD9B4
	#define whatsnew_offset									0x26E9B0
//end of #define DO_PATCH_COBRA810

	/* explore_category_game */
	#define ps2_nonbw_offset2								0x68324

	/* bdp_disccheck_plugin	*/
	#define dvd_video_region_check_offset					0x152C

	/* ps1_emu */
	#define ps1_emu_get_region_offset						0x3E74

	/* ps1_netemu */
	#define ps1_netemu_get_region_offset					0xA4E74

	/* game_ext_plugin */
	#define sfo_check_offset								0x23B90
	#define ps2_nonbw_offset3								0x17000
	#define ps_region_error_offset							0x68C0
	#define remote_play_offset								0x5fc0

	/* premo_plugin	*/
	#define pcremote_play_offset1							0xb6fc

	/* premo_game_plugin */
	#define pcremote_play_offset2							0xc8fc
    /* psp_emulator */
    #define psp_set_psp_mode_offset                     0x1C18

    /* emulator_api */
    #define psp_read                                    0x102D8
    #define psp_read_header                             0x1125C
    #define psp_drm_patch5                              0x11080
    #define psp_drm_patch6                              0x110B0
    #define psp_drm_patch7                              0x110C8
    #define psp_drm_patch8                              0x110CC
    #define psp_drm_patch9                              0x1120C
    #define psp_drm_patch11                             0x11210
    #define psp_drm_patch12                             0x11220
    #define psp_product_id_patch1                       0x11320
    #define psp_product_id_patch3                       0x115F8

    /* pemucorelib */
    #define psp_eboot_dec_patch                         0x5E6BC
    #define psp_prx_patch                               0x577D8
    #define psp_savedata_bind_patch1                    0x7A4BC
    #define psp_savedata_bind_patch2                    0x7A514
    #define psp_savedata_bind_patch3                    0x7A030
    #define psp_extra_savedata_patch                    0x87540
    #define psp_prometheus_patch                        0x12EA28
    #define prx_patch_call_lr                           0x5892C

    /* emulator_drm */
    #define psp_drm_tag_overwrite                       0x4C68
    #define psp_drm_key_overwrite                       (0x27600 - 0xBE80)

    /* libsysutil_savedata_psp */
    #define psp_savedata_patch1                         0x46CC
    #define psp_savedata_patch2                         0x46A4
    #define psp_savedata_patch3                         0x4504
    #define psp_savedata_patch4                         0x453C
    #define psp_savedata_patch5                         0x4550
    #define psp_savedata_patch6                         0x46B8

    /* libfs */
    #define aio_copy_root_offset                        0xD658

    /* rebug */
    #define EXPLORE_PLUGIN_REBUG_HASH                   0xACF4AF2B000ECC91
    #define EXPLORE_CATEGORY_GAME_REBUG_HASH            0x9CB3396E00056CE9
    #define GAME_EXT_PLUGIN_REBUG_HASH                  0xE274AF7B0001E5D3
    #define dex_ps2_nonbw_offset                        0xDDDC4
    #define dex_ps2_nonbw_offset2                       0x68264
    #define dex_ps2_nonbw_offset3                       0x172F0
    #define dex_ps2tonet_patch                          0xCA380
    #define dex_ps2tonet_size_patch                     0xCA374
    #define dex_vmode_patch_offset                      0x44ADD0
    #define dex_psp_drm_patch1                          0x24A7E8
    #define dex_psp_drm_patch2                          0x24B288
    #define dex_psp_drm_patch3                          0x24AEC4
    #define dex_psp_drm_patch4                          0x24B6D0
    #define dex_psp_drm_patchA                          0x24A904
    #define dex_psp_drm_patchB                          0x24B1A4
    #define dex_psp_drm_patchC                          0x24A33C
    #define dex_psp_drm_patchD                          0x24A8EC
    #define dex_psp_drm_patchE                          0x24A8F0
    #define dex_psp_drm_patchF                          0x24B2BC
    #define dex_psp_extra_drm_patch                     0x24D318
#endif
