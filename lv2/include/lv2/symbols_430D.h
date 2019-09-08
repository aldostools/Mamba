#ifdef FIRMWARE_430D

    #define FIRMWARE_VERSION                                 0x430
    #define FIRMWARE_DEX                                     FIRMWARE_VERSION

    #ifdef PS3M_API
        #define PS3MAPI_FW_TYPE                              "DEX MAMBA"
        #define PS3MAPI_IDPS_1                               0x80000000003F9930ULL
        #define PS3MAPI_IDPS_2                               0x8000000000496F3CULL
        #define PS3MAPI_PSID                                 0x8000000000496F54ULL
    #endif

    /* lv2 */
    #define TOC                                              0x365CA0
    #define open_shared_kernel_object_symbol                 0x12A40
    #define close_kernel_object_handle_symbol                0x12060
    #define open_kernel_object_symbol                        0x12C30
    #define alloc_symbol                                     0x67940
    #define dealloc_symbol                                   0x67D7C
    #define copy_to_user_symbol                              0xFEA0
    #define copy_from_user_symbol                            0x100BC
    #define copy_to_process_symbol                           0xFF58
    #define copy_from_process_symbol                         0xFD68
    #define page_allocate_symbol                             0x634B0
    #define page_free_symbol                                 0x62F14
    #define page_export_to_proc_symbol                       0x6364C
    #define page_unexport_from_proc_symbol                   0x62E08
    #define kernel_ea_to_lpar_addr_symbol                    0x733B4
    #define map_process_memory_symbol                        0x7AA60
    #define memcpy_symbol                                    0x82120
    #define memset_symbol                                    0x51E34
    #define memcmp_symbol                                    0x51144
    #define printf_symbol                                    0x2A7F50
    #define printfnull_symbol                                0x2AC9D4
    #define sprintf_symbol                                   0x5325C
    #define snprintf_symbol                                  0x531C8
    #define strcpy_symbol                                    0x51FE0
    #define strncpy_symbol                                   0x520A8
    #define strlen_symbol                                    0x52008
    #define strcat_symbol                                    0x51F10
    #define strcmp_symbol                                    0x51F8C
    #define strncmp_symbol                                   0x52034
    #define strchr_symbol                                    0x51F48
    #define spin_lock_irqsave_ex_symbol                      0x2A5DD0
    #define spin_unlock_irqrestore_ex_symbol                 0x2A5DA4
    #define load_process_symbol                              0x5004
    #define ppu_thread_create_symbol                         0x1452C
    #define ppu_thread_exit_symbol                           0x145E4
    #define ppu_thread_join_symbol                           0x14638
    #define ppu_thread_delay_symbol                          0x2A3DC
    #define create_user_thread2_symbol                       0x26A2C
    #define start_thread_symbol                              0x25564
    #define run_thread_symbol                                0x24D28
    #define register_thread_symbol                           0x29EA38
    #define allocate_user_stack_symbol                       0x29F220
    #define mutex_create_symbol                              0x13C74
    #define mutex_destroy_symbol                             0x13C0C
    #define mutex_lock_symbol                                0x13C04
    #define mutex_unlock_symbol                              0x13BFC
    #define event_port_create_symbol                         0x136B0
    #define event_port_destroy_symbol                        0x13B18
    #define event_port_connect_symbol                        0x13B90
    #define event_port_disconnect_symbol                     0x13ABC
    #define event_port_send_symbol                           0x136A8
    #define event_queue_create_symbol                        0x139B8
    #define event_queue_destroy_symbol                       0x13940
    #define event_queue_receive_symbol                       0x13784
    #define cellFsOpen_symbol                                0x2DB114
    #define cellFsClose_symbol                               0x2DAF7C
    #define cellFsRead_symbol                                0x2DB0B8
    #define cellFsWrite_symbol                               0x2DB024
    #define cellFsLseek_symbol                               0x2DA878
    #define cellFsStat_symbol                                0x2DA930
    #define cellFsUnlink_internal_symbol                     0x1B0458
    #define cellFsUtilMount_symbol                           0x2DA5EC
    #define cellFsUtilUmount_symbol                          0x2DA5C0
    #define pathdup_from_user_symbol                         0x1B81B4
    #define open_path_symbol                                 0x2DAE4C
    #define open_fs_object_symbol                            0x1976BC
    #define close_fs_object_symbol                           0x19668C
    #define storage_get_device_info_symbol                   0x2BBC04
    #define storage_open_symbol                              0x2BBE2C
    #define storage_close_symbol                             0x2BA290
    #define storage_read_symbol                              0x2B9810
    #define storage_send_device_command_symbol               0x2B9330
    #define storage_map_io_memory_symbol                     0x2BBAB0
    #define storage_unmap_io_memory_symbol                   0x2BB96C
    #define storage_internal_get_device_object_symbol        0x2B8DE8
    #define decrypt_func_symbol                              0x37F74
    #define lv1_call_99_wrapper_symbol                       0x53670
    #define modules_verification_symbol                      0x5D1F0
    #define prx_load_module_symbol                           0x8C8E0
    #define prx_start_module_symbol                          0x8B5AC
    #define prx_stop_module_symbol                           0x8C984
    #define prx_unload_module_symbol                         0x8B2E0
    #define prx_get_module_info_symbol                       0x8ACD8
    #define prx_get_module_list_symbol                       0x8AD58
    #define extend_kstack_symbol                             0x7330C
    #define get_pseudo_random_number_symbol                  0x25F5E4
    #define syscall_table_symbol                             0x37C068
    #define syscall_call_offset                              0x2AD4B8
    #define read_bdvd0_symbol                                0x1C3114
    #define read_bdvd1_symbol                                0x1C4D40
    #define read_bdvd2_symbol                                0x1D1EF8
    #define device_event_port_send_call                      0x2C5C10
    #define process_map_caller_call                          0x4D24
    #define fsloop_open_call                                 0x2DB2AC
    #define fsloop_close_call                                0x2DB2FC
    #define fsloop_read_call                                 0x2DB33C
    #define io_rtoc_entry_1                                 -0x48
    #define io_sub_rtoc_entry_1                             -0x7EA0
    #define decrypt_rtoc_entry_2                            -0x65A0
    #define storage_rtoc_entry_1                             0x2318
    #define device_event_rtoc_entry_1                        0x26A0
    #define process_rtoc_entry_1                            -0x77A0
    #define patch_func2                                      0x5DBA8
    #define patch_func2_offset                               0x2C
    #define user_thread_prio_patch                           0x21BA8
    #define user_thread_prio_patch2                          0x21BB4
    #define shutdown_patch_offset                            0xAB28
    #define shutdown_copy_params_call                        0xAB3C

    /* hash */
    #define EXPLORE_PLUGIN_HASH                         0xACF4AF2B000EC258
    #define EXPLORE_CATEGORY_GAME_HASH                  0x9CB3CB3900057221
    #define GAME_EXT_PLUGIN_HASH                        0xE274AF7B0001DD6F
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
    #define ps2tonet_patch                              0xCA2B8
    #define ps2tonet_size_patch                         0xCA2AC
    #define vmode_patch_offset                          0x447CB0
    #define psp_drm_patch1                              0x244A94
    #define psp_drm_patch2                              0x245534
    #define psp_drm_patch3                              0x245170
    #define psp_drm_patch4                              0x24597C
    #define psp_drm_patchA                              0x244BB0
    #define psp_drm_patchB                              0x245450
    #define psp_drm_patchC                              0x2445E8
    #define psp_drm_patchD                              0x244B98
    #define psp_drm_patchE                              0x244B9C
    #define psp_drm_patchF                              0x245568
    #define psp_extra_drm_patch                         0x0

    /* explore_plugin */
    #define ps2_nonbw_offset                            0xDE1F4

    /* explore_category_game */
    #define ps2_nonbw_offset2                           0x6989C

    /* game_ext_plugin */
    #define ps2_nonbw_offset3                           0x16AC8

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

    /* CEX */
    #define cex_ps2tonet_patch                          0xC4D64
    #define cex_ps2tonet_size_patch                     0xC4D58
    #define cex_vmode_patch_offset                      0x4400CC
    #define cex_psp_drm_patch1                          0x23D27C
    #define cex_psp_drm_patch2                          0x23DD1C
    #define cex_psp_drm_patch3                          0x23D958
    #define cex_psp_drm_patch4                          0x23E164
    #define cex_psp_drm_patchA                          0x23D398
    #define cex_psp_drm_patchB                          0x23DC38
    #define cex_psp_drm_patchC                          0x23CDD0
    #define cex_psp_drm_patchD                          0x23D380
    #define cex_psp_drm_patchE                          0x23D384
    #define cex_psp_drm_patchF                          0x23DD50
    #define cex_psp_extra_drm_patch                     0x0
#endif
