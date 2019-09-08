#ifdef FIRMWARE_430C

    #define FIRMWARE_VERSION                                 0x430
    #define FIRMWARE_CEX                                     FIRMWARE_VERSION

    #ifdef PS3M_API
        #define PS3MAPI_FW_TYPE                              "CEX MAMBA"
        #define PS3MAPI_IDPS_1                               0x80000000003DB1B0ULL
        #define PS3MAPI_IDPS_2                               0x8000000000476F3CULL
        #define PS3MAPI_PSID                                 0x8000000000476F54ULL
    #endif

    /* lv2 */
    #define TOC                                              0x348200
    #define open_shared_kernel_object_symbol                 0x123F8
    #define close_kernel_object_handle_symbol                0x11A18
    #define open_kernel_object_symbol                        0x125E8
    #define alloc_symbol                                     0x64028
    #define dealloc_symbol                                   0x64464
    #define copy_to_user_symbol                              0xF858
    #define copy_from_user_symbol                            0xFA74
    #define copy_to_process_symbol                           0xF910
    #define copy_from_process_symbol                         0xF720
    #define page_allocate_symbol                             0x5FB98
    #define page_free_symbol                                 0x5F5FC
    #define page_export_to_proc_symbol                       0x5FD34
    #define page_unexport_from_proc_symbol                   0x5F4F0
    #define kernel_ea_to_lpar_addr_symbol                    0x6F91C
    #define map_process_memory_symbol                        0x76A3C
    #define memcpy_symbol                                    0x7E0FC
    #define memset_symbol                                    0x4E544
    #define memcmp_symbol                                    0x4D854
    #define printf_symbol                                    0x29FEEC
    #define printfnull_symbol                                0x2A495C
    #define sprintf_symbol                                   0x4F96C
    #define snprintf_symbol                                  0x4F8D8
    #define strcpy_symbol                                    0x4E6F0
    #define strncpy_symbol                                   0x4E7B8
    #define strlen_symbol                                    0x4E718
    #define strcat_symbol                                    0x4E620
    #define strcmp_symbol                                    0x4E69C
    #define strncmp_symbol                                   0x4E744
    #define strchr_symbol                                    0x4E658
    #define spin_lock_irqsave_ex_symbol                      0x29DFC0
    #define spin_unlock_irqrestore_ex_symbol                 0x29DF94
    #define load_process_symbol                              0x5004
    #define ppu_thread_create_symbol                         0x13EB0
    #define ppu_thread_exit_symbol                           0x13F68
    #define ppu_thread_join_symbol                           0x13FBC
    #define ppu_thread_delay_symbol                          0x28550
    #define create_user_thread2_symbol                       0x24E34
    #define start_thread_symbol                              0x23B00
    #define run_thread_symbol                                0x23330
    #define register_thread_symbol                           0x2981D4
    #define allocate_user_stack_symbol                       0x2989BC
    #define mutex_create_symbol                              0x13624
    #define mutex_destroy_symbol                             0x135BC
    #define mutex_lock_symbol                                0x135B4
    #define mutex_unlock_symbol                              0x135AC
    #define event_port_create_symbol                         0x13060
    #define event_port_destroy_symbol                        0x134C8
    #define event_port_connect_symbol                        0x13540
    #define event_port_disconnect_symbol                     0x1346C
    #define event_port_send_symbol                           0x13058
    #define event_queue_create_symbol                        0x13368
    #define event_queue_destroy_symbol                       0x132F0
    #define event_queue_receive_symbol                       0x13134
    #define cellFsOpen_symbol                                0x2C3F9C
    #define cellFsClose_symbol                               0x2C3E04
    #define cellFsRead_symbol                                0x2C3F40
    #define cellFsWrite_symbol                               0x2C3EAC
    #define cellFsLseek_symbol                               0x2C3534
    #define cellFsStat_symbol                                0x2C37B8
    #define cellFsUnlink_internal_symbol                     0x1AA184
    #define cellFsUtilMount_symbol                           0x2C3314
    #define cellFsUtilUmount_symbol                          0x2C32E8
    #define pathdup_from_user_symbol                         0x1B1DC4
    #define open_path_symbol                                 0x2C3CD4
    #define open_fs_object_symbol                            0x1913E8
    #define close_fs_object_symbol                           0x1903B8
    #define storage_get_device_info_symbol                   0x2A932C
    #define storage_open_symbol                              0x2A8850
    #define storage_close_symbol                             0x2A8DEC
    #define storage_read_symbol                              0x2A7D68
    #define storage_send_device_command_symbol               0x2A7EA4
    #define storage_map_io_memory_symbol                     0x2A91E8
    #define storage_unmap_io_memory_symbol                   0x2A90B4
    #define storage_internal_get_device_object_symbol        0x2A76F0
    #define decrypt_func_symbol                              0x3470C
    #define lv1_call_99_wrapper_symbol                       0x4FD80
    #define modules_verification_symbol                      0x598D8
    #define prx_load_module_symbol                           0x88294
    #define prx_start_module_symbol                          0x86F60
    #define prx_stop_module_symbol                           0x88338
    #define prx_unload_module_symbol                         0x86C94
    #define prx_get_module_info_symbol                       0x8671C
    #define prx_get_module_list_symbol                       0x8679C
    #define extend_kstack_symbol                             0x6F874
    #define get_pseudo_random_number_symbol                  0x2591C8
    #define syscall_table_symbol                             0x35DBE0
    #define syscall_call_offset                              0x2A5440
    #define read_bdvd0_symbol                                0x1BCD24
    #define read_bdvd1_symbol                                0x1BE950
    #define read_bdvd2_symbol                                0x1CBB08
    #define device_event_port_send_call                      0x2B16A8
    #define process_map_caller_call                          0x4D24
    #define fsloop_open_call                                 0x2C4134
    #define fsloop_close_call                                0x2C4184
    #define fsloop_read_call                                 0x2C41C4
    #define io_rtoc_entry_1                                 -0x178
    #define io_sub_rtoc_entry_1                             -0x7EA0
    #define decrypt_rtoc_entry_2                            -0x6680
    #define storage_rtoc_entry_1                             0x1E40
    #define device_event_rtoc_entry_1                        0x20B0
    #define process_rtoc_entry_1                            -0x7800
    #define patch_func2                                      0x5A290
    #define patch_func2_offset                               0x2C
    #define user_thread_prio_patch                           0x201B0
    #define user_thread_prio_patch2                          0x201BC
    #define shutdown_patch_offset                            0xAAA8
    #define shutdown_copy_params_call                        0xAABC

    /* hash */
    #define EXPLORE_PLUGIN_HASH                         0xACF4AF2B000EBA56
    #define EXPLORE_CATEGORY_GAME_HASH                  0x9CB3CCAD00056F02
    #define GAME_EXT_PLUGIN_HASH                        0xE274AF7B0001DD1D
    #define LIBFS_EXTERNAL_HASH                         0x5BC7BEC800006430
    #define PSP_EMULATOR_HASH                           0x7BE646F50002371E
    #define PEMUCORELIB_HASH                            0xF349A563000BFD70
    #define EMULATOR_API_HASH                           0xA9F5B37A0001B739
    #define EMULATOR_DRM_HASH                           0xA324DC4A0000539C
    #define EMULATOR_DRM_DATA_HASH                      0x1D8D2DA00001B6E4
    #define LIBSYSUTIL_SAVEDATA_PSP_HASH                0x57BBC04800003207

    /* lv1 */
    #define vsh_pos_in_ram                              0x910000

    /* vsh */
    #define ps2tonet_patch                              0xC4D64
    #define ps2tonet_size_patch                         0xC4D58
    #define vmode_patch_offset                          0x4400CC
    #define psp_drm_patch1                              0x23D27C
    #define psp_drm_patch2                              0x23DD1C
    #define psp_drm_patch3                              0x23D958
    #define psp_drm_patch4                              0x23E164
    #define psp_drm_patchA                              0x23D398
    #define psp_drm_patchB                              0x23DC38
    #define psp_drm_patchC                              0x23CDD0
    #define psp_drm_patchD                              0x23D380
    #define psp_drm_patchE                              0x23D384
    #define psp_drm_patchF                              0x23DD50
    #define psp_extra_drm_patch                         0x0

    /* explore_plugin */
    #define ps2_nonbw_offset                            0xDDDC8

    /* explore_category_game */
    #define ps2_nonbw_offset2                           0x69B68

    /* game_ext_plugin */
    #define ps2_nonbw_offset3                           0x167D8

    /* psp_emulator */
    #define psp_set_psp_mode_offset                     0x1C10

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

    /* rebug */
    #define EXPLORE_PLUGIN_REBUG_HASH                   0xACF4AF2B000EC258
    #define EXPLORE_CATEGORY_GAME_REBUG_HASH            0x9CB3CB3900057221
    #define GAME_EXT_PLUGIN_REBUG_HASH                  0xE274AF7B0001DD6F
    #define dex_ps2_nonbw_offset                        0xDE1F4
    #define dex_ps2_nonbw_offset2                       0x6989C
    #define dex_ps2_nonbw_offset3                       0x16AC8
    #define dex_ps2tonet_patch                          0xCA2B8
    #define dex_ps2tonet_size_patch                     0xCA2AC
    #define dex_vmode_patch_offset                      0x447CB0
    #define dex_psp_drm_patch1                          0x244A94
    #define dex_psp_drm_patch2                          0x245534
    #define dex_psp_drm_patch3                          0x245170
    #define dex_psp_drm_patch4                          0x24597C
    #define dex_psp_drm_patchA                          0x244BB0
    #define dex_psp_drm_patchB                          0x245450
    #define dex_psp_drm_patchC                          0x2445E8
    #define dex_psp_drm_patchD                          0x244B98
    #define dex_psp_drm_patchE                          0x244B9C
    #define dex_psp_drm_patchF                          0x245568
    #define dex_psp_extra_drm_patch                     0x0
#endif
