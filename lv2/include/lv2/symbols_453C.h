#ifdef FIRMWARE_453C

    #define FIRMWARE_VERSION                                 0x453
    #define FIRMWARE_CEX                                     FIRMWARE_VERSION

    #ifdef PS3M_API
        #define PS3MAPI_FW_TYPE                              "CEX MAMBA"
        #define PS3MAPI_IDPS_1                               0x80000000003DE430ULL
        #define PS3MAPI_IDPS_2                               0x800000000046CF0CULL
        #define PS3MAPI_PSID                                 0x800000000046CF24ULL
    #endif

    /* lv2 */
    #define TOC                                              0x34B2E0
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
    #define printf_symbol                                    0x278CE0
    #define printfnull_symbol                                0x27D750
    #define sprintf_symbol                                   0x4E8BC
    #define snprintf_symbol                                  0x4E828
    #define strcpy_symbol                                    0x4D640
    #define strncpy_symbol                                   0x4D708
    #define strlen_symbol                                    0x4D668
    #define strcat_symbol                                    0x4D570
    #define strcmp_symbol                                    0x4D5EC
    #define strncmp_symbol                                   0x4D694
    #define strchr_symbol                                    0x4D5A8
    #define spin_lock_irqsave_ex_symbol                      0x275DE0
    #define spin_unlock_irqrestore_ex_symbol                 0x275DB4
    #define load_process_symbol                              0x5004
    #define ppu_thread_create_symbol                         0x13F2C
    #define ppu_thread_exit_symbol                           0x13FE4
    #define ppu_thread_join_symbol                           0x14038
    #define ppu_thread_delay_symbol                          0x285CC
    #define create_user_thread2_symbol                       0x24EB0
    #define start_thread_symbol                              0x23B7C
    #define run_thread_symbol                                0x233AC
    #define register_thread_symbol                           0x26FFF0
    #define allocate_user_stack_symbol                       0x2707D8
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
    #define cellFsOpen_symbol                                0x29E1C0
    #define cellFsClose_symbol                               0x29E028
    #define cellFsRead_symbol                                0x29E164
    #define cellFsWrite_symbol                               0x29E0D0
    #define cellFsLseek_symbol                               0x29D758
    #define cellFsStat_symbol                                0x29D9DC
    #define cellFsUnlink_internal_symbol                     0x19C350
    #define cellFsUtilMount_symbol                           0x29D538
    #define cellFsUtilUmount_symbol                          0x29D50C
    #define pathdup_from_user_symbol                         0x1A2244
    #define open_path_symbol                                 0x29DEF8
    #define open_fs_object_symbol                            0x18A6F0
    #define close_fs_object_symbol                           0x18962C
    #define storage_get_device_info_symbol                   0x282130
    #define storage_open_symbol                              0x281B40
    #define storage_close_symbol                             0x281930
    #define storage_read_symbol                              0x280EA0
    #define storage_send_device_command_symbol               0x280A2C
    #define storage_map_io_memory_symbol                     0x281FEC
    #define storage_unmap_io_memory_symbol                   0x281EB8
    #define storage_internal_get_device_object_symbol        0x2804E4
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
    #define get_pseudo_random_number_symbol                  0x230B04
    #define syscall_table_symbol                             0x35F300
    #define syscall_call_offset                              0x27E234
    #define read_bdvd0_symbol                                0x1AD1B4
    #define read_bdvd1_symbol                                0x1AEDE0
    #define read_bdvd2_symbol                                0x1BBF98
    #define device_event_port_send_call                      0x28A69C
    #define process_map_caller_call                          0x4D24
    #define fsloop_open_call                                 0x29E358
    #define fsloop_close_call                                0x29E3A8
    #define fsloop_read_call                                 0x29E3E8
    #define io_rtoc_entry_1                                 -0x1E8
    #define io_sub_rtoc_entry_1                             -0x7EA0
    #define decrypt_rtoc_entry_2                            -0x6688
    #define storage_rtoc_entry_1                             0x1DC8
    #define device_event_rtoc_entry_1                        0x2038
    #define process_rtoc_entry_1                            -0x7800
    #define patch_func2                                      0x591E0
    #define patch_func2_offset                               0x2C
    #define user_thread_prio_patch                           0x2022C
    #define user_thread_prio_patch2                          0x20238
    #define shutdown_patch_offset                            0xAAA8
    #define shutdown_copy_params_call                        0xAABC

    /* hash */
    #define EXPLORE_PLUGIN_HASH                         0xACF4AF2B000EC3A6
    #define EXPLORE_CATEGORY_GAME_HASH                  0x9CB3205600056C47
    #define GAME_EXT_PLUGIN_HASH                        0xE274AF7B0001E2C8
    #define LIBFS_EXTERNAL_HASH                         0x5BC7BCE800006477
    #define PSP_EMULATOR_HASH                           0x7BE641F500023794
    #define PEMUCORELIB_HASH                            0xF349A563000C0CFC
    #define EMULATOR_API_HASH                           0xA9F5B37A0001BB36
    #define EMULATOR_DRM_HASH                           0xA324DC4A0000539C
    #define EMULATOR_DRM_DATA_HASH                      0x1D8D2DA00001B6E4
    #define LIBSYSUTIL_SAVEDATA_PSP_HASH                0x57BBC04800003207

    /* lv1 */
    #define vsh_pos_in_ram                              0x910000

    /* vsh */
    #define ps2tonet_patch                              0xC4C5C
    #define ps2tonet_size_patch                         0xC4C50
    #define vmode_patch_offset                          0x4422FC
    #define psp_drm_patch1                              0x24071C
    #define psp_drm_patch2                              0x2411BC
    #define psp_drm_patch3                              0x240DF8
    #define psp_drm_patch4                              0x241604
    #define psp_drm_patchA                              0x240838
    #define psp_drm_patchB                              0x2410D8
    #define psp_drm_patchC                              0x240270
    #define psp_drm_patchD                              0x240820
    #define psp_drm_patchE                              0x240824
    #define psp_drm_patchF                              0x2411F0
    #define psp_extra_drm_patch                         0x0

    /* explore_plugin */
    #define ps2_nonbw_offset                            0xDD754

    /* explore_category_game */
    #define ps2_nonbw_offset2                           0x68430

    /* game_ext_plugin */
    #define ps2_nonbw_offset3                           0x16850

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
    #define psp_extra_savedata_patch                    0x8753C
    #define psp_prometheus_patch                        0x12EA28
    #define prx_patch_call_lr                           0x5892C

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
    #define aio_copy_root_offset                        0xD658

    /* DEX */
    #define EXPLORE_PLUGIN_REBUG_HASH                   0xACF4AF2B000ECBBB
    #define EXPLORE_CATEGORY_GAME_REBUG_HASH            0x9CB325E600056E4C
    #define GAME_EXT_PLUGIN_REBUG_HASH                  0xE274AF7B0001E2CF
    #define dex_ps2_nonbw_offset                        0xDD6D0
    #define dex_ps2_nonbw_offset2                       0x68244
    #define dex_ps2_nonbw_offset3                       0x16B40
    #define dex_ps2tonet_patch                          0xCA1A8
    #define dex_ps2tonet_size_patch                     0xCA19C
    #define dex_vmode_patch_offset                      0x449EF0
    #define dex_psp_drm_patch1                          0x247F44
    #define dex_psp_drm_patch2                          0x2489E4
    #define dex_psp_drm_patch3                          0x248620
    #define dex_psp_drm_patch4                          0x248E2C
    #define dex_psp_drm_patchA                          0x248060
    #define dex_psp_drm_patchB                          0x248900
    #define dex_psp_drm_patchC                          0x247A98
    #define dex_psp_drm_patchD                          0x248048
    #define dex_psp_drm_patchE                          0x24804C
    #define dex_psp_drm_patchF                          0x248A18
    #define dex_psp_extra_drm_patch                     0x0
#endif
