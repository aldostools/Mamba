#ifdef FIRMWARE_421D

    #define FIRMWARE_VERSION                                 0x421
    #define FIRMWARE_DEX                                     FIRMWARE_VERSION

    #ifdef PS3M_API
        #define PS3MAPI_FW_TYPE                              "DEX MAMBA"
        #define PS3MAPI_IDPS_1                               0x80000000003F7A30ULL
        #define PS3MAPI_IDPS_2                               0x800000000048FE9CULL
        #define PS3MAPI_PSID                                 0x800000000048FEB4ULL
    #endif

    /* lv2 */
    #define TOC                                              0x363E80
    #define open_shared_kernel_object_symbol                 0x12A44
    #define close_kernel_object_handle_symbol                0x12064
    #define open_kernel_object_symbol                        0x12C34
    #define alloc_symbol                                     0x677F0
    #define dealloc_symbol                                   0x67C2C
    #define copy_to_user_symbol                              0xFEA4
    #define copy_from_user_symbol                            0x100C0
    #define copy_to_process_symbol                           0xFF5C
    #define copy_from_process_symbol                         0xFD6C
    #define page_allocate_symbol                             0x63360
    #define page_free_symbol                                 0x62DC4
    #define page_export_to_proc_symbol                       0x634FC
    #define page_unexport_from_proc_symbol                   0x62CB8
    #define kernel_ea_to_lpar_addr_symbol                    0x73288
    #define map_process_memory_symbol                        0x7A934
    #define memcpy_symbol                                    0x81FF4
    #define memset_symbol                                    0x51DF8
    #define memcmp_symbol                                    0x51108
    #define sys_tty_write_symbol                             0x2A4408
    #define printf_symbol                                    0x2A6828
    #define printfnull_symbol                                0x2AB2AC
    #define sprintf_symbol                                   0x53220
    #define snprintf_symbol                                  0x5318C
    #define strcpy_symbol                                    0x51FA4
    #define strncpy_symbol                                   0x5206C
    #define strlen_symbol                                    0x51FCC
    #define strcat_symbol                                    0x51ED4
    #define strcmp_symbol                                    0x51F50
    #define strncmp_symbol                                   0x51FF8
    #define strchr_symbol                                    0x51F0C
    #define spin_lock_irqsave_ex_symbol                      0x2A46A8
    #define spin_unlock_irqrestore_ex_symbol                 0x2A467C
    #define load_process_symbol                              0x5004
    #define ppu_thread_create_symbol                         0x14530
    #define ppu_thread_exit_symbol                           0x145E8
    #define ppu_thread_join_symbol                           0x1463C
    #define ppu_thread_delay_symbol                          0x2A3E0
    #define create_user_thread2_symbol                       0x26A30
    #define start_thread_symbol                              0x25568
    #define run_thread_symbol                                0x24D2C
    #define register_thread_symbol                           0x29D2C8
    #define allocate_user_stack_symbol                       0x29DAB0
    #define mutex_create_symbol                              0x13C78
    #define mutex_destroy_symbol                             0x13C10
    #define mutex_lock_symbol                                0x13C08
    #define mutex_unlock_symbol                              0x13C00
    #define event_port_create_symbol                         0x136B4
    #define event_port_destroy_symbol                        0x13B1C
    #define event_port_connect_symbol                        0x13B94
    #define event_port_disconnect_symbol                     0x13AC0
    #define event_port_send_symbol                           0x136AC
    #define event_queue_create_symbol                        0x139BC
    #define event_queue_destroy_symbol                       0x13944
    #define event_queue_receive_symbol                       0x13788
    #define cellFsOpen_symbol                                0x2D99E0
    #define cellFsClose_symbol                               0x2D9848
    #define cellFsRead_symbol                                0x2D9984
    #define cellFsWrite_symbol                               0x2D98F0
    #define cellFsLseek_symbol                               0x2D9144
    #define cellFsStat_symbol                                0x2D91FC
    #define cellFsUnlink_internal_symbol                     0x1AF9BC
    #define cellFsUtilMount_symbol                           0x2D8EB8
    #define cellFsUtilUmount_symbol                          0x2D8E8C
    #define pathdup_from_user_symbol                         0x1B7D78
    #define open_path_symbol                                 0x2D9718
    #define open_fs_object_symbol                            0x196C44
    #define close_fs_object_symbol                           0x195C14
    #define storage_get_device_info_symbol                   0x2BA4DC
    #define storage_open_symbol                              0x2BA704
    #define storage_close_symbol                             0x2B8B68
    #define storage_read_symbol                              0x2B80E8
    #define storage_send_device_command_symbol               0x2B7C08
    #define storage_map_io_memory_symbol                     0x2BA388
    #define storage_unmap_io_memory_symbol                   0x2BA244
    #define storage_internal_get_device_object_symbol        0x2B76C0
    #define decrypt_func_symbol                              0x37F38
    #define lv1_call_99_wrapper_symbol                       0x53634
    #define modules_verification_symbol                      0x5D0A0
    #define prx_load_module_symbol                           0x8C7B4
    #define prx_start_module_symbol                          0x8B480
    #define prx_stop_module_symbol                           0x8C858
    #define prx_unload_module_symbol                         0x8B1B4
    #define prx_get_module_info_symbol                       0x8ABAC
    #define prx_get_module_list_symbol                       0x8AC2C
    #define extend_kstack_symbol                             0x731E0
    #define get_pseudo_random_number_symbol                  0x25DDE8
    #define syscall_table_symbol                             0x37A1B0
    #define syscall_call_offset                              0x2ABD90
    #define read_bdvd0_symbol                                0x1C224C
    #define read_bdvd1_symbol                                0x1C3E78
    #define read_bdvd2_symbol                                0x1D1000
    #define device_event_port_send_call                      0x2C44E8
    #define process_map_caller_call                          0x4D24
    #define fsloop_open_call                                 0x2D9B78
    #define fsloop_close_call                                0x2D9BC8
    #define fsloop_read_call                                 0x2D9C08
    #define io_rtoc_entry_1                                 -0x48
    #define io_sub_rtoc_entry_1                             -0x7EA0
    #define decrypt_rtoc_entry_2                            -0x65A0
    #define storage_rtoc_entry_1                             0x2328
    #define device_event_rtoc_entry_1                        0x26B0
    #define process_rtoc_entry_1                            -0x77A0
    #define patch_func2                                      0x5DA58
    #define patch_func2_offset                               0x2C
    #define user_thread_prio_patch                           0x21BAC
    #define user_thread_prio_patch2                          0x21BB8
    #define shutdown_patch_offset                            0xAB28
    #define shutdown_copy_params_call                        0xAB3C

    /* hash */
    #define EXPLORE_PLUGIN_HASH                         0xACF4AF2B000E71CF
    #define EXPLORE_CATEGORY_GAME_HASH                  0x9CB3C54A00057710
    #define GAME_EXT_PLUGIN_HASH                        0xE274AF7B0001D89E
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
    #define ps2tonet_patch                              0xC9A30
    #define ps2tonet_size_patch                         0xC9A24
    #define vmode_patch_offset                          0x446650
    #define psp_drm_patch1                              0x244068
    #define psp_drm_patch2                              0x244B00
    #define psp_drm_patch3                              0x244740
    #define psp_drm_patch4                              0x244F48
    #define psp_drm_patchA                              0x244184
    #define psp_drm_patchB                              0x244A1C
    #define psp_drm_patchC                              0x243BBC
    #define psp_drm_patchD                              0x24416C
    #define psp_drm_patchE                              0x244170
    #define psp_drm_patchF                              0x244B34
    #define psp_extra_drm_patch                         0x0

    /* explore_plugin */
    #define ps2_nonbw_offset                            0xDAFC0

    /* explore_category_game */
    #define ps2_nonbw_offset2                           0x75464

    /* game_ext_plugin */
    #define ps2_nonbw_offset3                           0x16788

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

    /* CEX */
    #define cex_ps2tonet_patch                          0xC44EC
    #define cex_ps2tonet_size_patch                     0xC44E0
    #define cex_vmode_patch_offset                      0x43EA78
    #define cex_psp_drm_patch1                          0x23C85C
    #define cex_psp_drm_patch2                          0x23D2F4
    #define cex_psp_drm_patch3                          0x23CF34
    #define cex_psp_drm_patch4                          0x23D73C
    #define cex_psp_drm_patchA                          0x23C978
    #define cex_psp_drm_patchB                          0x23D210
    #define cex_psp_drm_patchC                          0x23C3B0
    #define cex_psp_drm_patchD                          0x23C960
    #define cex_psp_drm_patchE                          0x23C964
    #define cex_psp_drm_patchF                          0x23D328
    #define cex_psp_extra_drm_patch                     0x0
#endif
