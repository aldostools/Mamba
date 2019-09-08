#ifdef FIRMWARE_446D

    #define FIRMWARE_VERSION                                 0x446
    #define FIRMWARE_DEX                                     FIRMWARE_VERSION

    #ifdef PS3M_API
        #define PS3MAPI_FW_TYPE                              "DEX MAMBA"
        #define PS3MAPI_IDPS_1                               0x80000000003FA8B0ULL
        #define PS3MAPI_IDPS_2                               0x8000000000496F3CULL
        #define PS3MAPI_PSID                                 0x8000000000496F54ULL
    #endif

    /* lv2 */
    #define TOC                                              0x366BD0
    #define open_shared_kernel_object_symbol                 0x12ABC
    #define close_kernel_object_handle_symbol                0x120DC
    #define open_kernel_object_symbol                        0x12CAC
    #define alloc_symbol                                     0x66890
    #define dealloc_symbol                                   0x66CCC
    #define copy_to_user_symbol                              0xFEA4
    #define copy_from_user_symbol                            0x100C0
    #define copy_to_process_symbol                           0xFF5C
    #define copy_from_process_symbol                         0xFD6C
    #define page_allocate_symbol                             0x62400
    #define page_free_symbol                                 0x61E64
    #define page_export_to_proc_symbol                       0x6259C
    #define page_unexport_from_proc_symbol                   0x61D58
    #define kernel_ea_to_lpar_addr_symbol                    0x72304
    #define map_process_memory_symbol                        0x799B0
    #define memcpy_symbol                                    0x81070
    #define memset_symbol                                    0x50D84
    #define memcmp_symbol                                    0x50094
    #define printf_symbol                                    0x2A8A40
    #define printfnull_symbol                                0x2AD4C4
    #define sprintf_symbol                                   0x521AC
    #define snprintf_symbol                                  0x52118
    #define strcpy_symbol                                    0x50F30
    #define strncpy_symbol                                   0x50FF8
    #define strlen_symbol                                    0x50F58
    #define strcat_symbol                                    0x50E60
    #define strcmp_symbol                                    0x50EDC
    #define strncmp_symbol                                   0x50F84
    #define strchr_symbol                                    0x50E98
    #define spin_lock_irqsave_ex_symbol                      0x2A574C
    #define spin_unlock_irqrestore_ex_symbol                 0x2A5720
    #define load_process_symbol                              0x5004
    #define ppu_thread_create_symbol                         0x145A8
    #define ppu_thread_exit_symbol                           0x14660
    #define ppu_thread_join_symbol                           0x146B4
    #define ppu_thread_delay_symbol                          0x2A458
    #define create_user_thread2_symbol                       0x26AA8
    #define start_thread_symbol                              0x255E0
    #define run_thread_symbol                                0x24DA4
    #define register_thread_symbol                           0x29E374
    #define allocate_user_stack_symbol                       0x29EB5C
    #define mutex_create_symbol                              0x13CF0
    #define mutex_destroy_symbol                             0x13C88
    #define mutex_lock_symbol                                0x13C80
    #define mutex_unlock_symbol                              0x13C78
    #define event_port_create_symbol                         0x1372C
    #define event_port_destroy_symbol                        0x13B94
    #define event_port_connect_symbol                        0x13C0C
    #define event_port_disconnect_symbol                     0x13B38
    #define event_port_send_symbol                           0x13724
    #define event_queue_create_symbol                        0x13A34
    #define event_queue_destroy_symbol                       0x139BC
    #define event_queue_receive_symbol                       0x13800
    #define cellFsOpen_symbol                                0x2DBF24
    #define cellFsClose_symbol                               0x2DBD8C
    #define cellFsRead_symbol                                0x2DBEC8
    #define cellFsWrite_symbol                               0x2DBE34
    #define cellFsLseek_symbol                               0x2DB688
    #define cellFsStat_symbol                                0x2DB740
    #define cellFsUnlink_internal_symbol                     0x1B1244
    #define cellFsUtilMount_symbol                           0x2DB3FC
    #define cellFsUtilUmount_symbol                          0x2DB3D0
    #define pathdup_from_user_symbol                         0x1B73F0
    #define open_path_symbol                                 0x2DBC5C
    #define open_fs_object_symbol                            0x1966F4
    #define close_fs_object_symbol                           0x1956F0
    #define storage_get_device_info_symbol                   0x2BC858
    #define storage_open_symbol                              0x2BCA80
    #define storage_close_symbol                             0x2BB26C
    #define storage_read_symbol                              0x2BA454
    #define storage_send_device_command_symbol               0x2B9F74
    #define storage_map_io_memory_symbol                     0x2BC704
    #define storage_unmap_io_memory_symbol                   0x2BC5C0
    #define storage_internal_get_device_object_symbol        0x2B9A2C
    #define decrypt_func_symbol                              0x38000
    #define lv1_call_99_wrapper_symbol                       0x525C0
    #define modules_verification_symbol                      0x5C140
    #define prx_load_module_symbol                           0x8B880
    #define prx_start_module_symbol                          0x8A54C
    #define prx_stop_module_symbol                           0x8B924
    #define prx_unload_module_symbol                         0x8A280
    #define prx_get_module_info_symbol                       0x89C78
    #define prx_get_module_list_symbol                       0x89CF8
    #define extend_kstack_symbol                             0x7225C
    #define get_pseudo_random_number_symbol                  0x25EBBC
    #define syscall_table_symbol                             0x37CFE8
    #define syscall_call_offset                              0x2ADFA8
    #define read_bdvd0_symbol                                0x1C2360
    #define read_bdvd1_symbol                                0x1C3F8C
    #define read_bdvd2_symbol                                0x1D1144
    #define device_event_port_send_call                      0x2C6A1C
    #define process_map_caller_call                          0x4D24
    #define fsloop_open_call                                 0x2DC0BC
    #define fsloop_close_call                                0x2DC10C
    #define fsloop_read_call                                 0x2DC14C
    #define io_rtoc_entry_1                                 -0x20
    #define io_sub_rtoc_entry_1                             -0x7EA0
    #define decrypt_rtoc_entry_2                            -0x65A8
    #define storage_rtoc_entry_1                             0x2370
    #define device_event_rtoc_entry_1                        0x26F8
    #define process_rtoc_entry_1                            -0x77A0
    #define patch_func2                                      0x5CAF8
    #define patch_func2_offset                               0x2C
    #define user_thread_prio_patch                           0x21C24
    #define user_thread_prio_patch2                          0x21C30
    #define shutdown_patch_offset                            0xAB28
    #define shutdown_copy_params_call                        0xAB3C

    /* hash */
    #define EXPLORE_PLUGIN_HASH                         0xACF4AF2B000ED168
    #define EXPLORE_CATEGORY_GAME_HASH                  0x9CB3CAFD000572DD
    #define GAME_EXT_PLUGIN_HASH                        0xE274AF7B0001DE6B
    #define LIBFS_EXTERNAL_HASH                         0x5BC7BEC800006433
    #define PSP_EMULATOR_HASH                           0x7BE645A900023721
    #define PEMUCORELIB_HASH                            0xF349A563000C0CF3
    #define EMULATOR_API_HASH                           0xA9F5B55A0001B7C2
    #define EMULATOR_DRM_HASH                           0xA324DC4A0000539C
    #define EMULATOR_DRM_DATA_HASH                      0x1D8D2DA00001B6E4
    #define LIBSYSUTIL_SAVEDATA_PSP_HASH                0x57BBC3B800003212

    /* lv1 */
    #define vsh_pos_in_ram                              0x910000

    /* vsh */
    #define ps2tonet_patch                              0xCA2C0
    #define ps2tonet_size_patch                         0xCA2B4
    #define vmode_patch_offset                          0x44A970
    #define psp_drm_patch1                              0x246734
    #define psp_drm_patch2                              0x2471D4
    #define psp_drm_patch3                              0x246E10
    #define psp_drm_patch4                              0x24761C
    #define psp_drm_patchA                              0x246850
    #define psp_drm_patchB                              0x2470F0
    #define psp_drm_patchC                              0x246288
    #define psp_drm_patchD                              0x246838
    #define psp_drm_patchE                              0x24683C
    #define psp_drm_patchF                              0x247208
    #define psp_extra_drm_patch                         0x0

    /* explore_plugin */
    #define ps2_nonbw_offset                            0xDEC48

    /* explore_category_game */
    #define ps2_nonbw_offset2                           0x69A5C

    /* game_ext_plugin */
    #define ps2_nonbw_offset3                           0x16AE8

    /* psp_emulator */
    #define psp_set_psp_mode_offset                     0x1BF8

    /* emulator_api */
    #define psp_read                                    0xFC60
    #define psp_read_header                             0x10BE4
    #define psp_drm_patch5                              0x10A08
    #define psp_drm_patch6                              0x10A38
    #define psp_drm_patch7                              0x10A50
    #define psp_drm_patch8                              0x10A54
    #define psp_drm_patch9                              0x10B94
    #define psp_drm_patch11                             0x10B98
    #define psp_drm_patch12                             0x10BA8
    #define psp_product_id_patch1                       0x10CA8
    #define psp_product_id_patch3                       0x10F80

    /* pemucorelib */
    #define psp_eboot_dec_patch                         0x5E6B0
    #define psp_prx_patch                               0x577CC
    #define psp_savedata_bind_patch1                    0x7A4B0
    #define psp_savedata_bind_patch2                    0x7A508
    #define psp_savedata_bind_patch3                    0x7A024
    #define psp_extra_savedata_patch                    0x87530
    #define psp_prometheus_patch                        0x12EA28
    #define prx_patch_call_lr                           0x58920

    /* emulator_drm */
    #define psp_drm_tag_overwrite                       0x4C68
    #define psp_drm_key_overwrite                       (0x27580 - 0xBE80)

    /* libsysutil_savedata_psp */
    #define psp_savedata_patch1                         0x46CC
    #define psp_savedata_patch2                         0x46A4
    #define psp_savedata_patch3                         0x4504
    #define psp_savedata_patch4                         0x453C
    #define psp_savedata_patch5                         0x4550
    #define psp_savedata_patch6                         0x46B8

    /* libfs */
    #define aio_copy_root_offset                        0xD5B4

    /* CEX */
    #define cex_ps2tonet_patch                          0xC4D64
    #define cex_ps2tonet_size_patch                     0xC4D58
    #define cex_vmode_patch_offset                      0x442D68
    #define cex_psp_drm_patch1                          0x23EEF8
    #define cex_psp_drm_patch2                          0x23F998
    #define cex_psp_drm_patch3                          0x23F5D4
    #define cex_psp_drm_patch4                          0x23FDE0
    #define cex_psp_drm_patchA                          0x23F014
    #define cex_psp_drm_patchB                          0x23F8B4
    #define cex_psp_drm_patchC                          0x23EA4C
    #define cex_psp_drm_patchD                          0x23EFFC
    #define cex_psp_drm_patchE                          0x23F000
    #define cex_psp_drm_patchF                          0x23F9CC
    #define cex_psp_extra_drm_patch                     0x0
#endif
