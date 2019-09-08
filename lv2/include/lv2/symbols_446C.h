#ifdef FIRMWARE_446C

    #define FIRMWARE_VERSION                                 0x446
    #define FIRMWARE_CEX                                     FIRMWARE_VERSION

    #ifdef PS3M_API
        #define PS3MAPI_FW_TYPE                              "CEX MAMBA"
        #define PS3MAPI_IDPS_1                               0x80000000003DBE30ULL
        #define PS3MAPI_IDPS_2                               0x8000000000476F3CULL
        #define PS3MAPI_PSID                                 0x8000000000476F54ULL
    #endif

    /* lv2 */
    #define TOC                                              0x348DF0
    #define open_shared_kernel_object_symbol                 0x12474
    #define close_kernel_object_handle_symbol                0x11A94
    #define open_kernel_object_symbol                        0x12664
    #define alloc_symbol                                     0x62F78
    #define dealloc_symbol                                   0x633B4
    #define copy_to_user_symbol                              0xF85C
    #define copy_from_user_symbol                            0xFA78
    #define copy_to_process_symbol                           0xF914
    #define copy_from_process_symbol                         0xF724
    #define page_allocate_symbol                             0x5EAE8
    #define page_free_symbol                                 0x5E54C
    #define page_export_to_proc_symbol                       0x5EC84
    #define page_unexport_from_proc_symbol                   0x5E440
    #define kernel_ea_to_lpar_addr_symbol                    0x6E86C
    #define map_process_memory_symbol                        0x7598C
    #define memcpy_symbol                                    0x7D04C
    #define memset_symbol                                    0x4D494
    #define memcmp_symbol                                    0x4C7A4
    #define printf_symbol                                    0x2A0800
    #define printfnull_symbol                                0x2A5270
    #define sprintf_symbol                                   0x4E8BC
    #define snprintf_symbol                                  0x4E828
    #define strcpy_symbol                                    0x4D640
    #define strncpy_symbol                                   0x4D708
    #define strlen_symbol                                    0x4D668
    #define strcat_symbol                                    0x4D570
    #define strcmp_symbol                                    0x4D5EC
    #define strncmp_symbol                                   0x4D694
    #define strchr_symbol                                    0x4D5A8
    #define spin_lock_irqsave_ex_symbol                      0x29D900
    #define spin_unlock_irqrestore_ex_symbol                 0x29D8D4
    #define load_process_symbol                              0x5004
    #define ppu_thread_create_symbol                         0x13F2C
    #define ppu_thread_exit_symbol                           0x13FE4
    #define ppu_thread_join_symbol                           0x14038
    #define ppu_thread_delay_symbol                          0x285CC
    #define create_user_thread2_symbol                       0x24EB0
    #define start_thread_symbol                              0x23B7C
    #define run_thread_symbol                                0x233AC
    #define register_thread_symbol                           0x297B10
    #define allocate_user_stack_symbol                       0x2982F8
    #define mutex_create_symbol                              0x136A0
    #define mutex_destroy_symbol                             0x13638
    #define mutex_lock_symbol                                0x13630
    #define mutex_unlock_symbol                              0x13628
    #define event_port_create_symbol                         0x130DC
    #define event_port_destroy_symbol                        0x13544
    #define event_port_connect_symbol                        0x135BC
    #define event_port_disconnect_symbol                     0x134E8
    #define event_port_send_symbol                           0x130D4
    #define event_queue_create_symbol                        0x133E4
    #define event_queue_destroy_symbol                       0x1336C
    #define event_queue_receive_symbol                       0x131B0
    #define cellFsOpen_symbol                                0x2C4A78
    #define cellFsClose_symbol                               0x2C48E0
    #define cellFsRead_symbol                                0x2C4A1C
    #define cellFsWrite_symbol                               0x2C4988
    #define cellFsLseek_symbol                               0x2C4010
    #define cellFsStat_symbol                                0x2C4294
    #define cellFsUnlink_internal_symbol                     0x1AAF70
    #define cellFsUtilMount_symbol                           0x2C3DF0
    #define cellFsUtilUmount_symbol                          0x2C3DC4
    #define pathdup_from_user_symbol                         0x1B1000
    #define open_path_symbol                                 0x2C47B0
    #define open_fs_object_symbol                            0x190420
    #define close_fs_object_symbol                           0x18F41C
    #define storage_get_device_info_symbol                   0x2A9C50
    #define storage_open_symbol                              0x2A9660
    #define storage_close_symbol                             0x2A9450
    #define storage_read_symbol                              0x2A89C0
    #define storage_send_device_command_symbol               0x2A854C
    #define storage_map_io_memory_symbol                     0x2A9B0C
    #define storage_unmap_io_memory_symbol                   0x2A99D8
    #define storage_internal_get_device_object_symbol        0x2A8004
    #define decrypt_func_symbol                              0x34798
    #define lv1_call_99_wrapper_symbol                       0x4ECD0
    #define modules_verification_symbol                      0x58828
    #define prx_load_module_symbol                           0x87234
    #define prx_start_module_symbol                          0x85F00
    #define prx_stop_module_symbol                           0x872D8
    #define prx_unload_module_symbol                         0x85C34
    #define prx_get_module_info_symbol                       0x856BC
    #define prx_get_module_list_symbol                       0x8573C
    #define extend_kstack_symbol                             0x6E7C4
    #define get_pseudo_random_number_symbol                  0x2587A0
    #define syscall_table_symbol                             0x35E860
    #define syscall_call_offset                              0x2A5D54
    #define read_bdvd0_symbol                                0x1BBF70
    #define read_bdvd1_symbol                                0x1BDB9C
    #define read_bdvd2_symbol                                0x1CAD54
    #define device_event_port_send_call                      0x2B2184
    #define process_map_caller_call                          0x4D24
    #define fsloop_open_call                                 0x2C4C10
    #define fsloop_close_call                                0x2C4C60
    #define fsloop_read_call                                 0x2C4CA0
    #define io_rtoc_entry_1                                 -0x150
    #define io_sub_rtoc_entry_1                             -0x7EA0
    #define decrypt_rtoc_entry_2                            -0x6688
    #define storage_rtoc_entry_1                             0x1E98
    #define device_event_rtoc_entry_1                        0x2108
    #define process_rtoc_entry_1                            -0x7800
    #define patch_func2                                      0x591E0
    #define patch_func2_offset                               0x2C
    #define user_thread_prio_patch                           0x2022C
    #define user_thread_prio_patch2                          0x20238
    #define shutdown_patch_offset                            0xAAA8
    #define shutdown_copy_params_call                        0xAABC

    /* hash */
    #define EXPLORE_PLUGIN_HASH                         0xACF4AF2B000EC8A6
    #define EXPLORE_CATEGORY_GAME_HASH                  0x9CB3C7F100056FAA
    #define GAME_EXT_PLUGIN_HASH                        0xE274AF7B0001DDFD
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
    #define ps2tonet_patch                              0xC4D64
    #define ps2tonet_size_patch                         0xC4D58
    #define vmode_patch_offset                          0x442D68
    #define psp_drm_patch1                              0x23EEF8
    #define psp_drm_patch2                              0x23F998
    #define psp_drm_patch3                              0x23F5D4
    #define psp_drm_patch4                              0x23FDE0
    #define psp_drm_patchA                              0x23F014
    #define psp_drm_patchB                              0x23F8B4
    #define psp_drm_patchC                              0x23EA4C
    #define psp_drm_patchD                              0x23EFFC
    #define psp_drm_patchE                              0x23F000
    #define psp_drm_patchF                              0x23F9CC
    #define psp_extra_drm_patch                         0x0

    /* explore_plugin */
    #define ps2_nonbw_offset                            0xDE81C

    /* explore_category_game */
    #define ps2_nonbw_offset2                           0x69D28

    /* game_ext_plugin */
    #define ps2_nonbw_offset3                           0x167F8

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

    /* rebug */
    #define EXPLORE_PLUGIN_REBUG_HASH                   0xACF4AF2B000ED168
    #define EXPLORE_CATEGORY_GAME_REBUG_HASH            0x9CB3CAFD000572DD
    #define GAME_EXT_PLUGIN_REBUG_HASH                  0xE274AF7B0001DE6B
    #define dex_ps2_nonbw_offset                        0xDEC48
    #define dex_ps2_nonbw_offset2                       0x69A5C
    #define dex_ps2_nonbw_offset3                       0x16AE8
    #define dex_ps2tonet_patch                          0xCA2C0
    #define dex_ps2tonet_size_patch                     0xCA2B4
    #define dex_vmode_patch_offset                      0x44A970
    #define dex_psp_drm_patch1                          0x246734
    #define dex_psp_drm_patch2                          0x2471D4
    #define dex_psp_drm_patch3                          0x246E10
    #define dex_psp_drm_patch4                          0x24761C
    #define dex_psp_drm_patchA                          0x246850
    #define dex_psp_drm_patchB                          0x2470F0
    #define dex_psp_drm_patchC                          0x246288
    #define dex_psp_drm_patchD                          0x246838
    #define dex_psp_drm_patchE                          0x24683C
    #define dex_psp_drm_patchF                          0x247208
    #define dex_psp_extra_drm_patch                     0x0
#endif
