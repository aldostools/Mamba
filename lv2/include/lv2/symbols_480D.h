#ifdef FIRMWARE_480D

    #define FIRMWARE_VERSION                                 0x480
    #define FIRMWARE_DEX                                     FIRMWARE_VERSION

    #ifdef PS3M_API
        #define PS3MAPI_FW_TYPE                              "DEX MAMBA"
        #define PS3MAPI_IDPS_1                               0x8000000000409A30ULL
        #define PS3MAPI_IDPS_2                               0x800000000049CAF4ULL
        #define PS3MAPI_PSID                                 0x800000000049CB0CULL
    #endif

    /* lv2 */
    #define TOC                                              0x3759B0
    #define open_shared_kernel_object_symbol                 0x12A54
    #define close_kernel_object_handle_symbol                0x12074
    #define open_kernel_object_symbol                        0x12C44
    #define alloc_symbol                                     0x681F0
    #define dealloc_symbol                                   0x6862C
    #define copy_to_user_symbol                              0xFEB0
    #define copy_from_user_symbol                            0x100CC
    #define copy_to_process_symbol                           0xFF68
    #define copy_from_process_symbol                         0xFD78
    #define page_allocate_symbol                             0x63D60
    #define page_free_symbol                                 0x637C4
    #define page_export_to_proc_symbol                       0x63EFC
    #define page_unexport_from_proc_symbol                   0x636B8
    #define kernel_ea_to_lpar_addr_symbol                    0x73C98
    #define map_process_memory_symbol                        0x7B344
    #define memcpy_symbol                                    0x82A04
    #define memset_symbol                                    0x51010
    #define memcmp_symbol                                    0x50320
    #define printf_symbol                                    0x27896C
    #define printfnull_symbol                                0x27D3F4
    #define sprintf_symbol                                   0x52438
    #define snprintf_symbol                                  0x523A4
    #define strcpy_symbol                                    0x511BC
    #define strncpy_symbol                                   0x51284
    #define strlen_symbol                                    0x511E4
    #define strcat_symbol                                    0x510EC
    #define strcmp_symbol                                    0x51168
    #define strncmp_symbol                                   0x51210
    #define strchr_symbol                                    0x51124
    #define spin_lock_irqsave_ex_symbol                      0x275664
    #define spin_unlock_irqrestore_ex_symbol                 0x275638
    #define load_process_symbol                              0x5004
    #define ppu_thread_create_symbol                         0x145F8
    #define ppu_thread_exit_symbol                           0x146B0
    #define ppu_thread_join_symbol                           0x14704
    #define ppu_thread_delay_symbol                          0x2A6E4
    #define create_user_thread2_symbol                       0x26D2C
    #define start_thread_symbol                              0x25864
    #define run_thread_symbol                                0x25028
    #define register_thread_symbol                           0x26E264
    #define allocate_user_stack_symbol                       0x26EA4C
    #define mutex_create_symbol                              0x13C88
    #define mutex_destroy_symbol                             0x13C20
    #define mutex_lock_symbol                                0x13C18
    #define mutex_unlock_symbol                              0x13C10
    #define event_port_create_symbol                         0x136C4
    #define event_port_destroy_symbol                        0x13B2C
    #define event_port_connect_symbol                        0x13BA4
    #define event_port_disconnect_symbol                     0x13AD0
    #define event_port_send_symbol                           0x136BC
    #define event_queue_create_symbol                        0x139CC
    #define event_queue_destroy_symbol                       0x13954
    #define event_queue_receive_symbol                       0x13798
    #define cellFsOpen_symbol                                0x2B288C
    #define cellFsClose_symbol                               0x2B26F4
    #define cellFsRead_symbol                                0x2B2830
    #define cellFsWrite_symbol                               0x2B279C
    #define cellFsLseek_symbol                               0x2B1FF0
    #define cellFsStat_symbol                                0x2B20A8
    #define cellFsUnlink_internal_symbol                     0x1A29D0
    #define cellFsUtilMount_symbol                           0x2B1D64
    #define cellFsUtilUmount_symbol                          0x2B1D38
    #define pathdup_from_user_symbol                         0x2B7B50
    #define open_path_symbol                                 0x2B25C4
    #define open_fs_object_symbol                            0x190CF4
    #define close_fs_object_symbol                           0x18FC30
    #define storage_get_device_info_symbol                   0x28C9F4
    #define storage_open_symbol                              0x28CC1C
    #define storage_close_symbol                             0x28B408
    #define storage_read_symbol                              0x28A384
    #define storage_send_device_command_symbol               0x289EA4
    #define storage_map_io_memory_symbol                     0x28C8A0
    #define storage_unmap_io_memory_symbol                   0x28C75C
    #define storage_internal_get_device_object_symbol        0x28995C
    #define decrypt_func_symbol                              0x3828C
    #define lv1_call_99_wrapper_symbol                       0x5284C
    #define modules_verification_symbol                      0x5C484
    #define prx_load_module_symbol                           0x8D304
    #define prx_start_module_symbol                          0x8BFD0
    #define prx_stop_module_symbol                           0x8D3A8
    #define prx_unload_module_symbol                         0x8BD04
    #define prx_get_module_info_symbol                       0x8B6FC
    #define prx_get_module_list_symbol                       0x8B77C
    #define extend_kstack_symbol                             0x73BF0
    #define get_pseudo_random_number_symbol                  0x22E654
    #define syscall_table_symbol                             0x38A4E8
    #define syscall_call_offset                              0x27DED8
    #define read_bdvd0_symbol                                0x1AAAC4
    #define read_bdvd1_symbol                                0x1AC6F0
    #define read_bdvd2_symbol                                0x1B98A8
    #define device_event_port_send_call                      0x296BF0
    #define process_map_caller_call                          0x4D24
    #define fsloop_open_call                                 0x2B2A24
    #define fsloop_close_call                                0x2B2A74
    #define fsloop_read_call                                 0x2B2AB4
    #define io_rtoc_entry_1                                  0x2EC0
    #define io_sub_rtoc_entry_1                             -0x7EA0
    #define decrypt_rtoc_entry_2                            -0x65C0
    #define storage_rtoc_entry_1                             0x22B0
    #define device_event_rtoc_entry_1                        0x2638
    #define process_rtoc_entry_1                            -0x77A0
    #define patch_func2                                      0x5D750
    #define patch_func2_offset                               0x2C
    #define user_thread_prio_patch                           0x21EA8
    #define user_thread_prio_patch2                          0x21EB4
    #define shutdown_patch_offset                            0xAB38
    #define shutdown_copy_params_call                        0xAB4C

    /* hash */
    #define EXPLORE_PLUGIN_HASH                         0xACF4AF2B000ECC8A
    #define EXPLORE_CATEGORY_GAME_HASH                  0x9CB3396E00056CE9
    #define GAME_EXT_PLUGIN_HASH                        0xE274AF7B0001E5DD
    #define LIBFS_EXTERNAL_HASH                         0x5BC7BCE800006477
    #define PSP_EMULATOR_HASH                           0x7BE641F500023793
    #define PEMUCORELIB_HASH                            0xF349A563000C0D6C
    #define EMULATOR_API_HASH                           0xA9F5B37A0001BB45
    #define EMULATOR_DRM_HASH                           0xA324DC4A00005399
    #define EMULATOR_DRM_DATA_HASH                      0x75C390860001B75F
    #define LIBSYSUTIL_SAVEDATA_PSP_HASH                0x57BBC3B800003212

    /* lv1 */
    #define vsh_pos_in_ram                              0x910000

    /* vsh */
    #define ps2tonet_patch                              0xCA380
    #define ps2tonet_size_patch                         0xCA374
    #define vmode_patch_offset                          0x44ADD8
    #define psp_drm_patch1                              0x24A7E4
    #define psp_drm_patch2                              0x24B284
    #define psp_drm_patch3                              0x24AEC0
    #define psp_drm_patch4                              0x24B6CC
    #define psp_drm_patchA                              0x24A900
    #define psp_drm_patchB                              0x24B1A0
    #define psp_drm_patchC                              0x24A338
    #define psp_drm_patchD                              0x24A8E8
    #define psp_drm_patchE                              0x24A8EC
    #define psp_drm_patchF                              0x24B2B8
    #define psp_extra_drm_patch                         0x24D314

    /* explore_plugin */
    #define ps2_nonbw_offset                            0xDDDC4

    /* explore_category_game */
    #define ps2_nonbw_offset2                           0x68264

    /* game_ext_plugin */
    #define ps2_nonbw_offset3                           0x172F0

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
    #define cex_ps2tonet_patch                          0xC4E34
    #define cex_ps2tonet_size_patch                     0xC4E28
    #define cex_vmode_patch_offset                      0x4431E4
    #define cex_psp_drm_patch1                          0x242FBC
    #define cex_psp_drm_patch2                          0x243A5C
    #define cex_psp_drm_patch3                          0x243698
    #define cex_psp_drm_patch4                          0x243EA4
    #define cex_psp_drm_patchA                          0x2430D8
    #define cex_psp_drm_patchB                          0x243978
    #define cex_psp_drm_patchC                          0x242B10
    #define cex_psp_drm_patchD                          0x2430C0
    #define cex_psp_drm_patchE                          0x2430C4
    #define cex_psp_drm_patchF                          0x243A90
    #define cex_psp_extra_drm_patch                     0x245AEC
#endif
