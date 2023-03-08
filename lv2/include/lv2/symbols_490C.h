#if defined(FIRMWARE_490C)
    #define FIRMWARE_VERSION                             0x490
    #define FIRMWARE_CEX                                 FIRMWARE_VERSION

    #ifdef PS3M_API
        #define PS3MAPI_FW_TYPE                              "CEX MAMBA"
        #define PS3MAPI_IDPS_1                               0x80000000003E2E30ULL //UNTOUCHED
        #define PS3MAPI_IDPS_2                               0x8000000000474AF4ULL //UNTOUCHED
        #define PS3MAPI_PSID                                 0x8000000000474B0CULL //UNTOUCHED
    #endif

    /* lv2 */
    #define TOC                                              0x34FBA0 //done
    #define open_shared_kernel_object_symbol                 0x1240C // bytes matched: 0x80  F821FF317C0802A6FB8100B0FBC100C0FBE100C8F80100E0789C84027CE03B78
    #define close_kernel_object_handle_symbol                0x11A2C // bytes matched: 0x44  F821FF517C0802A6FBA10098FBE100A8FB410080FB610088FB810090FBC100A0
    #define open_kernel_object_symbol                        0x125FC // bytes matched: 0x80  F821FF517C0802A6FBA10098FBC100A0FBE100A8789E8402789FC622789D0620
    #define alloc_symbol                                     0x64820 // bytes matched: 0x80  2C2300007C85237838C000007C641B784D820020E9229EC8E86900004BFFFEB8
    #define dealloc_symbol                                   0x64C5C // bytes matched: 0x80  E9229EC87C85237838C000007C641B78E86900004BFFFBD0F821FF717C0802A6
    #define copy_to_user_symbol                              0xF868 // bytes matched: 0x64  2C2500007C0802A6F821FF71FBA10078FBC10080FBE100887C7E1B78FB810070
    #define copy_from_user_symbol                            0xFA84 // bytes matched: 0x64  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
    #define copy_to_process_symbol                           0xF920 // bytes matched: 0x80  F821FF317C0802A62C250000FB6100A83F608001FB210098FB8100B0FAE10088
    #define copy_from_process_symbol                         0xF730 // bytes matched: 0x80  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
    #define process_read_memory_symbol                       0x267EB4 // bytes matched: 0x80  F821FF517C0802A62C250000FBE100A83FE08001FB610088FB810090FBA10098
    #define process_write_memory_symbol                      0x267D28 // bytes matched: 0x80  F821FF517C0802A62C250000FBE100A83FE08001FB410080FB610088FB810090
    #define page_allocate_symbol                             0x60390 // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
    #define page_free_symbol                                 0x5FDF4 // bytes matched: 0x80  E9629C987C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B78
    #define page_export_to_proc_symbol                       0x6052C // bytes matched: 0x80  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
    #define page_unexport_from_proc_symbol                   0x5FCE8 // bytes matched: 0x80  E8630030480110882BA3003C7C0802A6F821FF91F80100807C8B23787C601B78
    #define kernel_ea_to_lpar_addr_symbol                    0x70148 // bytes matched: 0x80  E922A1787C0802A6F821FF51F80100C0FBC100A0FB610088EBC900007C9B2378
    #define map_process_memory_symbol                        0x77268 // bytes matched: 0x7C  7D800026F821FEE1FAC100D07CF63B78FB810100EB82A3A8FB0100E07C781B78
    #define memcpy_symbol                                    0x7E928 // bytes matched: 0x80  2BA500077C6B1B78419D002C2C2500007C691B784D8200207CA903A688040000
    #define memset_symbol                                    0x4D668 // bytes matched: 0x80  2BA500177C6A1B78419D00242FA500004D9E00207C8023787CA903A6980A0000
    #define memcmp_symbol                                    0x4C978 // bytes matched: 0x80  38A500017CA903A642400030880300003863000189240000388400017F890000
    #define printf_symbol                                    0x2706A0 // bytes matched: 0x60  F821FF517C0802A6FB610088EB6219C8FBA100987C7D1B787F63DB78F8E10100
    #define printfnull_symbol                                0x275114 // bytes matched: 0x24  386000004E800020F821FF717C0802A6FB810070FBA100787C9C23787C7D1B78
    #define sprintf_symbol                                   0x4EA90 // bytes matched: 0x80  F821FF817C0802A6F8A100C0F8010090380100C0E8A295A8F8C100C8F8610078
    #define snprintf_symbol                                  0x4E9FC // bytes matched: 0x80  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
    #define strcpy_symbol                                    0x4D814 // bytes matched: 0x80  880400002F800000980300004D9E00207C691B788C0400012F8000009C090001
    #define strncpy_symbol                                   0x4D8DC // bytes matched: 0x80  2C2500004D820020880400007C6B1B78394000002F80000098030000419E0034
    #define strlen_symbol                                    0x4D83C // bytes matched: 0x80  7C691B7838600000880900002F8000004D9E00207D234B788C0300012F800000
    #define strcat_symbol                                    0x4D744 // bytes matched: 0x80  880300007C691B782F800000419E00108C0900012F800000409EFFF888040000
    #define strcmp_symbol                                    0x4D7C0 // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
    #define strncmp_symbol                                   0x4D868 // bytes matched: 0x80  2C2500004182005089640000892300005560063E7F895800409E00482F800000
    #define strchr_symbol                                    0x4D77C // bytes matched: 0x80  880300002F800000419E00247F802000409E000C48000024419A00208C030001
    #define strrchr_symbol                                   0x4D94C // bytes matched: 0x80  392000004800000C38630001419A0020880300007F8020002F000000409EFFEC
    #define spin_lock_irqsave_ex_symbol                      0x26D78C // bytes matched: 0x80  7D0000A6550004202FA00000419E006C380000027C0101643D60ABAD616BCAFE
    #define spin_unlock_irqrestore_ex_symbol                 0x26D760 // bytes matched: 0x80  7C2004AC2F850000380000003920000090030000409E000C7C8101644E800020
    #define load_process_symbol                              0x5004 // bytes matched: 0x80  7D800026F821FF11FAC100A0FB6100C8FB8100D07C7B1B787CB62B787C9C2378
    #define ppu_thread_create_symbol                         0x13EC4 // bytes matched: 0x80  7D800026F821FF81FBC10070FBE100787C7E1B787CDF3378918100887C0802A6
    #define ppu_thread_exit_symbol                           0x13F7C // bytes matched: 0x44  F821FF817C0802A6FBE10078F80100907C7F1B78480122598003009054000462
    #define ppu_thread_join_symbol                           0x13FD0 // bytes matched: 0x80  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
    #define ppu_thread_delay_symbol                          0x287A0 // bytes matched: 0x64  F821FF017C0802A6FAC100B0FAE100B8FB6100D8FBA100E8FBC100F0FB0100C0
    #define create_user_thread2_symbol                       0x2507C // bytes matched: 0x80  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
    #define start_thread_symbol                              0x23D48 // bytes matched: 0x80  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
    #define run_thread_symbol                                0x23578 // bytes matched: 0x30  7C641B78E863004848002EB0F821FF717C0802A6FBC100807C7E1B78FBA10078
    #define register_thread_symbol                           0x267940 // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
    #define allocate_user_stack_symbol                       0x268128 // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
    #define mmapper_flags_temp_patch                         0x70F74 // bytes matched: 0x80  3B8040004800488957E0035A2FA000007C691B78409E000857FCE4202F890010
    #define mutex_create_symbol                              0x13638 // bytes matched: 0x80  2F8500207C0802A6F821FF71FBA10078FBC10080FBE10088F80100A07CBF2B78
    #define mutex_destroy_symbol                             0x135D0 // bytes matched: 0x80  F821FF817C0802A6FBE10078F80100907C7F1B78480092352FA300003C008001
    #define mutex_lock_symbol                                0x135C8 // bytes matched: 0x80  38A000004800A58CF821FF817C0802A6FBE10078F80100907C7F1B7848009235
    #define mutex_unlock_symbol                              0x135C0 // bytes matched: 0x80  48009CD44800990C38A000004800A58CF821FF817C0802A6FBE10078F8010090
    #define event_port_create_symbol                         0x13074 // bytes matched: 0x80  F821FF717C0802A6FBA10078FBC1008038A000007C7E1B787C9D237838600020
    #define event_port_destroy_symbol                        0x134DC // bytes matched: 0x80  F821FF717C0802A6FBC10080EBC2859038800000F80100A0FBA1007838A00000
    #define event_port_connect_symbol                        0x13554 // bytes matched: 0x80  F821FF617C0802A6FB610078EB62859038A00000F80100B0FB810080FBA10088
    #define event_port_disconnect_symbol                     0x13480 // bytes matched: 0x80  F821FF717C0802A6FB810070EB82859038800000F80100A0FBA1007838A00000
    #define event_port_send_symbol                           0x1306C // bytes matched: 0x80  38E0000148018190F821FF717C0802A6FBA10078FBC1008038A000007C7E1B78
    #define event_queue_create_symbol                        0x1337C // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B03806FFFF3FE080012B80007E3804FFFF
    #define event_queue_destroy_symbol                       0x13304 // bytes matched: 0x80  F821FF717C0802A6FBC10080EBC2859038800000F80100A0FBA1007838A00000
    #define event_queue_receive_symbol                       0x13148 // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B0812300883FE08001380000002F890001
    #define cellFsOpen_symbol                                0x2978F4 // bytes matched: 0x54  F821FF517C0802A6FB010070FB610088FBA10098FBC100A07C7D1B78EBC225B0
    #define cellFsClose_symbol                               0x29775C // bytes matched: 0x1C  F821FF617C0802A6FBC10090EBC225B0FBA10088F80100B07C7D1B78
    #define cellFsRead_symbol                                0x297898 // bytes matched: 0x34  2C2600007C0802A63D208001F821FF71FBE10080F80100A07CDF33786129000D
    #define cellFsWrite_symbol                               0x297804 // bytes matched: 0x34  F821FF517C0802A6FBC100A0EBC225B0FB410080FB6100887CDA33787CBB2B78
    #define cellFsLseek_symbol                               0x296E8C // bytes matched: 0x34  F821FF517C0802A6FBC100A0EBC225B0FB410080FB6100887CDA33787C9B2378
    #define cellFsMkdir_symbol                               0x299094 // bytes matched: 0x38  F821FF617C0802A6FB610078FBA10088FBC100907C7D1B78EBC225B07C9B2378
    #define cellFsStat_symbol                                0x297110
    #define cellFsUnlink_internal_symbol                     0x19C644 // bytes matched: 0x80  F821FEF17C0802A62C240000FBE101083FE08001FB8100F0FBA100F8FBC10100
    #define cellFsRename_internal_symbol                     0x1970FC // bytes matched: 0x80  7D8000262C240000F821FF11FB6100C8FB8100D0FBC100E0FBE100E8FAC100A0
    #define cellFsUtilMount_symbol                           0x296C6C // bytes matched: 0x80  F821FED17C0802A6FBA101183BA10080FAE100E8FBC101207C972378EBC225B0
    #define cellFsUtilUmount_symbol                          0x296C40 // bytes matched: 0x28  FBC1FFF0EBC225B07C8023787CA62B787C641B787C05037838E00000E93E80B0
    #define pathdup_from_user_symbol                         0x29C8D8 // bytes matched: 0x40  F821FF517C0802A6FB210078FB410080FBC100A07C7A1B78EBC225B87C992378
    #define open_path_symbol                                 0x29762C // bytes matched: 0x28  F821FF617C0802A6FB810080FBA10088FBE10098FB410070FB610078F80100B0
    #define open_fs_object_symbol                            0x18A968 // bytes matched: 0x58  7D800026F821FF31FBC100C0EBC2FD98FB010090FB210098FB4100A0FB6100A8
    #define close_fs_object_symbol                           0x1898A4 // bytes matched: 0x80  7C83237838A00000388000004BFDE180E80300F82FA000004D9E002038000000
    #define storage_get_device_info_symbol                   0x279AF4 // bytes matched: 0x38  E9221DD87C0802A6F821FF71F80100A0FBE10088F86100C0EBE90000FB810070
    #define storage_open_symbol                              0x279504 // bytes matched: 0x44  E9221DD87C0802A6F821FF11F8010100FBA100D8F8610120EBA90000FB4100C0
    #define storage_close_symbol                             0x2792F4 // bytes matched: 0x3C  E9221DD87C0802A6F821FF51F80100C0FBE100A8FB810090EBE900007C7C1B78
    #define storage_read_symbol                              0x278864 // bytes matched: 0x80  F821FF017C0802A6FBE100F83BE10070FBA100E8787D00207FE3FB78F8010110
    #define storage_send_device_command_symbol               0x2783F0 // bytes matched: 0x80  E9621DD87C0802A6F821FEF1F8010120FBE101087C7F1B78E86B0000FBA100F8
    #define storage_map_io_memory_symbol                     0x2799B0 // bytes matched: 0x3C  E9221DD87C0802A6F821FF61F80100B0FBE10098FB810080EBE900007C9C2378
    #define storage_unmap_io_memory_symbol                   0x27987C // bytes matched: 0x3C  E9221DD87C0802A6F821FF71F80100A0FBE10088FB810070EBE900007C9C2378
    #define storage_internal_get_device_object_symbol        0x277EA8 // bytes matched: 0x80  F821FF717C0802A6FBA10078F80100A0E80300007CBD2B78FBC100802FA00000
    #define decrypt_func_symbol                              0x3496C // bytes matched: 0x64  F821FF717C0802A6FB810070FBA100787C7C1B787C9D2378F80100A04BFFFF95
    #define lv1_call_99_wrapper_symbol                       0x4EEA4 // bytes matched: 0x64  F821FF717C0802A6FBA100787C7D1B78FB810070386300807C9C2378F80100A0
    #define modules_verification_symbol                      0x58AB4 // bytes matched: 0x80  3884FFFA7C0802A6F821FF912B840036F8010080419D00FCE962991878891788
    #define prx_load_module_symbol                           0x88C00 // bytes matched: 0x80  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
    #define prx_start_module_symbol                          0x878CC // bytes matched: 0x80  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
    #define prx_stop_module_symbol                           0x88CA4 // bytes matched: 0x80  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
    #define prx_unload_module_symbol                         0x87600 // bytes matched: 0x80  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
    #define prx_get_module_info_symbol                       0x87088 // bytes matched: 0x80  F821FF517C0802A6FB210078FB410080FB610088FB810090FBA100987CBB2B78
    #define prx_get_module_list_symbol                       0x87108 // bytes matched: 0x80  F821FF517C0802A6FB010070FB210078FB410080FB610088FB810090FBA10098
    #define extend_kstack_symbol                             0x700A0 // bytes matched: 0x44  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B784BFB6131E922A138
    #define get_pseudo_random_number_symbol                  0x228178 // bytes matched: 0x48  7C601B78E86203A07C8523787C04037848000404480001E4F821FF717C0802A6
    #define syscall_table_symbol                             0x363BE0 //done
    #define syscall_call_offset                              0x275BF8 // bytes matched: 0x34  4E80002138210070F821FFB1F8610008F8810010F8A10018F8C10020F8E10028
    #define read_bdvd0_symbol                                0x1A4614 // bytes matched: 0x80  F821FEB17C0802A6FB0101107C781B78F8010160F9C100C0FBC101407C8E2378
    #define read_bdvd1_symbol                                0x1A6240 // bytes matched: 0x80  F821FF317C0802A6FB8100B0F80100E0EB8300207CA02B78FAE100882FBC0000
    #define read_bdvd2_symbol                                0x1B33F8 // bytes matched: 0x80  F821FF517C0802A6FBE100A8F80100C07C7F1B78E8630090FB610088FB810090
    #define device_event_port_send_call                      0x282060 // bytes matched: 0x3C*  F821FF617C0802A6FBC10090F80100B0FBE100987C7E1B78E86300D87C9F2378
    #define process_map_caller_call                          0x4D24 // bytes matched: 0x10*  2F8300007C7D1B78419EFF1C807B0000
    #define fsloop_open_call                                 0x297A8C // bytes matched: 0x80  4BFFFE697C6307B44BFFFFC08063000880AA00187C6307B4E8CA00207CA507B4
    #define fsloop_close_call                                0x297ADC // bytes matched: 0x80  4BFFFC817C6307B44BFFFF7080630008E8CA00207C6307B4E88A0010E8AA0018
    #define fsloop_read_call                                 0x297B1C // bytes matched: 0x60  4BFFFD7D7C6307B44BFFFF30F821FF317C0802A6FB010090FB6100A8FBA100B8
    #define io_rtoc_entry_1                                  0x25B8 //found at 0x299A82 25B8E97E8038EBC1FFF0F9630000
    #define io_sub_rtoc_entry_1                             -0x7EA0 //found at 0x164B7E 8160E97E8168EB9E8140EBBE8170
    #define decrypt_rtoc_entry_2                            -0x66A0 //found at 0x598AE 99604BFFBC25392000004BFFFFCC2C2400007C0802A6
    #define storage_rtoc_entry_1                             0x1DD8 //found at 0x277F76 1DD87C0802A6F821FF51F80100C0FBE100A87C9F23
    #define device_event_rtoc_entry_1                        0x2048 //found at 0x28204A 204878050620E8CA00387D052B78E92B0000
    #define process_rtoc_entry_1                            -0x7800 //found at 0x1A152 88003FC0800163DE0005E87D0000
    #define patch_func2                                      0x59D80 // bytes matched: 0x80  F821FF617C0802A6FBC100907C9E2378E862995838810070FBA10088FBE10098
    #define patch_func2_offset                               0x2C
    #define user_thread_prio_patch                           0x203F8 // bytes matched: 0x34  419DFF842B9E0BFF900100D0419D02587B8007A03FE080012FA0000363FF0009
    #define user_thread_prio_patch2                          0x20404 // bytes matched: 0x28  419D02587B8007A03FE080012FA0000363FF0009419EFF64FB4100B87D3042A6
    #define shutdown_patch_offset                            0xAAB8 // bytes matched: 0x14  600000044182FEFC7F83E3787F64DB787FC5F378
    #define shutdown_copy_params_call                        0xAACC // bytes matched: 0x18*  2F830000409E005C7FC6F3787FA3EB78388000017F65DB78

    #define module_sdk_version_patch_offset                  0x267170 // bytes matched: 0x2C  419D0008386000007C6307B44E800020800400047F804800409EFFEC80040008
    #define module_add_parameter_to_parse_sprxpatch_offset   0x8830C // bytes matched: 0x80  90030198FB4301A8FB4301A0934301B8FB4301C8FB4301C04BFFDC912F830000

    #define ECDSA_1                                          0x59dc4 //UNTOUCHED
    #define ECDSA_2                                          0x2d2b34 //UNTOUCHED
    #define fix_80010009                                     0x5a6e4 //UNTOUCHED
    #define fix_8001003D                                     0x5658C //UNTOUCHED
    #define fix_8001003E                                     0x56650 //UNTOUCHED
    #define patch_func8_offset1                              0x564AC // bytes matched: 0x38  7FE307B4EB410080EB6100887C0803A6EB810090EBA10098EBC100A0EBE100A8
    #define patch_func8_offset2                              0x56610 // bytes matched: 0x3C*  3FE0800163FF000F4BFFFF442F9B0000419E0028881C00602F800000419E001C
    #define patch_func9_offset                               0x5A6F4 // bytes matched: 0x80  419E00AC386100704BFF63B52F8300007C641B7840DE01D0880100702F8000FF
    #define mem_base2                                        0x3D90  // F821FEB17C0802A6FB8101307C9C2378388100D8FBE10148FBA10138FBC10140
    #define PATCH_JUMP                                       0x56600 // bytes matched: 0x10  2F840004409C0048E86298687C8407B4
    #define lic_patch                                        0x5622C // bytes matched: 0x80*  2F8300003BFC006C419E0060380000023BE00000901C006C4BFFFF382FA70000
    #define ode_patch                                        0x2275EC // bytes matched: 0x80  E86900007C6307B44E8000203C8010507C0802A6F821FF71788407C6FBE10088
    #define ECDSA_FLAG                                       0x474A80 //UNTOUCHED
    #define sysmem_obj                                       0x474C38 //UNTOUCHED
    #define qa_eeprom_offset                                 0x48c0a //UNTOUCHED

    #define sm_get_temperature_symbol                        0x2635A0 // bytes matched: 0x80  F821FF417C0802A6FB6100987CDB3378FB410090FBA100A87CBA2B787C9D2378
    #define sm_get_fan_policy_symbol                         0x262934 // bytes matched: 0x80  F821FF317C0802A6FB010090FB210098FB4100A0FBA100B87CBA2B787C9D2378
    #define sm_set_fan_policy_symbol                         0x26472C // bytes matched: 0x80  F821FF717C0802A639200008F80100A0380000109881008198A1008239600001
    #define sm_ring_buzzer_symbol                            0x263374 // bytes matched: 0x80  F821FF717C0802A639200008F80100A0380000109881008198A1008239600001

    #define sm_get_temperature_patch                         0xC6A4 // bytes matched: 0x38*  2F830000419EFF684BFFFF98F821FF517C0802A6FBC100A0FBE100A8FBA10098
    #define sm_get_fan_policy_patch                          0x9E38 // bytes matched: 0x78*  3B8100712F8300003B6100723B4100733BC100703D2000983C0080017BE40620
    #define sm_set_fan_policy_patch                          0xA334 // bytes matched: 0x54*  7BE406202F8300007BC506207BA606203C608001409E0024E80100A060630003

    #define md5_reset_symbol                                 0x161E18 // bytes matched: 0x80  3D2067453D60EFCD3D4098BA3C0010323900000061292301616BAB89614ADCFE
    #define md5_update_symbol                                0x1628B8 // bytes matched: 0x80  F821FF517C0802A654AB1838F80100C080030010FBC100A07D205A147C7E1B78
    #define md5_final_symbol                                 0x162A38 // bytes matched: 0x80  F821FF617C0802A6FBE100987C9F2378FBC100903BC10070FBA1008838A00008
    #define ss_get_open_psid_symbol                          0x22A660 // bytes matched: 0x80  F821FF717C0802A6FB810070FBA100787C9C23787C7D1B78F80100A0480000F5
    #define update_mgr_read_eeprom_symbol                    0x223A70 // bytes matched: 0x80  F821FF317C0802A6FBE100C83BE10070FB8100B0FBA100B87C7C1B787CBD2B78
    #define update_mgr_write_eeprom_symbol                   0x2239B8 // bytes matched: 0x80  F821FF217C0802A6FBE100D83BE10070FB6100B8FBA100C87C7B1B787CBD2B78
    #define update_mgr_if_get_token_symbol                   0x2253D4 // bytes matched: 0x80  F821FF017C0802A6FB4100D03B410070FBA100E87C7D1B787F43D378FB6100D8

    #define ss_params_get_update_status_symbol               0x50AB0 // bytes matched: 0x80  3CA070617C0802A63CC075703CE0737460A5726160C6646160E761742C230000

    #define SHA1_init_symbol                                 0x2CE67C // bytes matched: 0x80  3C0067453D80EFCD3CC098BA3CA010323C80C3D260092301618BAB8991230000
    #define SHA1_update_symbol                               0x2CE6DC // bytes matched: 0x80  2F8500007C0802A6F821FF71FBA100787C9D2378FBC100807C7E1B78FBE10088
    #define SHA1_final_symbol                                0x2CE890 // bytes matched: 0x80  F821FF717C0802A6F80100A08144001C2B8A003FFBC10080FBE100887C7E1B78

    #define aescbccfb_dec_symbol                             0x2CCB70 // bytes matched: 0x80  7D8000262E050000F821FDC17C0802A6FB2102087CB92B78FBA102287D1D4378
    #define aescbccfb_enc_symbol                             0x2CC920 // bytes matched: 0x80  7D8000262E050000F821FE517C0802A6FB6101887C7B1B78FBA101983860FFFE

    #define get_path_by_fd_symbol                            0x29C174 // bytes matched: 0x30  F821FF317C0802A6FB8100B0FBC100C0F80100E0EBC225B83800FFFF7C9C2378

    /* lv1 */
    #define vsh_pos_in_ram                              0x910000 //UNTOUCHED

    /* vsh */
    #define ps2tonet_patch                              0xC4E34 //UNTOUCHED
    #define ps2tonet_size_patch                         0xC4E28 //UNTOUCHED
    #define vmode_patch_offset                          0x4431DC //UNTOUCHED
    #define psp_drm_patch1                              0x242FC0 //UNTOUCHED
    #define psp_drm_patch2                              0x243A60 //UNTOUCHED
    #define psp_drm_patch3                              0x24369C //UNTOUCHED
    #define psp_drm_patch4                              0x243EA8 //UNTOUCHED
    #define psp_drm_patchA                              0x2430DC //UNTOUCHED
    #define psp_drm_patchB                              0x24397C //UNTOUCHED
    #define psp_drm_patchC                              0x242B14 //UNTOUCHED
    #define psp_drm_patchD                              0x2430C4 //UNTOUCHED
    #define psp_drm_patchE                              0x2430C8 //UNTOUCHED
    #define psp_drm_patchF                              0x243A94 //UNTOUCHED
    #define psp_extra_drm_patch                         0x245AF0 //UNTOUCHED

    /* LV2 POKE    */

    #define VSH_HASH                        0xb6b6d000002e3000
    #define EXPLORE_PLUGIN_HASH             0xc50d0000000e0000 //0xc50d0000000ec000
    #define EXPLORE_CATEGORY_GAME_HASH      0xde52d00000056000
    #define PS1_EMU_HASH                    0xcc2840000009b000
    #define PS1_NETEMU_HASH                 0xcc284000000be000
    #define GAME_EXT_PLUGIN_HASH            0xcc2680000001e000
    #define PSP_EMULATOR_HASH               0xcc29b00000023000
    #define PEMUCORELIB_HASH                0x40425000000c0000
    #define EMULATOR_API_HASH               0x8409f0000001b000
    #define EMULATOR_DRM_HASH               0xbbb8800000005000
    #define EMULATOR_DRM_DATA_HASH          0x2f3ab0000001b000
    #define BDP_DISC_CHECK_PLUGIN_HASH      0x9940000000003000
    #define LIBFS_EXTERNAL_HASH             0x05fd000000006000
    #define NAS_PLUGIN_HASH                 0xc50d000000020000
    #define BDP_BDMV_HASH                   0xcc28700000370000
    #define BDP_BDVD_HASH                   0xcc28d00000430000
    #define DOWNLOAD_PLUGIN_HASH            0xcc26800000020000
    #define AUTODOWNLOAD_PLUGIN_HASH        0x6a1af00000040000
    #define PREMO_PLUGIN_HASH               0x1000000000010000
    #define PREMO_GAME_PLUGIN_HASH          0x5bc3000000010000
    #define LIBSYSUTIL_SAVEDATA_PSP_HASH    0x0dfdc00000003000

    /* nas_plugin */
    #define patch1_nas                                   0x2eae4 //UNTOUCHED
    #define patch2_nas                                   0x2ec48 //UNTOUCHED
    #define patch3_nas                                   0x1F75C // Install ALL pkgs //UNTOUCHED

    /* download_plugin */
    #define elf_patch1_download                           0x42e2c //UNTOUCHED
    #define elf_patch2_download                           0x42e34 //UNTOUCHED
    /// advanced download patches found by Devil303
    #define elf_patch3_download                           0x4D708 //UNTOUCHED
    #define elf_patch4_download                           0x4E528 //UNTOUCHED
    #define elf_patch5_download                           0x4E548 //UNTOUCHED
    #define elf_patch6_download                           0x4E624 //UNTOUCHED

    /* autodownload_plugin */
    #define elf_patch1_autodownload                       0x82650 //UNTOUCHED
    #define elf_patch2_autodownload                       0x82658 //UNTOUCHED

    /*Cinavia patch*/
    #define bdp_cinavia_patch                             0x15ecd0 //UNTOUCHED
    #define bdp_cinavia1_patch                            0x15ecfc //UNTOUCHED

    /* explore_plugin */
    #define app_home_offset                               0x250810 //UNTOUCHED
    #define ps2_nonbw_offset                              0xDD9BC  //UNTOUCHED
    #define whatsnew_offset                               0x26DBA0

    /* explore_category_game */
    #define ps2_nonbw_offset2                             0x68324 //UNTOUCHED

    /* bdp_disccheck_plugin    */
    #define dvd_video_region_check_offset                 0x152C //UNTOUCHED

    /* ps1_emu */
    #define ps1_emu_get_region_offset                     0x3E74 //UNTOUCHED

    /* ps1_netemu */
    #define ps1_netemu_get_region_offset                  0xA4E74 //UNTOUCHED

    #define DO_PATCH_COBRA810

    /* game_ext_plugin */
    #define sfo_check_offset                              0x23B90 //UNTOUCHED
    #define ps2_nonbw_offset3                             0x17000 //UNTOUCHED
    #define ps_region_error_offset                        0x68C0 //UNTOUCHED
    #define remote_play_offset                            0x5fc0 //UNTOUCHED
    #define gameboot_animation                            0x5808 //UNTOUCHED

    /* premo_plugin    */
    #define pcremote_play_offset1                         0xb6fc //UNTOUCHED

    /* premo_game_plugin */
    #define pcremote_play_offset2                         0xc8fc //UNTOUCHED

    /* psp_emulator */
    #define psp_set_psp_mode_offset                       0x1C18 //UNTOUCHED

    /* emulator_api */
    #define psp_read                                     0x102D8 //UNTOUCHED
    #define psp_read_header                              0x1125C //UNTOUCHED
    #define psp_drm_patch5                               0x11080 //UNTOUCHED
    #define psp_drm_patch6                               0x110B0 //UNTOUCHED
    #define psp_drm_patch7                               0x110C8 //UNTOUCHED
    #define psp_drm_patch8                               0x110CC //UNTOUCHED
    #define psp_drm_patch9                               0x1120C //UNTOUCHED
    #define psp_drm_patch11                              0x11210 //UNTOUCHED
    #define psp_drm_patch12                              0x11220 //UNTOUCHED
    #define psp_product_id_patch1                        0x11320 //UNTOUCHED
    #define psp_product_id_patch3                        0x115F8 //UNTOUCHED

    /* pemucorelib */
    #define psp_eboot_dec_patch                          0x5E6BC //UNTOUCHED
    #define psp_prx_patch                                0x577D8 //UNTOUCHED
    #define psp_savedata_bind_patch1                     0x7A4BC //UNTOUCHED
    #define psp_savedata_bind_patch2                     0x7A514 //UNTOUCHED
    #define psp_savedata_bind_patch3                     0x7A030 //UNTOUCHED
    #define psp_extra_savedata_patch                     0x87540 //UNTOUCHED
    #define psp_prometheus_patch                         0x12EA28 //UNTOUCHED
    #define prx_patch_call_lr                            0x5892C //UNTOUCHED

    /* emulator_drm */
    #define psp_drm_tag_overwrite                        0x4C68 //UNTOUCHED
    #define psp_drm_key_overwrite                       (0x27600 - 0xBE80) //UNTOUCHED

    /* libsysutil_savedata_psp */
    #define psp_savedata_patch1                         0x46CC //UNTOUCHED
    #define psp_savedata_patch2                         0x46A4 //UNTOUCHED
    #define psp_savedata_patch3                         0x4504 //UNTOUCHED
    #define psp_savedata_patch4                         0x453C //UNTOUCHED
    #define psp_savedata_patch5                         0x4550 //UNTOUCHED
    #define psp_savedata_patch6                         0x46B8 //UNTOUCHED

    /* libfs */
    #define aio_copy_root_offset                        0xD658 //UNTOUCHED

    /* rebug */
    #define EXPLORE_PLUGIN_REBUG_HASH                   0xc50d0000000ec000 //UNTOUCHED
    #define EXPLORE_CATEGORY_GAME_REBUG_HASH            0xde52d00000056000 //UNTOUCHED
    #define GAME_EXT_PLUGIN_REBUG_HASH                  0xcc2680000001e000 //UNTOUCHED

    #define dex_ps2_nonbw_offset                        0xDDDC4 //UNTOUCHED
    #define dex_ps2_nonbw_offset2                       0x68264 //UNTOUCHED
    #define dex_ps2_nonbw_offset3                       0x172F0 //UNTOUCHED
    #define dex_ps2tonet_patch                          0xCA380 // bytes matched: 0x80  F8010080E9630040E80B00302FA000007C050378409E002CF80300E8E8690010
    #define dex_ps2tonet_size_patch                     0xCA374 // bytes matched: 0x80  F821FF917C0802A67C691B78F8010080E9630040E80B00302FA000007C050378
    #define dex_vmode_patch_offset                      0x44ADD0
    #define dex_psp_drm_patch1                          0x24A7E8 // bytes matched: 0x74***  F821FF817C0802A6E9420AD839200001F8010090E80A0000F801007838000000
    #define dex_psp_drm_patch2                          0x24B288 // bytes matched: 0x80  F8030010F8030018F8030020F8030030FBE30038FBC30040F803004898030050
    #define dex_psp_drm_patch3                          0x24AEC4 // bytes matched: 0x48  409E00443C6080016063000BE8010078E93C00007C004A79392000007C6307B4
    #define dex_psp_drm_patch4                          0x24B6D0 // bytes matched: 0x24  E9210078E80800007D29027938000000F803004840C20014E801009038210080
    #define dex_psp_drm_patchA                          0x24A904 // bytes matched: 0x80  41DE02287FC3F378E9620B403800000039400000901E0050F97E0000FBC30028
    #define dex_psp_drm_patchB                          0x24B1A4 // bytes matched: 0x28  7C004A793920000040C20050E80100A07FE3FB78EBC1008038800020EBE10088
    #define dex_psp_drm_patchC                          0x24A33C // bytes matched: 0x5C  2FA90000419E00247FA92000409E0010480000447FA44800419E003CE9290058
    #define dex_psp_drm_patchD                          0x24A8EC // bytes matched: 0x80****  E81F00087FA0F00041DE02287FC3F378E9620B403800000039400000901E0050
    #define dex_psp_drm_patchE                          0x24A8F0 // bytes matched: 0x80***  E81F00087FA0F00041DE02287FC3F378E9620B403800000039400000901E0050
    #define dex_psp_drm_patchF                          0x24B2BC // bytes matched: 0x80  419C014CE92C0038896C005088090002540006FE7C005B78980C005039030090
    #define dex_psp_extra_drm_patch                     0x24D318 // bytes matched: 0x80  F80100B0E81C0000F801007838000000880300802F800000FBA10088FBC10090

#endif
