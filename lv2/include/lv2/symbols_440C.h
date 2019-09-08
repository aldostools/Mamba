#ifdef FIRMWARE_440C

    #define FIRMWARE_VERSION                                 0x440
    #define FIRMWARE_CEX                                     FIRMWARE_VERSION

    #ifdef PS3M_API
        #define PS3MAPI_FW_TYPE                              "CEX MAMBA"
        #define PS3MAPI_IDPS_1                               0x80000000003DB830ULL
        #define PS3MAPI_IDPS_2                               0x8000000000476F3CULL
        #define PS3MAPI_PSID                                 0x8000000000476F54ULL
    #endif

    /* lv2 */
    #define TOC                                              0x3487D0
    #define open_shared_kernel_object_symbol                 0x12470
    #define close_kernel_object_handle_symbol                0x11A90
    #define open_kernel_object_symbol                        0x12660
    #define alloc_symbol                                     0x62F74
    #define dealloc_symbol                                   0x633B0
    #define copy_to_user_symbol                              0xF858
    #define copy_from_user_symbol                            0xFA74
    #define copy_to_process_symbol                           0xF910
    #define copy_from_process_symbol                         0xF720
    #define page_allocate_symbol                             0x5EAE4
    #define page_free_symbol                                 0x5E548
    #define page_export_to_proc_symbol                       0x5EC80
    #define page_unexport_from_proc_symbol                   0x5E43C
    #define kernel_ea_to_lpar_addr_symbol                    0x6E868
    #define map_process_memory_symbol                        0x75988
    #define memcpy_symbol                                    0x7D048
    #define memset_symbol                                    0x4D490
    #define memcmp_symbol                                    0x4C7A0
    #define printf_symbol                                    0x2A02D4
    #define printfnull_symbol                                0x2A4D44
    #define sprintf_symbol                                   0x4E8B8
    #define snprintf_symbol                                  0x4E824
    #define strcpy_symbol                                    0x4D63C
    #define strncpy_symbol                                   0x4D704
    #define strlen_symbol                                    0x4D664
    #define strcat_symbol                                    0x4D56C
    #define strcmp_symbol                                    0x4D5E8
    #define strncmp_symbol                                   0x4D690
    #define strchr_symbol                                    0x4D5A4
    #define spin_lock_irqsave_ex_symbol                      0x29D3D4
    #define spin_unlock_irqrestore_ex_symbol                 0x29D3A8
    #define load_process_symbol                              0x5004
    #define ppu_thread_create_symbol                         0x13F28
    #define ppu_thread_exit_symbol                           0x13FE0
    #define ppu_thread_join_symbol                           0x14034
    #define ppu_thread_delay_symbol                          0x285C8
    #define create_user_thread2_symbol                       0x24EAC
    #define start_thread_symbol                              0x23B78
    #define run_thread_symbol                                0x233A8
    #define register_thread_symbol                           0x2975E4
    #define allocate_user_stack_symbol                       0x297DCC
    #define mutex_create_symbol                              0x1369C
    #define mutex_destroy_symbol                             0x13634
    #define mutex_lock_symbol                                0x1362C
    #define mutex_unlock_symbol                              0x13624
    #define event_port_create_symbol                         0x130D8
    #define event_port_destroy_symbol                        0x13540
    #define event_port_connect_symbol                        0x135B8
    #define event_port_disconnect_symbol                     0x134E4
    #define event_port_send_symbol                           0x130D0
    #define event_queue_create_symbol                        0x133E0
    #define event_queue_destroy_symbol                       0x13368
    #define event_queue_receive_symbol                       0x131AC
    #define cellFsOpen_symbol                                0x2C454C
    #define cellFsClose_symbol                               0x2C43B4
    #define cellFsRead_symbol                                0x2C44F0
    #define cellFsWrite_symbol                               0x2C445C
    #define cellFsLseek_symbol                               0x2C3AE4
    #define cellFsStat_symbol                                0x2C3D68
    #define cellFsUnlink_internal_symbol                     0x1AAD08
    #define cellFsUtilMount_symbol                           0x2C38C4
    #define cellFsUtilUmount_symbol                          0x2C3898
    #define pathdup_from_user_symbol                         0x1B0D98
    #define open_path_symbol                                 0x2EA518
    #define open_fs_object_symbol                            0x1903A0
    #define close_fs_object_symbol                           0x18F370
    #define storage_get_device_info_symbol                   0x2A9724
    #define storage_open_symbol                              0x2A9134
    #define storage_close_symbol                             0x2A8F24
    #define storage_read_symbol                              0x2A8494
    #define storage_send_device_command_symbol               0x2A8020
    #define storage_map_io_memory_symbol                     0x2A95E0
    #define storage_unmap_io_memory_symbol                   0x2A94AC
    #define storage_internal_get_device_object_symbol        0x2A7AD8
    #define decrypt_func_symbol                              0x34794
    #define lv1_call_99_wrapper_symbol                       0x4ECCC
    #define modules_verification_symbol                      0x58824
    #define prx_load_module_symbol                           0x87230
    #define prx_start_module_symbol                          0x85EFC
    #define prx_stop_module_symbol                           0x872D4
    #define prx_unload_module_symbol                         0x85C30
    #define prx_get_module_info_symbol                       0x856B8
    #define prx_get_module_list_symbol                       0x85738
    #define extend_kstack_symbol                             0x6E7C0
    #define get_pseudo_random_number_symbol                  0x258278
    #define syscall_table_symbol                             0x35E260
    #define syscall_call_offset                              0x2A5828
    #define read_bdvd0_symbol                                0x1BBD08
    #define read_bdvd1_symbol                                0x1BD934
    #define read_bdvd2_symbol                                0x1CAAEC
    #define device_event_port_send_call                      0x2B1C58
    #define process_map_caller_call                          0x4D24
    #define fsloop_open_call                                 0x2C46E4
    #define fsloop_close_call                                0x2C4734
    #define fsloop_read_call                                 0x2C4774
    #define io_rtoc_entry_1                                 -0x150
    #define io_sub_rtoc_entry_1                             -0x7EA0
    #define decrypt_rtoc_entry_2                            -0x6688
    #define storage_rtoc_entry_1                             0x1E98
    #define device_event_rtoc_entry_1                        0x2108
    #define process_rtoc_entry_1                            -0x7800
    #define patch_func2                                      0x591DC
    #define patch_func2_offset                               0x2C
    #define user_thread_prio_patch                           0x20228
    #define user_thread_prio_patch2                          0x20234
    #define shutdown_patch_offset                            0xAAA8
    #define shutdown_copy_params_call                        0xAABC

    /* hash */
    #define EXPLORE_PLUGIN_HASH                         0xACF4AF2B000EC812
    #define EXPLORE_CATEGORY_GAME_HASH                  0x9CB2345100056F13
    #define GAME_EXT_PLUGIN_HASH                        0xE274AF7B0001DE0E
    #define LIBFS_EXTERNAL_HASH                         0x5BC7BEC800006430
    #define PSP_EMULATOR_HASH                           0x7BE6413100023720
    #define PEMUCORELIB_HASH                            0xF349A563000C0A42
    #define EMULATOR_API_HASH                           0xA9F5B55A0001B7C2
    #define EMULATOR_DRM_HASH                           0xA324DC4A0000539C
    #define EMULATOR_DRM_DATA_HASH                      0x1D8D2DA00001B6E4
    #define LIBSYSUTIL_SAVEDATA_PSP_HASH                0x57BBC3B800003212

    /* lv1 */
    #define vsh_pos_in_ram                              0x510000

    /* vsh */
    #define ps2tonet_patch                              0xC4D64
    #define ps2tonet_size_patch                         0xC4D58
    #define vmode_patch_offset                          0x44215C
    #define psp_drm_patch1                              0x23E490
    #define psp_drm_patch2                              0x23EF30
    #define psp_drm_patch3                              0x23EB6C
    #define psp_drm_patch4                              0x23F378
    #define psp_drm_patchA                              0x23E5AC
    #define psp_drm_patchB                              0x23EE4C
    #define psp_drm_patchC                              0x23DFE4
    #define psp_drm_patchD                              0x23E594
    #define psp_drm_patchE                              0x23E598
    #define psp_drm_patchF                              0x23EF64
    #define psp_extra_drm_patch                         0x0

    /* explore_plugin */
    #define ps2_nonbw_offset                            0xDE5F0

    /* explore_category_game */
    #define ps2_nonbw_offset2                           0x69B6C

    /* game_ext_plugin */
    #define ps2_nonbw_offset3                           0x167F8

    /* psp_emulator */
    #define psp_set_psp_mode_offset                     0x1BF4

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
    #define psp_extra_savedata_patch                    0x87520
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

    /* DEX */
    #define EXPLORE_PLUGIN_REBUG_HASH                   0xACF4AF2B000ED050
    #define EXPLORE_CATEGORY_GAME_REBUG_HASH            0x9CB3CC7100057283
    #define GAME_EXT_PLUGIN_REBUG_HASH                  0xE274AF7B0001DE56
    #define dex_ps2_nonbw_offset                        0xDEA18
    #define dex_ps2_nonbw_offset2                       0x698A4
    #define dex_ps2_nonbw_offset3                       0x16AE8
    #define dex_ps2tonet_patch                          0xCA2C0
    #define dex_ps2tonet_size_patch                     0xCA2B4
    #define dex_vmode_patch_offset                      0x449D64
    #define dex_psp_drm_patch1                          0x245CCC
    #define dex_psp_drm_patch2                          0x24676C
    #define dex_psp_drm_patch3                          0x2463A8
    #define dex_psp_drm_patch4                          0x246BB4
    #define dex_psp_drm_patchA                          0x245DE8
    #define dex_psp_drm_patchB                          0x246688
    #define dex_psp_drm_patchC                          0x245820
    #define dex_psp_drm_patchD                          0x245DD0
    #define dex_psp_drm_patchE                          0x245DD4
    #define dex_psp_drm_patchF                          0x2467A0
    #define dex_psp_extra_drm_patch                     0x0
#endif
