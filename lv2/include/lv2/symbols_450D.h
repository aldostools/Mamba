#ifdef FIRMWARE_450D

    #define FIRMWARE_VERSION                                 0x450
    #define FIRMWARE_DEX                                     FIRMWARE_VERSION

    #ifdef PS3M_API
        #define PS3MAPI_FW_TYPE                              "DEX MAMBA"
        #define PS3MAPI_IDPS_1                               0x8000000000402AB0ULL
        #define PS3MAPI_IDPS_2                               0x8000000000494F0CULL
        #define PS3MAPI_PSID                                 0x8000000000494F24ULL
    #endif

    /* lv2 */
    #define TOC                                              0x36EC40
    #define open_shared_kernel_object_symbol                 0x12AB8
    #define close_kernel_object_handle_symbol                0x120D8
    #define open_kernel_object_symbol                        0x12CA8
    #define alloc_symbol                                     0x66944
    #define dealloc_symbol                                   0x66D80
    #define copy_to_user_symbol                              0xFEA0
    #define copy_from_user_symbol                            0x100BC
    #define copy_to_process_symbol                           0xFF58
    #define copy_from_process_symbol                         0xFD68
    #define page_allocate_symbol                             0x624B4
    #define page_free_symbol                                 0x61F18
    #define page_export_to_proc_symbol                       0x62650
    #define page_unexport_from_proc_symbol                   0x61E0C
    #define kernel_ea_to_lpar_addr_symbol                    0x723B8
    #define map_process_memory_symbol                        0x79A64
    #define memcpy_symbol                                    0x81124
    #define memset_symbol                                    0x50E38
    #define memcmp_symbol                                    0x50148
    #define printf_symbol                                    0x280E08
    #define printfnull_symbol                                0x28588C
    #define sprintf_symbol                                   0x52260
    #define snprintf_symbol                                  0x521CC
    #define strcpy_symbol                                    0x50FE4
    #define strncpy_symbol                                   0x510AC
    #define strlen_symbol                                    0x5100C
    #define strcat_symbol                                    0x50F14
    #define strcmp_symbol                                    0x50F90
    #define strncmp_symbol                                   0x51038
    #define strchr_symbol                                    0x50F4C
    #define spin_lock_irqsave_ex_symbol                      0x27DB14
    #define spin_unlock_irqrestore_ex_symbol                 0x27DAE8
    #define load_process_symbol                              0x5004
    #define ppu_thread_create_symbol                         0x1465C
    #define ppu_thread_exit_symbol                           0x14714
    #define ppu_thread_join_symbol                           0x14768
    #define ppu_thread_delay_symbol                          0x2A50C
    #define create_user_thread2_symbol                       0x26B5C
    #define start_thread_symbol                              0x25694
    #define run_thread_symbol                                0x24E58
    #define register_thread_symbol                           0x27673C
    #define allocate_user_stack_symbol                       0x276F24
    #define mutex_create_symbol                              0x13CEC
    #define mutex_destroy_symbol                             0x13C84
    #define mutex_lock_symbol                                0x13C7C
    #define mutex_unlock_symbol                              0x13C74
    #define event_port_create_symbol                         0x13728
    #define event_port_destroy_symbol                        0x13B90
    #define event_port_connect_symbol                        0x13C08
    #define event_port_disconnect_symbol                     0x13B34
    #define event_port_send_symbol                           0x13720
    #define event_queue_create_symbol                        0x13A30
    #define event_queue_destroy_symbol                       0x139B8
    #define event_queue_receive_symbol                       0x137FC
    #define cellFsOpen_symbol                                0x2B84B0
    #define cellFsClose_symbol                               0x2B8318
    #define cellFsRead_symbol                                0x2B8454
    #define cellFsWrite_symbol                               0x2B83C0
    #define cellFsLseek_symbol                               0x2B7C14
    #define cellFsStat_symbol                                0x2B7CCC
    #define cellFsUnlink_internal_symbol                     0x1A2330
    #define cellFsUtilMount_symbol                           0x2B7988
    #define cellFsUtilUmount_symbol                          0x2B795C
    #define pathdup_from_user_symbol                         0x1A858C
    #define open_path_symbol                                 0x2B81E8
    #define open_fs_object_symbol                            0x190A68
    #define close_fs_object_symbol                           0x18F9A4
    #define storage_get_device_info_symbol                   0x294E8C
    #define storage_open_symbol                              0x2950B4
    #define storage_close_symbol                             0x2938A0
    #define storage_read_symbol                              0x29281C
    #define storage_send_device_command_symbol               0x29233C
    #define storage_map_io_memory_symbol                     0x294D38
    #define storage_unmap_io_memory_symbol                   0x294BF4
    #define storage_internal_get_device_object_symbol        0x291DF4
    #define decrypt_func_symbol                              0x380B4
    #define lv1_call_99_wrapper_symbol                       0x52674
    #define modules_verification_symbol                      0x5C1F4
    #define prx_load_module_symbol                           0x8B934
    #define prx_start_module_symbol                          0x8A600
    #define prx_stop_module_symbol                           0x8B9D8
    #define prx_unload_module_symbol                         0x8A334
    #define prx_get_module_info_symbol                       0x89D2C
    #define prx_get_module_list_symbol                       0x89DAC
    #define extend_kstack_symbol                             0x72310
    #define get_pseudo_random_number_symbol                  0x236E0C
    #define syscall_table_symbol                             0x383658
    #define syscall_call_offset                              0x286370
    #define read_bdvd0_symbol                                0x1B34FC
    #define read_bdvd1_symbol                                0x1B5128
    #define read_bdvd2_symbol                                0x1C22B0
    #define device_event_port_send_call                      0x29F088
    #define process_map_caller_call                          0x4D24
    #define fsloop_open_call                                 0x2B8648
    #define fsloop_close_call                                0x2B8698
    #define fsloop_read_call                                 0x2B86D8
    #define io_rtoc_entry_1                                 -0xB8
    #define io_sub_rtoc_entry_1                             -0x7EA0
    #define decrypt_rtoc_entry_2                            -0x65A8
    #define storage_rtoc_entry_1                             0x22A0
    #define device_event_rtoc_entry_1                        0x2628
    #define process_rtoc_entry_1                            -0x77A0
    #define patch_func2                                      0x5CBAC
    #define patch_func2_offset                               0x2C
    #define user_thread_prio_patch                           0x21CD8
    #define user_thread_prio_patch2                          0x21CE4
    #define shutdown_patch_offset                            0xAB28
    #define shutdown_copy_params_call                        0xAB3C

    /* hash */
    #define EXPLORE_PLUGIN_HASH                         0xACF4AF2B000ECDF3
    #define EXPLORE_CATEGORY_GAME_HASH                  0x9CB333060005707B
    #define GAME_EXT_PLUGIN_HASH                        0xE274AF7B0001E2BA
    #define LIBFS_EXTERNAL_HASH                         0x5BC7BCE800006477
    #define PSP_EMULATOR_HASH                           0x7BE641F500023793
    #define PEMUCORELIB_HASH                            0xF349A563000C0D00
    #define EMULATOR_API_HASH                           0xA9F5BC7A0001BAAC
    #define EMULATOR_DRM_HASH                           0xA324DC4A0000539C
    #define EMULATOR_DRM_DATA_HASH                      0x1D8D2DA00001B6E4
    #define LIBSYSUTIL_SAVEDATA_PSP_HASH                0x57BBC04800003207

    /* lv1 */
    #define vsh_pos_in_ram                              0x520000

    /* vsh */
    #define ps2tonet_patch                              0xCA18C
    #define ps2tonet_size_patch                         0xCA180
    #define vmode_patch_offset                          0x449B6C
    #define psp_drm_patch1                              0x247E78
    #define psp_drm_patch2                              0x248918
    #define psp_drm_patch3                              0x248554
    #define psp_drm_patch4                              0x248D60
    #define psp_drm_patchA                              0x247F94
    #define psp_drm_patchB                              0x248834
    #define psp_drm_patchC                              0x2479CC
    #define psp_drm_patchD                              0x247F7C
    #define psp_drm_patchE                              0x247F80
    #define psp_drm_patchF                              0x24894C
    #define psp_extra_drm_patch                         0x0

    /* explore_plugin */
    #define ps2_nonbw_offset                            0xDDD18

    /* explore_category_game */
    #define ps2_nonbw_offset2                           0x682F0

    /* game_ext_plugin */
    #define ps2_nonbw_offset3                           0x16B04

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

    /* CEX */
    #define cex_ps2tonet_patch                          0xC4C40
    #define cex_ps2tonet_size_patch                     0xC4C34
    #define cex_vmode_patch_offset                      0x441F78
    #define cex_psp_drm_patch1                          0x240650
    #define cex_psp_drm_patch2                          0x2410F0
    #define cex_psp_drm_patch3                          0x240D2C
    #define cex_psp_drm_patch4                          0x241538
    #define cex_psp_drm_patchA                          0x24076C
    #define cex_psp_drm_patchB                          0x24100C
    #define cex_psp_drm_patchC                          0x2401A4
    #define cex_psp_drm_patchD                          0x240754
    #define cex_psp_drm_patchE                          0x240758
    #define cex_psp_drm_patchF                          0x241124
    #define cex_psp_extra_drm_patch                     0x0
#endif
