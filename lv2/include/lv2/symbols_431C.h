#ifdef FIRMWARE_431C

    #define FIRMWARE_VERSION                                 0x431
    #define FIRMWARE_CEX                                     FIRMWARE_VERSION

    #ifdef PS3M_API
        #define PS3MAPI_FW_TYPE                              "CEX MAMBA"
        #define PS3MAPI_IDPS_1                               0x80000000003DB1B0ULL
        #define PS3MAPI_IDPS_2                               0x8000000000476F3CULL
        #define PS3MAPI_PSID                                 0x8000000000476F54ULL
    #endif

    /* lv2 */
    #define TOC                                              0x348210
    #define open_shared_kernel_object_symbol                 0x123FC
    #define close_kernel_object_handle_symbol                0x11A1C
    #define open_kernel_object_symbol                        0x125EC
    #define alloc_symbol                                     0x6402C
    #define dealloc_symbol                                   0x64468
    #define copy_to_user_symbol                              0xF85C
    #define copy_from_user_symbol                            0xFA78
    #define copy_to_process_symbol                           0xF914
    #define copy_from_process_symbol                         0xF724
    #define page_allocate_symbol                             0x5FB9C
    #define page_free_symbol                                 0x5F600
    #define page_export_to_proc_symbol                       0x5FD38
    #define page_unexport_from_proc_symbol                   0x5F4F4
    #define kernel_ea_to_lpar_addr_symbol                    0x6F920
    #define map_process_memory_symbol                        0x76A40
    #define memcpy_symbol                                    0x7E100
    #define memset_symbol                                    0x4E548
    #define memcmp_symbol                                    0x4D858
    #define printf_symbol                                    0x29FEF8
    #define printfnull_symbol                                0x2A4968
    #define sprintf_symbol                                   0x4F970
    #define snprintf_symbol                                  0x4F8DC
    #define strcpy_symbol                                    0x4E6F4
    #define strncpy_symbol                                   0x4E7BC
    #define strlen_symbol                                    0x4E71C
    #define strcat_symbol                                    0x4E624
    #define strcmp_symbol                                    0x4E6A0
    #define strncmp_symbol                                   0x4E748
    #define strchr_symbol                                    0x4E65C
    #define spin_lock_irqsave_ex_symbol                      0x29DFCC
    #define spin_unlock_irqrestore_ex_symbol                 0x29DFA0
    #define load_process_symbol                              0x5004
    #define ppu_thread_create_symbol                         0x13EB4
    #define ppu_thread_exit_symbol                           0x13F6C
    #define ppu_thread_join_symbol                           0x13FC0
    #define ppu_thread_delay_symbol                          0x28554
    #define create_user_thread2_symbol                       0x24E38
    #define start_thread_symbol                              0x23B04
    #define run_thread_symbol                                0x23334
    #define register_thread_symbol                           0x2981E0
    #define allocate_user_stack_symbol                       0x2989C8
    #define mutex_create_symbol                              0x13628
    #define mutex_destroy_symbol                             0x135C0
    #define mutex_lock_symbol                                0x135B8
    #define mutex_unlock_symbol                              0x135B0
    #define event_port_create_symbol                         0x13064
    #define event_port_destroy_symbol                        0x134CC
    #define event_port_connect_symbol                        0x13544
    #define event_port_disconnect_symbol                     0x13470
    #define event_port_send_symbol                           0x1305C
    #define event_queue_create_symbol                        0x1336C
    #define event_queue_destroy_symbol                       0x132F4
    #define event_queue_receive_symbol                       0x13138
    #define cellFsOpen_symbol                                0x2C3FA8
    #define cellFsClose_symbol                               0x2C3E10
    #define cellFsRead_symbol                                0x2C3F4C
    #define cellFsWrite_symbol                               0x2C3EB8
    #define cellFsLseek_symbol                               0x2C3540
    #define cellFsStat_symbol                                0x2C37C4
    #define cellFsUnlink_internal_symbol                     0x1AA18C
    #define cellFsUtilMount_symbol                           0x2C3320
    #define cellFsUtilUmount_symbol                          0x2C32F4
    #define pathdup_from_user_symbol                         0x1B1DCC
    #define open_path_symbol                                 0x2C3CE0
    #define open_fs_object_symbol                            0x1913F0
    #define close_fs_object_symbol                           0x1903C0
    #define storage_get_device_info_symbol                   0x2A9338
    #define storage_open_symbol                              0x2A885C
    #define storage_close_symbol                             0x2A8DF8
    #define storage_read_symbol                              0x2A7D74
    #define storage_send_device_command_symbol               0x2A7EB0
    #define storage_map_io_memory_symbol                     0x2A91F4
    #define storage_unmap_io_memory_symbol                   0x2A90C0
    #define storage_internal_get_device_object_symbol        0x2A76FC
    #define decrypt_func_symbol                              0x34710
    #define lv1_call_99_wrapper_symbol                       0x4FD84
    #define modules_verification_symbol                      0x598DC
    #define prx_load_module_symbol                           0x88298
    #define prx_start_module_symbol                          0x86F64
    #define prx_stop_module_symbol                           0x8833C
    #define prx_unload_module_symbol                         0x86C98
    #define prx_get_module_info_symbol                       0x86720
    #define prx_get_module_list_symbol                       0x867A0
    #define extend_kstack_symbol                             0x6F878
    #define get_pseudo_random_number_symbol                  0x2591D0
    #define syscall_table_symbol                             0x35DBE0
    #define syscall_call_offset                              0x2A544C
    #define read_bdvd0_symbol                                0x1BCD2C
    #define read_bdvd1_symbol                                0x1BE958
    #define read_bdvd2_symbol                                0x1CBB10
    #define device_event_port_send_call                      0x2B16B4
    #define process_map_caller_call                          0x4D24
    #define fsloop_open_call                                 0x2C4140
    #define fsloop_close_call                                0x2C4190
    #define fsloop_read_call                                 0x2C41D0
    #define io_rtoc_entry_1                                 -0x178
    #define io_sub_rtoc_entry_1                             -0x7EA0
    #define decrypt_rtoc_entry_2                            -0x6680
    #define storage_rtoc_entry_1                             0x1E40
    #define device_event_rtoc_entry_1                        0x20B0
    #define process_rtoc_entry_1                            -0x7800
    #define patch_func2                                      0x5A294
    #define patch_func2_offset                               0x2C
    #define user_thread_prio_patch                           0x201B4
    #define user_thread_prio_patch2                          0x201C0
    #define shutdown_patch_offset                            0xAAA8
    #define shutdown_copy_params_call                        0xAABC

    /* hash */
    #define EXPLORE_PLUGIN_HASH                         0xACF4AF2B000EBA56
    #define EXPLORE_CATEGORY_GAME_HASH                  0x9CB3CCAD00056F02
    #define GAME_EXT_PLUGIN_HASH                        0xE274AF7B0001DD1D
    #define LIBFS_EXTERNAL_HASH                         0x5BC7BEC800006430
    #define PSP_EMULATOR_HASH                           0x7BE65D6D00023702
    #define PEMUCORELIB_HASH                            0xF349A563000BFD6F
    #define EMULATOR_API_HASH                           0xA9F5B37A0001B739
    #define EMULATOR_DRM_HASH                           0xA324DC4A0000539C
    #define EMULATOR_DRM_DATA_HASH                      0x1D8D2DA00001B6E4
    #define LIBSYSUTIL_SAVEDATA_PSP_HASH                0x57BBC04800003207

    /* lv1 */
    #define vsh_pos_in_ram                              0x910000

    /* vsh */
    #define ps2tonet_patch                              0xC4D64
    #define ps2tonet_size_patch                         0xC4D58
    #define vmode_patch_offset                          0x4400D0
    #define psp_drm_patch1                              0x23D280
    #define psp_drm_patch2                              0x23DD20
    #define psp_drm_patch3                              0x23D95C
    #define psp_drm_patch4                              0x23E168
    #define psp_drm_patchA                              0x23D39C
    #define psp_drm_patchB                              0x23DC3C
    #define psp_drm_patchC                              0x23CDD4
    #define psp_drm_patchD                              0x23D384
    #define psp_drm_patchE                              0x23D388
    #define psp_drm_patchF                              0x23DD54
    #define psp_extra_drm_patch                         0x0

    /* explore_plugin */
    #define ps2_nonbw_offset                            0xDDDC8

    /* explore_category_game */
    #define ps2_nonbw_offset2                           0x69B68

    /* game_ext_plugin */
    #define ps2_nonbw_offset3                           0x167D8

    /* psp_emulator */
    #define psp_set_psp_mode_offset                     0x1BE0

    /* emulator_api */
    #define psp_read                                    0xFB24
    #define psp_read_header                             0x10AA8
    #define psp_drm_patch5                              0x108CC
    #define psp_drm_patch6                              0x108FC
    #define psp_drm_patch7                              0x10914
    #define psp_drm_patch8                              0x10918
    #define psp_drm_patch9                              0x10A58
    #define psp_drm_patch11                             0x10A5C
    #define psp_drm_patch12                             0x10A6C
    #define psp_product_id_patch1                       0x10B6C
    #define psp_product_id_patch3                       0x10E44

    /* pemucorelib */
    #define psp_eboot_dec_patch                         0x5E340
    #define psp_prx_patch                               0x5745C
    #define psp_savedata_bind_patch1                    0x79810
    #define psp_savedata_bind_patch2                    0x79868
    #define psp_savedata_bind_patch3                    0x79384
    #define psp_extra_savedata_patch                    0x85194
    #define psp_prometheus_patch                        0x12E870
    #define prx_patch_call_lr                           0x585B0

    /* emulator_drm */
    #define psp_drm_tag_overwrite                       0x4C68
    #define psp_drm_key_overwrite                       (0x27580 - 0xBE80)

    /* libsysutil_savedata_psp */
    #define psp_savedata_patch1                         0x46D4
    #define psp_savedata_patch2                         0x46AC
    #define psp_savedata_patch3                         0x450C
    #define psp_savedata_patch4                         0x4544
    #define psp_savedata_patch5                         0x4558
    #define psp_savedata_patch6                         0x46C0

    /* libfs */
    #define aio_copy_root_offset                        0xD5B4

    /* DEX */
    #define EXPLORE_PLUGIN_REBUG_HASH                   0xACF4AF2B000EC258
    #define EXPLORE_CATEGORY_GAME_REBUG_HASH            0x9CB3CB3900057221
    #define GAME_EXT_PLUGIN_REBUG_HASH                  0xE274AF7B0001DD6F
    #define dex_ps2_nonbw_offset                        0xDE1F4
    #define dex_ps2_nonbw_offset2                       0x6989C
    #define dex_ps2_nonbw_offset3                       0x16AC8
    #define dex_ps2tonet_patch                          0xCA2B8
    #define dex_ps2tonet_size_patch                     0xCA2AC
    #define dex_vmode_patch_offset                      0x447CB4
    #define dex_psp_drm_patch1                          0x244A98
    #define dex_psp_drm_patch2                          0x245538
    #define dex_psp_drm_patch3                          0x245174
    #define dex_psp_drm_patch4                          0x245980
    #define dex_psp_drm_patchA                          0x244BB4
    #define dex_psp_drm_patchB                          0x245454
    #define dex_psp_drm_patchC                          0x2445EC
    #define dex_psp_drm_patchD                          0x244B9C
    #define dex_psp_drm_patchE                          0x244BA0
    #define dex_psp_drm_patchF                          0x24556C
    #define dex_psp_extra_drm_patch                     0x0
#endif
