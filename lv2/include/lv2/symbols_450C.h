#ifdef FIRMWARE_450C

    #define FIRMWARE_VERSION                                 0x450
    #define FIRMWARE_CEX                                     FIRMWARE_VERSION

    #ifdef PS3M_API
        #define PS3MAPI_FW_TYPE                              "CEX MAMBA"
        #define PS3MAPI_IDPS_1                               0x80000000003DE230ULL
        #define PS3MAPI_IDPS_2                               0x800000000046CF0CULL
        #define PS3MAPI_PSID                                 0x800000000046CF24ULL
    #endif

    /* lv2 */
    #define TOC                                              0x34B160
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
    #define printf_symbol                                    0x278B08
    #define printfnull_symbol                                0x27D578
    #define sprintf_symbol                                   0x4E8B8
    #define snprintf_symbol                                  0x4E824
    #define strcpy_symbol                                    0x4D63C
    #define strncpy_symbol                                   0x4D704
    #define strlen_symbol                                    0x4D664
    #define strcat_symbol                                    0x4D56C
    #define strcmp_symbol                                    0x4D5E8
    #define strncmp_symbol                                   0x4D690
    #define strchr_symbol                                    0x4D5A4
    #define spin_lock_irqsave_ex_symbol                      0x275C08
    #define spin_unlock_irqrestore_ex_symbol                 0x275BDC
    #define load_process_symbol                              0x5004
    #define ppu_thread_create_symbol                         0x13F28
    #define ppu_thread_exit_symbol                           0x13FE0
    #define ppu_thread_join_symbol                           0x14034
    #define ppu_thread_delay_symbol                          0x285C8
    #define create_user_thread2_symbol                       0x24EAC
    #define start_thread_symbol                              0x23B78
    #define run_thread_symbol                                0x233A8
    #define register_thread_symbol                           0x26FE18
    #define allocate_user_stack_symbol                       0x270600
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
    #define cellFsOpen_symbol                                0x29DFE8
    #define cellFsClose_symbol                               0x29DE50
    #define cellFsRead_symbol                                0x29DF8C
    #define cellFsWrite_symbol                               0x29DEF8
    #define cellFsLseek_symbol                               0x29D580
    #define cellFsStat_symbol                                0x29D804
    #define cellFsUnlink_internal_symbol                     0x19BFA4
    #define cellFsUtilMount_symbol                           0x29D360
    #define cellFsUtilUmount_symbol                          0x29D334
    #define pathdup_from_user_symbol                         0x1A20DC
    #define open_path_symbol                                 0x2E9C48
    #define open_fs_object_symbol                            0x18A6DC
    #define close_fs_object_symbol                           0x189618
    #define storage_get_device_info_symbol                   0x281F58
    #define storage_open_symbol                              0x281968
    #define storage_close_symbol                             0x281758
    #define storage_read_symbol                              0x280CC8
    #define storage_send_device_command_symbol               0x280854
    #define storage_map_io_memory_symbol                     0x281E14
    #define storage_unmap_io_memory_symbol                   0x281CE0
    #define storage_internal_get_device_object_symbol        0x28030C
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
    #define get_pseudo_random_number_symbol                  0x230930
    #define syscall_table_symbol                             0x35F0D0
    #define syscall_call_offset                              0x27E05C
    #define read_bdvd0_symbol                                0x1AD04C
    #define read_bdvd1_symbol                                0x1AEC78
    #define read_bdvd2_symbol                                0x1BBE00
    #define device_event_port_send_call                      0x28A4C4
    #define process_map_caller_call                          0x4D24
    #define fsloop_open_call                                 0x29E180
    #define fsloop_close_call                                0x29E1D0
    #define fsloop_read_call                                 0x29E210
    #define io_rtoc_entry_1                                 -0x1E8
    #define io_sub_rtoc_entry_1                             -0x7EA0
    #define decrypt_rtoc_entry_2                            -0x6688
    #define storage_rtoc_entry_1                             0x1DC8
    #define device_event_rtoc_entry_1                        0x2038
    #define process_rtoc_entry_1                            -0x7800
    #define patch_func2                                      0x591DC
    #define patch_func2_offset                               0x2C
    #define user_thread_prio_patch                           0x20228
    #define user_thread_prio_patch2                          0x20234
    #define shutdown_patch_offset                            0xAAA8
    #define shutdown_copy_params_call                        0xAABC

    /* hash */
    #define EXPLORE_PLUGIN_HASH                         0xACF4AF2B000EC573
    #define EXPLORE_CATEGORY_GAME_HASH                  0x9CB3259A00056DB7
    #define GAME_EXT_PLUGIN_HASH                        0xE274AF7B0001E2A0
    #define LIBFS_EXTERNAL_HASH                         0x5BC7BCE800006477
    #define PSP_EMULATOR_HASH                           0x7BE641F500023793
    #define PEMUCORELIB_HASH                            0xF349A563000C0D00
    #define EMULATOR_API_HASH                           0xA9F5BC7A0001BAAC
    #define EMULATOR_DRM_HASH                           0xA324DC4A0000539C
    #define EMULATOR_DRM_DATA_HASH                      0x1D8D2DA00001B6E4
    #define LIBSYSUTIL_SAVEDATA_PSP_HASH                0x57BBC04800003207

    /* lv1 */
    #define vsh_pos_in_ram                              0x910000

    /* vsh */
    #define ps2tonet_patch                              0xC4C40
    #define ps2tonet_size_patch                         0xC4C34
    #define vmode_patch_offset                          0x441F78
    #define psp_drm_patch1                              0x240650
    #define psp_drm_patch2                              0x2410F0
    #define psp_drm_patch3                              0x240D2C
    #define psp_drm_patch4                              0x241538
    #define psp_drm_patchA                              0x24076C
    #define psp_drm_patchB                              0x24100C
    #define psp_drm_patchC                              0x2401A4
    #define psp_drm_patchD                              0x240754
    #define psp_drm_patchE                              0x240758
    #define psp_drm_patchF                              0x241124
    #define psp_extra_drm_patch                         0x0

    /* explore_plugin */
    #define ps2_nonbw_offset                            0xDD8F0

    /* explore_category_game */
    #define ps2_nonbw_offset2                           0x685CC

    /* game_ext_plugin */
    #define ps2_nonbw_offset3                           0x16814

    /* psp_emulator */
    #define psp_set_psp_mode_offset                     0x1C18

    /* emulator_api */
    #define psp_read                                    0x10198
    #define psp_read_header                             0x1111C
    #define psp_drm_patch5                              0x10F40
    #define psp_drm_patch6                              0x10F70
    #define psp_drm_patch7                              0x10F88
    #define psp_drm_patch8                              0x10F8C
    #define psp_drm_patch9                              0x110CC
    #define psp_drm_patch11                             0x110D0
    #define psp_drm_patch12                             0x110E0
    #define psp_product_id_patch1                       0x111E0
    #define psp_product_id_patch3                       0x114B8

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
    #define EXPLORE_PLUGIN_REBUG_HASH                   0xACF4AF2B000ECDF3
    #define EXPLORE_CATEGORY_GAME_REBUG_HASH            0x9CB333060005707B
    #define GAME_EXT_PLUGIN_REBUG_HASH                  0xE274AF7B0001E2BA
    #define dex_ps2_nonbw_offset                        0xDDD18
    #define dex_ps2_nonbw_offset2                       0x682F0
    #define dex_ps2_nonbw_offset3                       0x16B04
    #define dex_ps2tonet_patch                          0xCA18C
    #define dex_ps2tonet_size_patch                     0xCA180
    #define dex_vmode_patch_offset                      0x449B6C
    #define dex_psp_drm_patch1                          0x247E78
    #define dex_psp_drm_patch2                          0x248918
    #define dex_psp_drm_patch3                          0x248554
    #define dex_psp_drm_patch4                          0x248D60
    #define dex_psp_drm_patchA                          0x247F94
    #define dex_psp_drm_patchB                          0x248834
    #define dex_psp_drm_patchC                          0x2479CC
    #define dex_psp_drm_patchD                          0x247F7C
    #define dex_psp_drm_patchE                          0x247F80
    #define dex_psp_drm_patchF                          0x24894C
    #define dex_psp_extra_drm_patch                     0x0
#endif
