#ifdef FIRMWARE_455D

    #define FIRMWARE_VERSION                                 0x455
    #define FIRMWARE_DEX                                     FIRMWARE_VERSION

    #ifdef PS3M_API
        #define PS3MAPI_FW_TYPE                              "DEX MAMBA"
        #define PS3MAPI_IDPS_1                               0x8000000000407930ULL
        #define PS3MAPI_IDPS_2                               0x8000000000494F1CULL
        #define PS3MAPI_PSID                                 0x8000000000494F34ULL
    #endif

    /* lv2 */
    #define TOC                                              0x3738E0
    #define open_shared_kernel_object_symbol                 0x12ACC
    #define close_kernel_object_handle_symbol                0x120EC
    #define open_kernel_object_symbol                        0x12CBC
    #define alloc_symbol                                     0x67D84
    #define dealloc_symbol                                   0x681C0
    #define copy_to_user_symbol                              0xFEB4
    #define copy_from_user_symbol                            0x100D0
    #define copy_to_process_symbol                           0xFF6C
    #define copy_from_process_symbol                         0xFD7C
    #define page_allocate_symbol                             0x638F4
    #define page_free_symbol                                 0x63358
    #define page_export_to_proc_symbol                       0x63A90
    #define page_unexport_from_proc_symbol                   0x6324C
    #define kernel_ea_to_lpar_addr_symbol                    0x737F8
    #define map_process_memory_symbol                        0x7AEA4
    #define memcpy_symbol                                    0x82564
    #define memset_symbol                                    0x51080
    #define memcmp_symbol                                    0x50390
    #define printf_symbol                                    0x282838
    #define printfnull_symbol                                0x2872BC
    #define sprintf_symbol                                   0x524A8
    #define snprintf_symbol                                  0x52414
    #define strcpy_symbol                                    0x5122C
    #define strncpy_symbol                                   0x512F4
    #define strlen_symbol                                    0x51254
    #define strcat_symbol                                    0x5115C
    #define strcmp_symbol                                    0x511D8
    #define strncmp_symbol                                   0x51280
    #define strchr_symbol                                    0x51194
    #define spin_lock_irqsave_ex_symbol                      0x27F544
    #define spin_unlock_irqrestore_ex_symbol                 0x27F518
    #define load_process_symbol                              0x5004
    #define ppu_thread_create_symbol                         0x14670
    #define ppu_thread_exit_symbol                           0x14728
    #define ppu_thread_join_symbol                           0x1477C
    #define ppu_thread_delay_symbol                          0x2A754
    #define create_user_thread2_symbol                       0x26DA4
    #define start_thread_symbol                              0x258DC
    #define run_thread_symbol                                0x250A0
    #define register_thread_symbol                           0x278160
    #define allocate_user_stack_symbol                       0x278948
    #define mutex_create_symbol                              0x13D00
    #define mutex_destroy_symbol                             0x13C98
    #define mutex_lock_symbol                                0x13C90
    #define mutex_unlock_symbol                              0x13C88
    #define event_port_create_symbol                         0x1373C
    #define event_port_destroy_symbol                        0x13BA4
    #define event_port_connect_symbol                        0x13C1C
    #define event_port_disconnect_symbol                     0x13B48
    #define event_port_send_symbol                           0x13734
    #define event_queue_create_symbol                        0x13A44
    #define event_queue_destroy_symbol                       0x139CC
    #define event_queue_receive_symbol                       0x13810
    #define cellFsOpen_symbol                                0x2B9EDC
    #define cellFsClose_symbol                               0x2B9D44
    #define cellFsRead_symbol                                0x2B9E80
    #define cellFsWrite_symbol                               0x2B9DEC
    #define cellFsLseek_symbol                               0x2B9640
    #define cellFsStat_symbol                                0x2B96F8
    #define cellFsUnlink_internal_symbol                     0x1A3BC8
    #define cellFsUtilMount_symbol                           0x2B93B4
    #define cellFsUtilUmount_symbol                          0x2B9388
    #define pathdup_from_user_symbol                         0x1A9BE0
    #define open_path_symbol                                 0x2B9C14
    #define open_fs_object_symbol                            0x191EEC
    #define close_fs_object_symbol                           0x190E28
    #define storage_get_device_info_symbol                   0x2968BC
    #define storage_open_symbol                              0x296AE4
    #define storage_close_symbol                             0x2952D0
    #define storage_read_symbol                              0x29424C
    #define storage_send_device_command_symbol               0x293D6C
    #define storage_map_io_memory_symbol                     0x296768
    #define storage_unmap_io_memory_symbol                   0x296624
    #define storage_internal_get_device_object_symbol        0x293824
    #define decrypt_func_symbol                              0x382FC
    #define lv1_call_99_wrapper_symbol                       0x528BC
    #define modules_verification_symbol                      0x5C0B8
    #define prx_load_module_symbol                           0x8CD84
    #define prx_start_module_symbol                          0x8BA50
    #define prx_stop_module_symbol                           0x8CE28
    #define prx_unload_module_symbol                         0x8B784
    #define prx_get_module_info_symbol                       0x8B17C
    #define prx_get_module_list_symbol                       0x8B1FC
    #define extend_kstack_symbol                             0x73750
    #define get_pseudo_random_number_symbol                  0x2386B0
    #define syscall_table_symbol                             0x388488
    #define syscall_call_offset                              0x287DA0
    #define read_bdvd0_symbol                                0x1B4B50
    #define read_bdvd1_symbol                                0x1B677C
    #define read_bdvd2_symbol                                0x1C3904
    #define device_event_port_send_call                      0x2A0AB8
    #define process_map_caller_call                          0x4D24
    #define fsloop_open_call                                 0x2BA074
    #define fsloop_close_call                                0x2BA0C4
    #define fsloop_read_call                                 0x2BA104
    #define io_rtoc_entry_1                                 -0x88
    #define io_sub_rtoc_entry_1                             -0x7EA0
    #define decrypt_rtoc_entry_2                            -0x65C8
    #define storage_rtoc_entry_1                             0x22E8
    #define device_event_rtoc_entry_1                        0x2670
    #define process_rtoc_entry_1                            -0x77A0
    #define patch_func2                                      0x5D360
    #define patch_func2_offset                               0x2C
    #define user_thread_prio_patch                           0x21F20
    #define user_thread_prio_patch2                          0x21F2C
    #define shutdown_patch_offset                            0xAB38
    #define shutdown_copy_params_call                        0xAB4C

    /* hash */
    #define EXPLORE_PLUGIN_HASH                         0xACF4AF2B000ECBBD
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
    #define vsh_pos_in_ram                              0x840000

    /* vsh */
    #define ps2tonet_patch                              0xCA1A8
    #define ps2tonet_size_patch                         0xCA19C
    #define vmode_patch_offset                          0x44ACDC
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
    #define cex_vmode_patch_offset                      0x4430E8
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
