#ifdef FIRMWARE_453D

    #define FIRMWARE_VERSION                                 0x453
    #define FIRMWARE_DEX                                     FIRMWARE_VERSION

    #ifdef PS3M_API
        #define PS3MAPI_FW_TYPE                              "DEX MAMBA"
        #define PS3MAPI_IDPS_1                               0x80000000004045B0ULL
        #define PS3MAPI_IDPS_2                               0x8000000000494F0CULL
        #define PS3MAPI_PSID                                 0x8000000000494F24ULL
    #endif

    /* lv2 */
    #define TOC                                              0x370620
    #define open_shared_kernel_object_symbol                 0x12ABC
    #define close_kernel_object_handle_symbol                0x120DC
    #define open_kernel_object_symbol                        0x12CAC
    #define alloc_symbol                                     0x66948
    #define dealloc_symbol                                   0x66D84
    #define copy_to_user_symbol                              0xFEA4
    #define copy_from_user_symbol                            0x100C0
    #define copy_to_process_symbol                           0xFF5C
    #define copy_from_process_symbol                         0xFD6C
    #define page_allocate_symbol                             0x624B8
    #define page_free_symbol                                 0x61F1C
    #define page_export_to_proc_symbol                       0x62654
    #define page_unexport_from_proc_symbol                   0x61E10
    #define kernel_ea_to_lpar_addr_symbol                    0x723BC
    #define map_process_memory_symbol                        0x79A68
    #define memcpy_symbol                                    0x81128
    #define memset_symbol                                    0x50E3C
    #define memcmp_symbol                                    0x5014C
    #define printf_symbol                                    0x280FE0
    #define printfnull_symbol                                0x285A64
    #define sprintf_symbol                                   0x52264
    #define snprintf_symbol                                  0x521D0
    #define strcpy_symbol                                    0x50FE8
    #define strncpy_symbol                                   0x510B0
    #define strlen_symbol                                    0x51010
    #define strcat_symbol                                    0x50F18
    #define strcmp_symbol                                    0x50F94
    #define strncmp_symbol                                   0x5103C
    #define strchr_symbol                                    0x50F50
    #define spin_lock_irqsave_ex_symbol                      0x27DCEC
    #define spin_unlock_irqrestore_ex_symbol                 0x27DCC0
    #define load_process_symbol                              0x5004
    #define ppu_thread_create_symbol                         0x14660
    #define ppu_thread_exit_symbol                           0x14718
    #define ppu_thread_join_symbol                           0x1476C
    #define ppu_thread_delay_symbol                          0x2A510
    #define create_user_thread2_symbol                       0x26B60
    #define start_thread_symbol                              0x25698
    #define run_thread_symbol                                0x24E5C
    #define register_thread_symbol                           0x276914
    #define allocate_user_stack_symbol                       0x2770FC
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
    #define cellFsOpen_symbol                                0x2B8688
    #define cellFsClose_symbol                               0x2B84F0
    #define cellFsRead_symbol                                0x2B862C
    #define cellFsWrite_symbol                               0x2B8598
    #define cellFsLseek_symbol                               0x2B7DEC
    #define cellFsStat_symbol                                0x2B7EA4
    #define cellFsUnlink_internal_symbol                     0x1A26DC
    #define cellFsUtilMount_symbol                           0x2B7B60
    #define cellFsUtilUmount_symbol                          0x2B7B34
    #define pathdup_from_user_symbol                         0x1A86F4
    #define open_path_symbol                                 0x2B83C0
    #define open_fs_object_symbol                            0x190A7C
    #define close_fs_object_symbol                           0x18F9B8
    #define storage_get_device_info_symbol                   0x295064
    #define storage_open_symbol                              0x29528C
    #define storage_close_symbol                             0x293A78
    #define storage_read_symbol                              0x2929F4
    #define storage_send_device_command_symbol               0x292514
    #define storage_map_io_memory_symbol                     0x294F10
    #define storage_unmap_io_memory_symbol                   0x294DCC
    #define storage_internal_get_device_object_symbol        0x291FCC
    #define decrypt_func_symbol                              0x380B8
    #define lv1_call_99_wrapper_symbol                       0x52678
    #define modules_verification_symbol                      0x5C1F8
    #define prx_load_module_symbol                           0x8B938
    #define prx_start_module_symbol                          0x8A604
    #define prx_stop_module_symbol                           0x8B9DC
    #define prx_unload_module_symbol                         0x8A338
    #define prx_get_module_info_symbol                       0x89D30
    #define prx_get_module_list_symbol                       0x89DB0
    #define extend_kstack_symbol                             0x72314
    #define get_pseudo_random_number_symbol                  0x236FE0
    #define syscall_table_symbol                             0x385108
    #define syscall_call_offset                              0x286548
    #define read_bdvd0_symbol                                0x1B3664
    #define read_bdvd1_symbol                                0x1B5290
    #define read_bdvd2_symbol                                0x1C2448
    #define device_event_port_send_call                      0x29F260
    #define process_map_caller_call                          0x4D24
    #define fsloop_open_call                                 0x2B8820
    #define fsloop_close_call                                0x2B8870
    #define fsloop_read_call                                 0x2B88B0
    #define io_rtoc_entry_1                                 -0xB8
    #define io_sub_rtoc_entry_1                             -0x7EA0
    #define decrypt_rtoc_entry_2                            -0x65A8
    #define storage_rtoc_entry_1                             0x22A0
    #define device_event_rtoc_entry_1                        0x2628
    #define process_rtoc_entry_1                            -0x77A0
    #define patch_func2                                      0x5CBB0
    #define patch_func2_offset                               0x2C
    #define user_thread_prio_patch                           0x21CDC
    #define user_thread_prio_patch2                          0x21CE8
    #define shutdown_patch_offset                            0xAB28
    #define shutdown_copy_params_call                        0xAB3C

    /* hash */
    #define EXPLORE_PLUGIN_HASH                         0xACF4AF2B000ECBBB
    #define EXPLORE_CATEGORY_GAME_HASH                  0x9CB325E600056E4C
    #define GAME_EXT_PLUGIN_HASH                        0xE274AF7B0001E2CF
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
    #define ps2tonet_patch                              0xCA1A8
    #define ps2tonet_size_patch                         0xCA19C
    #define vmode_patch_offset                          0x449EF0
    #define psp_drm_patch1                              0x247F44
    #define psp_drm_patch2                              0x2489E4
    #define psp_drm_patch3                              0x248620
    #define psp_drm_patch4                              0x248E2C
    #define psp_drm_patchA                              0x248060
    #define psp_drm_patchB                              0x248900
    #define psp_drm_patchC                              0x247A98
    #define psp_drm_patchD                              0x248048
    #define psp_drm_patchE                              0x24804C
    #define psp_drm_patchF                              0x248A18
    #define psp_extra_drm_patch                         0x0

    /* explore_plugin */
    #define ps2_nonbw_offset                            0xDD6D0

    /* explore_category_game */
    #define ps2_nonbw_offset2                           0x68244

    /* game_ext_plugin */
    #define ps2_nonbw_offset3                           0x16B40

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

    /* CEX */
    #define cex_ps2tonet_patch                          0xC4C5C
    #define cex_ps2tonet_size_patch                     0xC4C50
    #define cex_vmode_patch_offset                      0x4422FC
    #define cex_psp_drm_patch1                          0x24071C
    #define cex_psp_drm_patch2                          0x2411BC
    #define cex_psp_drm_patch3                          0x240DF8
    #define cex_psp_drm_patch4                          0x241604
    #define cex_psp_drm_patchA                          0x240838
    #define cex_psp_drm_patchB                          0x2410D8
    #define cex_psp_drm_patchC                          0x240270
    #define cex_psp_drm_patchD                          0x240820
    #define cex_psp_drm_patchE                          0x240824
    #define cex_psp_drm_patchF                          0x2411F0
    #define cex_psp_extra_drm_patch                     0x0
#endif
