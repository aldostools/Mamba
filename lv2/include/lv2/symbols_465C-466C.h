#if defined(FIRMWARE_465C) || defined(FIRMWARE_466C)

    #if defined(FIRMWARE_465C)
        #define FIRMWARE_VERSION                             0x465
    #elif defined(FIRMWARE_466C)
        #define FIRMWARE_VERSION                             0x466
    #endif
    #define FIRMWARE_CEX                                     FIRMWARE_VERSION

    #ifdef PS3M_API
        #define PS3MAPI_FW_TYPE                              "CEX MAMBA"
        #define PS3MAPI_IDPS_1                               0x80000000003E2BB0ULL
        #define PS3MAPI_IDPS_2                               0x8000000000474F1CULL
        #define PS3MAPI_PSID                                 0x8000000000474F34ULL
    #endif

    /* lv2 */
    #define TOC                                              0x34F960
    #define open_shared_kernel_object_symbol                 0x12410
    #define close_kernel_object_handle_symbol                0x11A30
    #define open_kernel_object_symbol                        0x12600
    #define alloc_symbol                                     0x6479C
    #define dealloc_symbol                                   0x64BD8
    #define copy_to_user_symbol                              0xF86C
    #define copy_from_user_symbol                            0xFA88
    #define copy_to_process_symbol                           0xF924
    #define copy_from_process_symbol                         0xF734
    #define page_allocate_symbol                             0x6030C
    #define page_free_symbol                                 0x5FD70
    #define page_export_to_proc_symbol                       0x604A8
    #define page_unexport_from_proc_symbol                   0x5FC64
    #define kernel_ea_to_lpar_addr_symbol                    0x700C4
    #define map_process_memory_symbol                        0x771E4
    #define memcpy_symbol                                    0x7E8A4
    #define memset_symbol                                    0x4D66C
    #define memcmp_symbol                                    0x4C97C
    #define printf_symbol                                    0x27933C
    #define printfnull_symbol                                0x27DDB0
    #define sprintf_symbol                                   0x4EA94
    #define snprintf_symbol                                  0x4EA00
    #define strcpy_symbol                                    0x4D818
    #define strncpy_symbol                                   0x4D8E0
    #define strlen_symbol                                    0x4D840
    #define strcat_symbol                                    0x4D748
    #define strcmp_symbol                                    0x4D7C4
    #define strncmp_symbol                                   0x4D86C
    #define strchr_symbol                                    0x4D780
    #define spin_lock_irqsave_ex_symbol                      0x276428
    #define spin_unlock_irqrestore_ex_symbol                 0x2763FC
    #define load_process_symbol                              0x5004
    #define ppu_thread_create_symbol                         0x13EC8
    #define ppu_thread_exit_symbol                           0x13F80
    #define ppu_thread_join_symbol                           0x13FD4
    #define ppu_thread_delay_symbol                          0x287A4
    #define create_user_thread2_symbol                       0x25080
    #define start_thread_symbol                              0x23D4C
    #define run_thread_symbol                                0x2357C
    #define register_thread_symbol                           0x2705DC
    #define allocate_user_stack_symbol                       0x270DC4
    #define mutex_create_symbol                              0x1363C
    #define mutex_destroy_symbol                             0x135D4
    #define mutex_lock_symbol                                0x135CC
    #define mutex_unlock_symbol                              0x135C4
    #define event_port_create_symbol                         0x13078
    #define event_port_destroy_symbol                        0x134E0
    #define event_port_connect_symbol                        0x13558
    #define event_port_disconnect_symbol                     0x13484
    #define event_port_send_symbol                           0x13070
    #define event_queue_create_symbol                        0x13380
    #define event_queue_destroy_symbol                       0x13308
    #define event_queue_receive_symbol                       0x1314C
    #define cellFsOpen_symbol                                0x2A0590
    #define cellFsClose_symbol                               0x2A03F8
    #define cellFsRead_symbol                                0x2A0534
    #define cellFsWrite_symbol                               0x2A04A0
    #define cellFsLseek_symbol                               0x29FB28
    #define cellFsStat_symbol                                0x29FDAC
    #define cellFsUnlink_internal_symbol                     0x19C4B4
    #define cellFsUtilMount_symbol                           0x29F908
    #define cellFsUtilUmount_symbol                          0x29F8DC
    #define pathdup_from_user_symbol                         0x1A23A8
    #define open_path_symbol                                 0x2A02C8
    #define open_fs_object_symbol                            0x18A7D8
    #define close_fs_object_symbol                           0x189714
    #define storage_get_device_info_symbol                   0x282790
    #define storage_open_symbol                              0x2821A0
    #define storage_close_symbol                             0x281F90
    #define storage_read_symbol                              0x281500
    #define storage_send_device_command_symbol               0x28108C
    #define storage_map_io_memory_symbol                     0x28264C
    #define storage_unmap_io_memory_symbol                   0x282518
    #define storage_internal_get_device_object_symbol        0x280B44
    #define decrypt_func_symbol                              0x34970
    #define lv1_call_99_wrapper_symbol                       0x4EEA8
    #define modules_verification_symbol                      0x58A4C
    #define prx_load_module_symbol                           0x88B7C
    #define prx_start_module_symbol                          0x87848
    #define prx_stop_module_symbol                           0x88C20
    #define prx_unload_module_symbol                         0x8757C
    #define prx_get_module_info_symbol                       0x87004
    #define prx_get_module_list_symbol                       0x87084
    #define extend_kstack_symbol                             0x7001C
    #define get_pseudo_random_number_symbol                  0x230E7C
    #define syscall_table_symbol                             0x363A18
    #define syscall_call_offset                              0x27E894
    #define read_bdvd0_symbol                                0x1AD318
    #define read_bdvd1_symbol                                0x1AEF44
    #define read_bdvd2_symbol                                0x1BC0FC
    #define device_event_port_send_call                      0x28ACFC
    #define process_map_caller_call                          0x4D24
    #define fsloop_open_call                                 0x2A0728
    #define fsloop_close_call                                0x2A0778
    #define fsloop_read_call                                 0x2A07B8
    #define io_rtoc_entry_1                                 -0x1F0
    #define io_sub_rtoc_entry_1                             -0x7EA0
    #define decrypt_rtoc_entry_2                            -0x66A0
    #define storage_rtoc_entry_1                             0x1DD8
    #define device_event_rtoc_entry_1                        0x2048
    #define process_rtoc_entry_1                            -0x7800
    #define patch_func2                                      0x59CFC
    #define patch_func2_offset                               0x2C
    #define user_thread_prio_patch                           0x203FC
    #define user_thread_prio_patch2                          0x20408
    #define shutdown_patch_offset                            0xAAB8
    #define shutdown_copy_params_call                        0xAACC

    #define ECDSA_1											0x59dc4
    #define ECDSA_2											0x2d2b34
    #define fix_80010009									0x5a6e4
    #define fix_8001003D									0x5658C
    #define fix_8001003E									0x56650
    #define patch_func8_offset1 							0x564B0
    #define patch_func8_offset2 							0x56614
    #define patch_func9_offset 								0x5A6F8
    #define mem_base2										0x3D90
    #define PATCH_JUMP										0x56604
    #define lic_patch										0x56230
    #define ode_patch										0x2275F4
    #define ECDSA_FLAG										0x474A80

    #define qa_eeprom_offset								0x48c0a

    #define sm_get_temperature_symbol						0x2635A8
    #define sm_get_fan_policy_symbol						0x26293C
    #define sm_set_fan_policy_symbol						0x264734
    #define sysmem_obj										0x474C38

//  #define get_pseudo_random_number_symbol					0x228180
    #define md5_reset_symbol								0x161E20
    #define md5_update_symbol								0x1628C0
    #define md5_final_symbol								0x162A40
    #define ss_get_open_psid_symbol							0x22A668
    #define update_mgr_read_eeprom_symbol					0x223A78
    #define update_mgr_write_eeprom_symbol					0x2239C0
    #define update_mgr_if_get_token_symbol					0x2253DC

    #define ss_params_get_update_status_symbol				0x50AB4

    #define SHA1_init_symbol								0x2ce688
    #define SHA1_update_symbol								0x2ce6e8
    #define SHA1_final_symbol								0x2ce89c

    #define aescbccfb_dec_symbol							0x2ccb7c
    #define aescbccfb_enc_symbol							0x2cc92c

    #define get_path_by_fd_symbol							0x29c180

    /* hash */
    #define EXPLORE_PLUGIN_HASH                         0xACF4AF2B000EC8C7
    #define EXPLORE_CATEGORY_GAME_HASH                  0x9CB322B600056E97
    #define GAME_EXT_PLUGIN_HASH                        0xE274AF7B0001E76A
    #define LIBFS_EXTERNAL_HASH                         0x5BC7BCE800006477
    #define PSP_EMULATOR_HASH                           0x7BE641F500023794
    #define PEMUCORELIB_HASH                            0xF349A563000C0D66
    #define EMULATOR_API_HASH                           0xA9F5B37A0001BB3C
    #define EMULATOR_DRM_HASH                           0xA324DC4A00005399
    #define EMULATOR_DRM_DATA_HASH                      0x75C390860001B75F
    #define LIBSYSUTIL_SAVEDATA_PSP_HASH                0x57BBC3B800003212

    /* lv1 */
    #define vsh_pos_in_ram                              0x910000

    /* vsh */
    #define ps2tonet_patch                              0xC4C24
    #define ps2tonet_size_patch                         0xC4C18
    #define vmode_patch_offset                          0x444E28
    #define psp_drm_patch1                              0x241E84
    #define psp_drm_patch2                              0x242924
    #define psp_drm_patch3                              0x242560
    #define psp_drm_patch4                              0x242D6C
    #define psp_drm_patchA                              0x241FA0
    #define psp_drm_patchB                              0x242840
    #define psp_drm_patchC                              0x2419D8
    #define psp_drm_patchD                              0x241F88
    #define psp_drm_patchE                              0x241F8C
    #define psp_drm_patchF                              0x242958
    #define psp_extra_drm_patch                         0x0

    /* explore_plugin */
    #define ps2_nonbw_offset                            0xDD978

    /* explore_category_game */
    #define ps2_nonbw_offset2                           0x68354

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
    #define EXPLORE_PLUGIN_REBUG_HASH                   0xACF4AF2B000ED047
    #define EXPLORE_CATEGORY_GAME_REBUG_HASH            0x9CB337A200056FAD
    #define GAME_EXT_PLUGIN_REBUG_HASH                  0xE274AF7B0001E7C3
    #define dex_ps2_nonbw_offset                        0xDDD88
    #define dex_ps2_nonbw_offset2                       0x68294
    #define dex_ps2_nonbw_offset3                       0x172F4
    #define dex_ps2tonet_patch                          0xCA170
    #define dex_ps2tonet_size_patch                     0xCA164
    #define dex_vmode_patch_offset                      0x44CA1C
    #define dex_psp_drm_patch1                          0x2496AC
    #define dex_psp_drm_patch2                          0x24A14C
    #define dex_psp_drm_patch3                          0x249D88
    #define dex_psp_drm_patch4                          0x24A594
    #define dex_psp_drm_patchA                          0x2497C8
    #define dex_psp_drm_patchB                          0x24A068
    #define dex_psp_drm_patchC                          0x249200
    #define dex_psp_drm_patchD                          0x2497B0
    #define dex_psp_drm_patchE                          0x2497B4
    #define dex_psp_drm_patchF                          0x24A180
    #define dex_psp_extra_drm_patch                     0x0
#endif
