#ifdef FIRMWARE_481D

    #define FIRMWARE_VERSION                                 0x481
    #define FIRMWARE_DEX                                     FIRMWARE_VERSION

    #ifdef PS3M_API
        #define PS3MAPI_FW_TYPE                              "DEX MAMBA"
        #define PS3MAPI_IDPS_1                               0x8000000000409A30ULL
        #define PS3MAPI_IDPS_2                               0x800000000049CAF4ULL
        #define PS3MAPI_PSID                                 0x800000000049CB0CULL
    #endif

    /* lv2 */
    #define TOC                                              0x3759C0
    #define open_shared_kernel_object_symbol                 0x12A58
    #define close_kernel_object_handle_symbol                0x12078
    #define open_kernel_object_symbol                        0x12C48
    #define alloc_symbol                                     0x681F4
    #define dealloc_symbol                                   0x68630
    #define copy_to_user_symbol                              0xFEB4
    #define copy_from_user_symbol                            0x100D0
    #define copy_to_process_symbol                           0xFF6C
    #define copy_from_process_symbol                         0xFD7C
    #define page_allocate_symbol                             0x63D64
    #define page_free_symbol                                 0x637C8
    #define page_export_to_proc_symbol                       0x63F00
    #define page_unexport_from_proc_symbol                   0x636BC
    #define kernel_ea_to_lpar_addr_symbol                    0x73C9C
    #define map_process_memory_symbol                        0x7B348
    #define memcpy_symbol                                    0x82A08
    #define memset_symbol                                    0x51014
    #define memcmp_symbol                                    0x50324
    #define printf_symbol                                    0x278978
    #define printfnull_symbol                                0x27D400
    #define sprintf_symbol                                   0x5243C
    #define snprintf_symbol                                  0x523A8
    #define strcpy_symbol                                    0x511C0
    #define strncpy_symbol                                   0x51288
    #define strlen_symbol                                    0x511E8
    #define strcat_symbol                                    0x510F0
    #define strcmp_symbol                                    0x5116C
    #define strncmp_symbol                                   0x51214
    #define strchr_symbol                                    0x51128
    #define spin_lock_irqsave_ex_symbol                      0x275670
    #define spin_unlock_irqrestore_ex_symbol                 0x275644
    #define load_process_symbol                              0x5004
    #define ppu_thread_create_symbol                         0x145FC
    #define ppu_thread_exit_symbol                           0x146B4
    #define ppu_thread_join_symbol                           0x14708
    #define ppu_thread_delay_symbol                          0x2A6E8
    #define create_user_thread2_symbol                       0x26D30
    #define start_thread_symbol                              0x25868
    #define run_thread_symbol                                0x2502C
    #define register_thread_symbol                           0x26E270
    #define allocate_user_stack_symbol                       0x26EA58
    #define mutex_create_symbol                              0x13C8C
    #define mutex_destroy_symbol                             0x13C24
    #define mutex_lock_symbol                                0x13C1C
    #define mutex_unlock_symbol                              0x13C14
    #define event_port_create_symbol                         0x136C8
    #define event_port_destroy_symbol                        0x13B30
    #define event_port_connect_symbol                        0x13BA8
    #define event_port_disconnect_symbol                     0x13AD4
    #define event_port_send_symbol                           0x136C0
    #define event_queue_create_symbol                        0x139D0
    #define event_queue_destroy_symbol                       0x13958
    #define event_queue_receive_symbol                       0x1379C
    #define cellFsOpen_symbol                                0x2B2898
    #define cellFsClose_symbol                               0x2B2700
    #define cellFsRead_symbol                                0x2B283C
    #define cellFsWrite_symbol                               0x2B27A8
    #define cellFsLseek_symbol                               0x2B1FFC
    #define cellFsStat_symbol                                0x2B20B4
    #define cellFsUnlink_internal_symbol                     0x1A29D8
    #define cellFsUtilMount_symbol                           0x2B1D70
    #define cellFsUtilUmount_symbol                          0x2B1D44
    #define pathdup_from_user_symbol                         0x2B7B5C
    #define open_path_symbol                                 0x2B25D0
    #define open_fs_object_symbol                            0x190CFC
    #define close_fs_object_symbol                           0x18FC38
    #define storage_get_device_info_symbol                   0x28CA00
    #define storage_open_symbol                              0x28CC28
    #define storage_close_symbol                             0x28B414
    #define storage_read_symbol                              0x28A390
    #define storage_send_device_command_symbol               0x289EB0
    #define storage_map_io_memory_symbol                     0x28C8AC
    #define storage_unmap_io_memory_symbol                   0x28C768
    #define storage_internal_get_device_object_symbol        0x289968
    #define decrypt_func_symbol                              0x38290
    #define lv1_call_99_wrapper_symbol                       0x52850
    #define modules_verification_symbol                      0x5C488
    #define prx_load_module_symbol                           0x8D308
    #define prx_start_module_symbol                          0x8BFD4
    #define prx_stop_module_symbol                           0x8D3AC
    #define prx_unload_module_symbol                         0x8BD08
    #define prx_get_module_info_symbol                       0x8B700
    #define prx_get_module_list_symbol                       0x8B780
    #define extend_kstack_symbol                             0x73BF4
    #define get_pseudo_random_number_symbol                  0x22E65C
    #define syscall_table_symbol                             0x38A4E8
    #define syscall_call_offset                              0x27DEE4
    #define read_bdvd0_symbol                                0x1AAACC
    #define read_bdvd1_symbol                                0x1AC6F8
    #define read_bdvd2_symbol                                0x1B98B0
    #define device_event_port_send_call                      0x296BFC
    #define process_map_caller_call                          0x4D24
    #define fsloop_open_call                                 0x2B2A30
    #define fsloop_close_call                                0x2B2A80
    #define fsloop_read_call                                 0x2B2AC0
    #define io_rtoc_entry_1                                  0x2EC0
    #define io_sub_rtoc_entry_1                             -0x7EA0
    #define decrypt_rtoc_entry_2                            -0x65C0
    #define storage_rtoc_entry_1                             0x22B0
    #define device_event_rtoc_entry_1                        0x2638
    #define process_rtoc_entry_1                            -0x77A0
    #define patch_func2                                      0x5D754
    #define patch_func2_offset                               0x2C
    #define user_thread_prio_patch                           0x21EAC
    #define user_thread_prio_patch2                          0x21EB8
    #define shutdown_patch_offset                            0xAB38
    #define shutdown_copy_params_call                        0xAB4C

    #define lic_patch										0x59C00
    #define ode_patch										0x22DAD0

    #define sm_get_temperature_symbol						0x269A84
    #define sm_get_fan_policy_symbol						0x268E18
    #define sm_set_fan_policy_symbol						0x26ADE0

    /* hash */
    #define EXPLORE_PLUGIN_HASH                         0xACF4AF2B000ECC91
    #define EXPLORE_CATEGORY_GAME_HASH                  0x9CB3396E00056CE9
    #define GAME_EXT_PLUGIN_HASH                        0xE274AF7B0001E5D4
    #define LIBFS_EXTERNAL_HASH                         0x5BC7BCE800006477
    #define PSP_EMULATOR_HASH                           0x7BE641F500023794
    #define PEMUCORELIB_HASH                            0xF349A563000C0D67
    #define EMULATOR_API_HASH                           0xA9F5B37A0001BB45
    #define EMULATOR_DRM_HASH                           0xA324DC4A00005399
    #define EMULATOR_DRM_DATA_HASH                      0x75C390860001B75F
    #define LIBSYSUTIL_SAVEDATA_PSP_HASH                0x57BBC3B800003212

    /* lv1 */
    #define vsh_pos_in_ram                              0x910000

    /* vsh */
    #define ps2tonet_patch                              0xCA380
    #define ps2tonet_size_patch                         0xCA374
    #define vmode_patch_offset                          0x44ADCC
    #define psp_drm_patch1                              0x24A7E8
    #define psp_drm_patch2                              0x24B288
    #define psp_drm_patch3                              0x24AEC4
    #define psp_drm_patch4                              0x24B6D0
    #define psp_drm_patchA                              0x24A904
    #define psp_drm_patchB                              0x24B1A4
    #define psp_drm_patchC                              0x24A33C
    #define psp_drm_patchD                              0x24A8EC
    #define psp_drm_patchE                              0x24A8F0
    #define psp_drm_patchF                              0x24B2BC
    #define psp_extra_drm_patch                         0x24D318

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
    #define cex_vmode_patch_offset                      0x4431D8
    #define cex_psp_drm_patch1                          0x242FC0
    #define cex_psp_drm_patch2                          0x243A60
    #define cex_psp_drm_patch3                          0x24369C
    #define cex_psp_drm_patch4                          0x243EA8
    #define cex_psp_drm_patchA                          0x2430DC
    #define cex_psp_drm_patchB                          0x24397C
    #define cex_psp_drm_patchC                          0x242B14
    #define cex_psp_drm_patchD                          0x2430C4
    #define cex_psp_drm_patchE                          0x2430C8
    #define cex_psp_drm_patchF                          0x243A94
    #define cex_psp_extra_drm_patch                     0x245AF0
#endif
