#ifdef FIRMWARE_421C

    #define FIRMWARE_VERSION                                 0x421
    #define FIRMWARE_CEX                                     FIRMWARE_VERSION

    #ifdef PS3M_API
        #define PS3MAPI_FW_TYPE                              "CEX MAMBA"
        #define PS3MAPI_IDPS_1                               0x80000000003D9230ULL
        #define PS3MAPI_IDPS_2                               0x8000000000477E9CULL
        #define PS3MAPI_PSID                                 0x8000000000477EB4ULL
    #endif

    /* lv2 */
    #define TOC                                              0x346390
    #define open_shared_kernel_object_symbol                 0x123FC
    #define close_kernel_object_handle_symbol                0x11A1C
    #define open_kernel_object_symbol                        0x125EC
    #define alloc_symbol                                     0x63ED8
    #define dealloc_symbol                                   0x64314
    #define copy_to_user_symbol                              0xF85C
    #define copy_from_user_symbol                            0xFA78
    #define copy_to_process_symbol                           0xF914
    #define copy_from_process_symbol                         0xF724
    #define page_allocate_symbol                             0x5FA48
    #define page_free_symbol                                 0x5F4AC
    #define page_export_to_proc_symbol                       0x5FBE4
    #define page_unexport_from_proc_symbol                   0x5F3A0
    #define kernel_ea_to_lpar_addr_symbol                    0x6F7F0
    #define map_process_memory_symbol                        0x76910
    #define memcpy_symbol                                    0x7DFD0
    #define memset_symbol                                    0x4E508
    #define memcmp_symbol                                    0x4D818
    #define printf_symbol                                    0x29E77C
    #define printfnull_symbol                                0x2A31EC
    #define sprintf_symbol                                   0x4F930
    #define snprintf_symbol                                  0x4F89C
    #define strcpy_symbol                                    0x4E6B4
    #define strncpy_symbol                                   0x4E77C
    #define strlen_symbol                                    0x4E6DC
    #define strcat_symbol                                    0x4E5E4
    #define strcmp_symbol                                    0x4E660
    #define strncmp_symbol                                   0x4E708
    #define strchr_symbol                                    0x4E61C
    #define spin_lock_irqsave_ex_symbol                      0x29C850
    #define spin_unlock_irqrestore_ex_symbol                 0x29C824
    #define load_process_symbol                              0x5004
    #define ppu_thread_create_symbol                         0x13EB4
    #define ppu_thread_exit_symbol                           0x13F6C
    #define ppu_thread_join_symbol                           0x13FC0
    #define ppu_thread_delay_symbol                          0x28554
    #define create_user_thread2_symbol                       0x24E38
    #define start_thread_symbol                              0x23B04
    #define run_thread_symbol                                0x23334
    #define register_thread_symbol                           0x296A64
    #define allocate_user_stack_symbol                       0x29724C
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
    #define cellFsOpen_symbol                                0x2C2820
    #define cellFsClose_symbol                               0x2C2688
    #define cellFsRead_symbol                                0x2C27C4
    #define cellFsWrite_symbol                               0x2C2730
    #define cellFsLseek_symbol                               0x2C1DB8
    #define cellFsStat_symbol                                0x2C203C
    #define cellFsUnlink_internal_symbol                     0x1A96E8
    #define cellFsUtilMount_symbol                           0x2C1B98
    #define cellFsUtilUmount_symbol                          0x2C1B6C
    #define pathdup_from_user_symbol                         0x1B1988
    #define open_path_symbol                                 0x2C2558
    #define open_fs_object_symbol                            0x190970
    #define close_fs_object_symbol                           0x18F940
    #define storage_get_device_info_symbol                   0x2A7BBC
    #define storage_open_symbol                              0x2A70E0
    #define storage_close_symbol                             0x2A767C
    #define storage_read_symbol                              0x2A65F8
    #define storage_send_device_command_symbol               0x2A6734
    #define storage_map_io_memory_symbol                     0x2A7A78
    #define storage_unmap_io_memory_symbol                   0x2A7944
    #define storage_internal_get_device_object_symbol        0x2A5F80
    #define decrypt_func_symbol                              0x346D0
    #define lv1_call_99_wrapper_symbol                       0x4FD44
    #define modules_verification_symbol                      0x59788
    #define prx_load_module_symbol                           0x88168
    #define prx_start_module_symbol                          0x86E34
    #define prx_stop_module_symbol                           0x8820C
    #define prx_unload_module_symbol                         0x86B68
    #define prx_get_module_info_symbol                       0x865F0
    #define prx_get_module_list_symbol                       0x86670
    #define extend_kstack_symbol                             0x6F748
    #define get_pseudo_random_number_symbol                  0x2579CC
    #define syscall_table_symbol                             0x35BCA8
    #define syscall_call_offset                              0x2A3CD0
    #define read_bdvd0_symbol                                0x1BBE5C
    #define read_bdvd1_symbol                                0x1BDA88
    #define read_bdvd2_symbol                                0x1CAC10
    #define device_event_port_send_call                      0x2AFF38
    #define process_map_caller_call                          0x4D24
    #define fsloop_open_call                                 0x2C29B8
    #define fsloop_close_call                                0x2C2A08
    #define fsloop_read_call                                 0x2C2A48
    #define io_rtoc_entry_1                                 -0x178
    #define io_sub_rtoc_entry_1                             -0x7EA0
    #define decrypt_rtoc_entry_2                            -0x6680
    #define storage_rtoc_entry_1                             0x1E50
    #define device_event_rtoc_entry_1                        0x20C0
    #define process_rtoc_entry_1                            -0x7800
    #define patch_func2                                      0x5A140
    #define patch_func2_offset                               0x2C
    #define user_thread_prio_patch                           0x201B4
    #define user_thread_prio_patch2                          0x201C0
    #define shutdown_patch_offset                            0xAAA8
    #define shutdown_copy_params_call                        0xAABC

    /* hash */
    #define EXPLORE_PLUGIN_HASH                         0xACF4AF2B000E6988
    #define EXPLORE_CATEGORY_GAME_HASH                  0x9CB3B0BE000574C3
    #define GAME_EXT_PLUGIN_HASH                        0xE274AF7B0001D8EF
    #define LIBFS_EXTERNAL_HASH                         0x5BC7BEC800006430
    #define PSP_EMULATOR_HASH                           0x7BE65D6D00023702
    #define PEMUCORELIB_HASH                            0xF349A563000BFCC8
    #define EMULATOR_API_HASH                           0xA9F5B2320001E7C6
    #define EMULATOR_DRM_HASH                           0xD2C7F3E20000538F
    #define EMULATOR_DRM_DATA_HASH                      0xB4F919590001B6E7
    #define LIBSYSUTIL_SAVEDATA_PSP_HASH                0x57BBC3B800003210

    /* lv1 */
    #define vsh_pos_in_ram                              0x910000

    /* vsh */
    #define ps2tonet_patch                              0xC44EC
    #define ps2tonet_size_patch                         0xC44E0
    #define vmode_patch_offset                          0x43EA78
    #define psp_drm_patch1                              0x23C85C
    #define psp_drm_patch2                              0x23D2F4
    #define psp_drm_patch3                              0x23CF34
    #define psp_drm_patch4                              0x23D73C
    #define psp_drm_patchA                              0x23C978
    #define psp_drm_patchB                              0x23D210
    #define psp_drm_patchC                              0x23C3B0
    #define psp_drm_patchD                              0x23C960
    #define psp_drm_patchE                              0x23C964
    #define psp_drm_patchF                              0x23D328
    #define psp_extra_drm_patch                         0x0

    /* explore_plugin */
    #define ps2_nonbw_offset                            0xDAB8C

    /* explore_category_game */
    #define ps2_nonbw_offset2                           0x75728

    /* game_ext_plugin */
    #define ps2_nonbw_offset3                           0x16498

    /* psp_emulator */
    #define psp_set_psp_mode_offset                     0x1BE0

    /* emulator_api */
    #define psp_read                                    0xFC64
    #define psp_read_header                             0x10BE8
    #define psp_drm_patch5                              0x10A0C
    #define psp_drm_patch6                              0x10A3C
    #define psp_drm_patch7                              0x10A54
    #define psp_drm_patch8                              0x10A58
    #define psp_drm_patch9                              0x10B98
    #define psp_drm_patch11                             0x10B9C
    #define psp_drm_patch12                             0x10BAC
    #define psp_product_id_patch1                       0x10CAC
    #define psp_product_id_patch3                       0x10F84

    /* pemucorelib */
    #define psp_eboot_dec_patch                         0x5E35C
    #define psp_prx_patch                               0x57478
    #define psp_savedata_bind_patch1                    0x79810
    #define psp_savedata_bind_patch2                    0x79868
    #define psp_savedata_bind_patch3                    0x79384
    #define psp_extra_savedata_patch                    0x851A8
    #define psp_prometheus_patch                        0x12E870
    #define prx_patch_call_lr                           0x585CC

    /* emulator_drm */
    #define psp_drm_tag_overwrite                       0x4C64
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
    #define EXPLORE_PLUGIN_REBUG_HASH                   0xACF4AF2B000E71CF
    #define EXPLORE_CATEGORY_GAME_REBUG_HASH            0x9CB3C54A00057710
    #define GAME_EXT_PLUGIN_REBUG_HASH                  0xE274AF7B0001D89E
    #define dex_ps2_nonbw_offset                        0xDAFC0
    #define dex_ps2_nonbw_offset2                       0x75464
    #define dex_ps2_nonbw_offset3                       0x16788
    #define dex_ps2tonet_patch                          0xC9A30
    #define dex_ps2tonet_size_patch                     0xC9A24
    #define dex_vmode_patch_offset                      0x446650
    #define dex_psp_drm_patch1                          0x244068
    #define dex_psp_drm_patch2                          0x244B00
    #define dex_psp_drm_patch3                          0x244740
    #define dex_psp_drm_patch4                          0x244F48
    #define dex_psp_drm_patchA                          0x244184
    #define dex_psp_drm_patchB                          0x244A1C
    #define dex_psp_drm_patchC                          0x243BBC
    #define dex_psp_drm_patchD                          0x24416C
    #define dex_psp_drm_patchE                          0x244170
    #define dex_psp_drm_patchF                          0x244B34
    #define dex_psp_extra_drm_patch                     0x0
#endif
