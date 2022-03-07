#if defined(FIRMWARE_475E) || defined(FIRMWARE_476E) || defined(FIRMWARE_478E) || defined(FIRMWARE_480E) || defined(FIRMWARE_481E) || defined(FIRMWARE_482E) || defined(FIRMWARE_483E) || defined(FIRMWARE_484E) || defined(FIRMWARE_485E) || defined(FIRMWARE_486E) || defined(FIRMWARE_487E) || defined(FIRMWARE_488E) || defined(FIRMWARE_489E)

	/* WIP: these offsets are a mix from 4.80 DEX and 4.78 DEH; they haven't been verified due the lack of a DECR system to test */

	#if defined(FIRMWARE_475E)
		#define FIRMWARE_VERSION                        0x475
	#elif defined(FIRMWARE_476E)
		#define FIRMWARE_VERSION                        0x476
	#elif defined(FIRMWARE_478E)
		#define FIRMWARE_VERSION                        0x478
	#elif defined(FIRMWARE_480E)
		#define FIRMWARE_VERSION                        0x480
	#elif defined(FIRMWARE_481E)
		#define FIRMWARE_VERSION                        0x481
	#elif defined(FIRMWARE_482E)
		#define FIRMWARE_VERSION                        0x482
	#elif defined(FIRMWARE_483E)
		#define FIRMWARE_VERSION                        0x483
	#elif defined(FIRMWARE_484E)
		#define FIRMWARE_VERSION                        0x484
	#elif defined(FIRMWARE_485E)
		#define FIRMWARE_VERSION                        0x485
	#elif defined(FIRMWARE_486E)
		#define FIRMWARE_VERSION                        0x486
	#elif defined(FIRMWARE_487E)
		#define FIRMWARE_VERSION                        0x487
	#elif defined(FIRMWARE_488E)
		#define FIRMWARE_VERSION                        0x488
	#elif defined(FIRMWARE_489E)
		#define FIRMWARE_VERSION                        0x489
    #endif
    #define FIRMWARE_DEH                                FIRMWARE_VERSION
    #define FIRMWARE_48XE

	#ifdef PS3M_API
        //#define PS3MAPI_FW_VERSION                      FIRMWARE_VERSION
		#define PS3MAPI_FW_TYPE                         "DEH MAMBA"
		#define PS3MAPI_IDPS_1                          0x8000000000409A30ULL
		#define PS3MAPI_IDPS_2                          0x800000000049CAF4ULL
		#define PS3MAPI_PSID                            0x800000000049CB0CULL
    #endif

	/* lv2 */
    #define TOC                                         0x39D440
    #define open_shared_kernel_object_symbol            0x12A58
    #define close_kernel_object_handle_symbol           0x12078
    #define open_kernel_object_symbol                   0x12C48
    #define alloc_symbol                                0x685DC
    #define dealloc_symbol                              0x68A18
    #define copy_to_user_symbol                         0xFEB4
    #define copy_from_user_symbol                       0x100D0
    #define copy_to_process_symbol                      0xFF6C
    #define copy_from_process_symbol                    0xFD7C
    #define page_allocate_symbol                        0x6414C
    #define page_free_symbol                            0x63BB0
    #define page_export_to_proc_symbol                  0x642E8
    #define page_unexport_from_proc_symbol              0x63AA4
    #define kernel_ea_to_lpar_addr_symbol               0x74084
    #define map_process_memory_symbol                   0x7B9D8
    #define memcpy_symbol                               0x83098
    #define memset_symbol                               0x513FC
    #define memcmp_symbol                               0x5070C
    #define printf_symbol                               0x281878
    #define printfnull_symbol                           0x27E9B4
    #define sprintf_symbol                              0x52824
    #define snprintf_symbol                             0x52790
    #define strcpy_symbol                               0x515A8
    #define strncpy_symbol                              0x51670
    #define strlen_symbol                               0x515D0
    #define strcat_symbol                               0x514D8
    #define strcmp_symbol                               0x51554
    #define strncmp_symbol                              0x515FC
    #define strchr_symbol                               0x51510
    #define spin_lock_irqsave_ex_symbol                 0x2765F0
    #define spin_unlock_irqrestore_ex_symbol            0x2765C4
    #define load_process_symbol                         0x5004
    #define ppu_thread_create_symbol                    0x1454C
    #define ppu_thread_exit_symbol                      0x14604
    #define ppu_thread_join_symbol                      0x14658
    #define ppu_thread_delay_symbol                     0x2AA28
    #define create_user_thread2_symbol                  0x27070
    #define start_thread_symbol                         0x25BA8
    #define run_thread_symbol                           0x2536C
    #define register_thread_symbol                      0x26EDB8
    #define allocate_user_stack_symbol                  0x26F6C0
    #define mutex_create_symbol                         0x13C8C
    #define mutex_destroy_symbol                        0x13C24
    #define mutex_lock_symbol                           0x13C1C
    #define mutex_unlock_symbol                         0x13C14
    #define event_port_create_symbol                    0x136C8
    #define event_port_destroy_symbol                   0x13B30
    #define event_port_connect_symbol                   0x13BA8
    #define event_port_disconnect_symbol                0x13AD4
    #define event_port_send_symbol                      0x136C0
    #define event_queue_create_symbol                   0x139D0
    #define event_queue_destroy_symbol                  0x13958
    #define event_queue_receive_symbol                  0x1379C
    #define cellFsOpen_symbol                           0x2C8AA8
    #define cellFsClose_symbol                          0x2C8910
    #define cellFsRead_symbol                           0x2C8A4C
    #define cellFsWrite_symbol                          0x2C89B8
    #define cellFsLseek_symbol                          0x2C8040
    #define cellFsStat_symbol                           0x2C82C4
    #define cellFsUnlink_internal_symbol                0x1A3620
    #define cellFsUtilMount_symbol                      0x2C7D98
    #define cellFsUtilUmount_symbol                     0x2C7D6C
    #define pathdup_from_user_symbol                    0x2CDBF8
    #define open_path_symbol                            0x2C87E0
    #define open_fs_object_symbol                       0x191944
    #define close_fs_object_symbol                      0x190880
    #define storage_get_device_info_symbol              0x2A1854
    #define storage_open_symbol                         0x2A1A7C
    #define storage_close_symbol                        0x29FD88
    #define storage_read_symbol                         0x29F52C
    #define storage_send_device_command_symbol          0x29F04C
    #define storage_map_io_memory_symbol                0x2A1700
    #define storage_unmap_io_memory_symbol              0x2A27A4
    #define storage_internal_get_device_object_symbol   0x29E8C8
    #define decrypt_func_symbol                         0x38678
    #define lv1_call_99_wrapper_symbol                  0x52C38
    #define modules_verification_symbol                 0x5C870
    #define prx_load_module_symbol                      0x8D998
    #define prx_start_module_symbol                     0x8C664
    #define prx_stop_module_symbol                      0x8DA3C
    #define prx_unload_module_symbol                    0x8C398
    #define prx_get_module_info_symbol                  0x8BD90
    #define prx_get_module_list_symbol                  0x8BE10
    #define extend_kstack_symbol                        0x73FDC
    #define get_pseudo_random_number_symbol             0x22F2A4
    #define syscall_table_symbol                        0x3B28F8
    #define syscall_call_offset                         0x285E70
    #define read_bdvd0_symbol                           0x1AB714
    #define read_bdvd1_symbol                           0x1AD340
    #define read_bdvd2_symbol                           0x1BA4F8
    #define device_event_port_send_call                 0x2B3334
    #define process_map_caller_call                     0x4D24
    #define fsloop_open_call                            0x2C8C40
    #define fsloop_close_call                           0x2C8C90
    #define fsloop_read_call                            0x2C8CD0
    #define io_rtoc_entry_1                             0x3800
    #define io_sub_rtoc_entry_1                         -0x7EA0
    #define decrypt_rtoc_entry_2                        -0x6578
    #define storage_rtoc_entry_1                        0x2C10
    #define device_event_rtoc_entry_1                   0x2F98
    #define process_rtoc_entry_1                        -0x7758
    #define user_thread_prio_patch                      0x221EC
    #define user_thread_prio_patch2                     0x221F8
    #define patch_func2                                 0x5DB3C
    #define patch_func2_offset                          0x2C
    #define shutdown_copy_params_call                   0xAB4C
    #define shutdown_patch_offset                       0xAB38

    #define lic_patch										0x59C00
    #define ode_patch										0x22DAD0

    #define sm_get_temperature_symbol						0x269A84
    #define sm_get_fan_policy_symbol						0x268E18
    #define sm_set_fan_policy_symbol						0x26ADE0

	/* hash */
    #define EXPLORE_PLUGIN_HASH                         0xacf4af2b000ec414
    #define EXPLORE_CATEGORY_GAME_HASH                  0x9cb378e600056ae1
    #define GAME_EXT_PLUGIN_HASH                        0xe274af7b0001e6c0
    #define LIBFS_EXTERNAL_HASH                         0x5bc7bce800006477
    #define PSP_EMULATOR_HASH                           0x7be641f500023793
    #define PEMUCORELIB_HASH                            0xF349A563000C0D66
    #define EMULATOR_API_HASH                           0xA9F5B37A0001BB45
    #define EMULATOR_DRM_HASH                           0xA324DC4A00005399
    #define EMULATOR_DRM_DATA_HASH                      0x75C390860001B75F
    #define LIBSYSUTIL_SAVEDATA_PSP_HASH                0x57BBC3B800003212

	/* lv1 */
    #define vsh_pos_in_ram                              0x930000

	/* vsh */
    #define ps2tonet_patch                              0xC9578
    #define ps2tonet_size_patch                         0xC956C
    #define vmode_patch_offset                          0x44D0C8
    #define psp_drm_patch1                              0x24CB14
    #define psp_drm_patch2                              0x24D5B4
    #define psp_drm_patch3                              0x24D1F0
    #define psp_drm_patch4                              0x24D9FC
    #define psp_drm_patchA                              0x24CC30
    #define psp_drm_patchB                              0x24D4D0
    #define psp_drm_patchC                              0x24C668
    #define psp_drm_patchD                              0x24CC18
    #define psp_drm_patchE                              0x24CC1C
    #define psp_drm_patchF                              0x24D5E8
    #define psp_extra_drm_patch                         0x24F644

	/* explore_plugin */
    #define ps2_nonbw_offset                            0xDD9B4

	/* explore_category_game */
    #define ps2_nonbw_offset2                           0x68324

	/* game_ext_plugin */
    #define ps2_nonbw_offset3                           0x17000

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

	/* CEX */
    #define cex_ps2tonet_patch                          0xC9578
    #define cex_ps2tonet_size_patch                     0xC956C
    #define cex_vmode_patch_offset                      0x44D0C8
    #define cex_psp_drm_patch1                          0x24CB14
    #define cex_psp_drm_patch2                          0x24D5B4
    #define cex_psp_drm_patch3                          0x24D1F0
    #define cex_psp_drm_patch4                          0x24D9FC
    #define cex_psp_drm_patchA                          0x24CC30
    #define cex_psp_drm_patchB                          0x24D4D0
    #define cex_psp_drm_patchC                          0x24C668
    #define cex_psp_drm_patchD                          0x24CC18
    #define cex_psp_drm_patchE                          0x24CC1C
    #define cex_psp_drm_patchF                          0x24D5E8
    #define cex_psp_extra_drm_patch                     0x24F644
#endif
