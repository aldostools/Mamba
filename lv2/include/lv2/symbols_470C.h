#ifdef FIRMWARE_470C

    #define FIRMWARE_VERSION                                 0x470
    #define FIRMWARE_CEX                                     FIRMWARE_VERSION

    #ifdef PS3M_API
        #define PS3MAPI_FW_TYPE                              "CEX MAMBA"
        #define PS3MAPI_IDPS_1                               0x80000000003E2DB0ULL
        #define PS3MAPI_IDPS_2                               0x8000000000474AF4ULL
        #define PS3MAPI_PSID                                 0x8000000000474B0CULL
    #endif

    /* lv2 */
    #define TOC                                              0x34FB10
    #define open_shared_kernel_object_symbol                 0x1240C
    #define close_kernel_object_handle_symbol                0x11A2C
    #define open_kernel_object_symbol                        0x125FC
    #define alloc_symbol                                     0x64820
    #define dealloc_symbol                                   0x64C5C
    #define copy_to_user_symbol                              0xF868
    #define copy_from_user_symbol                            0xFA84
    #define copy_to_process_symbol                           0xF920
    #define copy_from_process_symbol                         0xF730
    #define page_allocate_symbol                             0x60390
    #define page_free_symbol                                 0x5FDF4
    #define page_export_to_proc_symbol                       0x6052C
    #define page_unexport_from_proc_symbol                   0x5FCE8
    #define kernel_ea_to_lpar_addr_symbol                    0x70148
    #define map_process_memory_symbol                        0x77268
    #define memcpy_symbol                                    0x7E928
    #define memset_symbol                                    0x4D668
    #define memcmp_symbol                                    0x4C978
    #define printf_symbol                                    0x270634
    #define printfnull_symbol                                0x2750A8
    #define sprintf_symbol                                   0x4EA90
    #define snprintf_symbol                                  0x4E9FC
    #define strcpy_symbol                                    0x4D814
    #define strncpy_symbol                                   0x4D8DC
    #define strlen_symbol                                    0x4D83C
    #define strcat_symbol                                    0x4D744
    #define strcmp_symbol                                    0x4D7C0
    #define strncmp_symbol                                   0x4D868
    #define strchr_symbol                                    0x4D77C
    #define spin_lock_irqsave_ex_symbol                      0x26D720
    #define spin_unlock_irqrestore_ex_symbol                 0x26D6F4
    #define load_process_symbol                              0x5004
    #define ppu_thread_create_symbol                         0x13EC4
    #define ppu_thread_exit_symbol                           0x13F7C
    #define ppu_thread_join_symbol                           0x13FD0
    #define ppu_thread_delay_symbol                          0x287A0
    #define create_user_thread2_symbol                       0x2507C
    #define start_thread_symbol                              0x23D48
    #define run_thread_symbol                                0x23578
    #define register_thread_symbol                           0x2678D4
    #define allocate_user_stack_symbol                       0x2680BC
    #define mutex_create_symbol                              0x13638
    #define mutex_destroy_symbol                             0x135D0
    #define mutex_lock_symbol                                0x135C8
    #define mutex_unlock_symbol                              0x135C0
    #define event_port_create_symbol                         0x13074
    #define event_port_destroy_symbol                        0x134DC
    #define event_port_connect_symbol                        0x13554
    #define event_port_disconnect_symbol                     0x13480
    #define event_port_send_symbol                           0x1306C
    #define event_queue_create_symbol                        0x1337C
    #define event_queue_destroy_symbol                       0x13304
    #define event_queue_receive_symbol                       0x13148
    #define cellFsOpen_symbol                                0x297888
    #define cellFsClose_symbol                               0x2976F0
    #define cellFsRead_symbol                                0x29782C
    #define cellFsWrite_symbol                               0x297798
    #define cellFsLseek_symbol                               0x296E20
    #define cellFsStat_symbol                                0x2970A4
    #define cellFsUnlink_internal_symbol                     0x19C644
    #define cellFsUtilMount_symbol                           0x296C00
    #define cellFsUtilUmount_symbol                          0x296BD4
    #define pathdup_from_user_symbol                         0x29C86C
    #define open_path_symbol                                 0x2975C0
    #define open_fs_object_symbol                            0x18A968
    #define close_fs_object_symbol                           0x1898A4
    #define storage_get_device_info_symbol                   0x279A88
    #define storage_open_symbol                              0x279498
    #define storage_close_symbol                             0x279288
    #define storage_read_symbol                              0x2787F8
    #define storage_send_device_command_symbol               0x278384
    #define storage_map_io_memory_symbol                     0x279944
    #define storage_unmap_io_memory_symbol                   0x279810
    #define storage_internal_get_device_object_symbol        0x277E3C
    #define decrypt_func_symbol                              0x3496C
    #define lv1_call_99_wrapper_symbol                       0x4EEA4
    #define modules_verification_symbol                      0x58AB4
    #define prx_load_module_symbol                           0x88C00
    #define prx_start_module_symbol                          0x878CC
    #define prx_stop_module_symbol                           0x88CA4
    #define prx_unload_module_symbol                         0x87600
    #define prx_get_module_info_symbol                       0x87088
    #define prx_get_module_list_symbol                       0x87108
    #define extend_kstack_symbol                             0x700A0
    #define get_pseudo_random_number_symbol                  0x228178
    #define syscall_table_symbol                             0x363B60
    #define syscall_call_offset                              0x275B8C
    #define read_bdvd0_symbol                                0x1A4614
    #define read_bdvd1_symbol                                0x1A6240
    #define read_bdvd2_symbol                                0x1B33F8
    #define device_event_port_send_call                      0x281FF4
    #define process_map_caller_call                          0x4D24
    #define fsloop_open_call                                 0x297A20
    #define fsloop_close_call                                0x297A70
    #define fsloop_read_call                                 0x297AB0
    #define io_rtoc_entry_1                                  0x25B0
    #define io_sub_rtoc_entry_1                             -0x7EA0
    #define decrypt_rtoc_entry_2                            -0x66A0
    #define storage_rtoc_entry_1                             0x1DD0
    #define device_event_rtoc_entry_1                        0x2040
    #define process_rtoc_entry_1                            -0x7800
    #define patch_func2                                      0x59D80
    #define patch_func2_offset                               0x2C
    #define user_thread_prio_patch                           0x203F8
    #define user_thread_prio_patch2                          0x20404
    #define shutdown_patch_offset                            0xAAB8
    #define shutdown_copy_params_call                        0xAACC

    /* hash */
    #define EXPLORE_PLUGIN_HASH                         0xACF4AF2B000EC54E
    #define EXPLORE_CATEGORY_GAME_HASH                  0x9CB378E600056ADD
    #define GAME_EXT_PLUGIN_HASH                        0xE274AF7B0001E6C9
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
    #define ps2tonet_patch                              0xC4B14
    #define ps2tonet_size_patch                         0xC4B08
    #define vmode_patch_offset                          0x445630
    #define psp_drm_patch1                              0x24265C
    #define psp_drm_patch2                              0x2430FC
    #define psp_drm_patch3                              0x242D38
    #define psp_drm_patch4                              0x243544
    #define psp_drm_patchA                              0x242778
    #define psp_drm_patchB                              0x243018
    #define psp_drm_patchC                              0x2421B0
    #define psp_drm_patchD                              0x242760
    #define psp_drm_patchE                              0x242764
    #define psp_drm_patchF                              0x243130
    #define psp_extra_drm_patch                         0x0

    /* explore_plugin */
    #define ps2_nonbw_offset                            0xDD97C

    /* explore_category_game */
    #define ps2_nonbw_offset2                           0x68324

    /* game_ext_plugin */
    #define ps2_nonbw_offset3                           0x17004

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
    #define EXPLORE_PLUGIN_REBUG_HASH                   0xACF4AF2B000ECCEB
    #define EXPLORE_CATEGORY_GAME_REBUG_HASH            0x9CB3396E00056CE1
    #define GAME_EXT_PLUGIN_REBUG_HASH                  0xE274AF7B0001E733
    #define dex_ps2_nonbw_offset                        0xDDD8C
    #define dex_ps2_nonbw_offset2                       0x68264
    #define dex_ps2_nonbw_offset3                       0x172F4
    #define dex_ps2tonet_patch                          0xCA060
    #define dex_ps2tonet_size_patch                     0xCA054
    #define dex_vmode_patch_offset                      0x44D224
    #define dex_psp_drm_patch1                          0x249E84
    #define dex_psp_drm_patch2                          0x24A924
    #define dex_psp_drm_patch3                          0x24A560
    #define dex_psp_drm_patch4                          0x24AD6C
    #define dex_psp_drm_patchA                          0x249FA0
    #define dex_psp_drm_patchB                          0x24A840
    #define dex_psp_drm_patchC                          0x2499D8
    #define dex_psp_drm_patchD                          0x249F88
    #define dex_psp_drm_patchE                          0x249F8C
    #define dex_psp_drm_patchF                          0x24A958
    #define dex_psp_extra_drm_patch                     0x0
#endif
