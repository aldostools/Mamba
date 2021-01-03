#if	defined(FIRMWARE_482D) || defined(FIRMWARE_483D) || defined(FIRMWARE_484D) || defined(FIRMWARE_485D) || defined(FIRMWARE_486D) || defined(FIRMWARE_487D)

	#if	defined(FIRMWARE_482D)
		#define	FIRMWARE_VERSION							0x482
	#elif defined(FIRMWARE_483D)
		#define	FIRMWARE_VERSION							0x483
	#elif defined(FIRMWARE_484D)
		#define	FIRMWARE_VERSION							0x484
	#elif defined(FIRMWARE_485D)
		#define	FIRMWARE_VERSION							0x485
	#elif defined(FIRMWARE_486D)
		#define	FIRMWARE_VERSION							0x486
	#elif defined(FIRMWARE_487D)
		#define	FIRMWARE_VERSION							0x487
	#endif
	#define	FIRMWARE_DEX									FIRMWARE_VERSION

	#ifdef PS3M_API
		#define	PS3MAPI_FW_TYPE								"DEX MAMBA"
		#define	PS3MAPI_IDPS_1								0x8000000000409A30ULL
		#define	PS3MAPI_IDPS_2								0x800000000049CAF4ULL
		#define	PS3MAPI_PSID								0x800000000049CB0CULL
	#endif

	/* lv2 */
	#define	TOC												0x3759C0
	#define	create_kernel_object_symbol						0x125F8
	#define	destroy_kernel_object_symbol					0x11F5C
	#define	destroy_shared_kernel_object_symbol				0x118D0
	#define	open_kernel_object_symbol						0x12C48
	#define	open_shared_kernel_object_symbol				0x12A58
	#define	close_kernel_object_handle_symbol				0x12078

	#define	alloc_symbol									0x681F4
	#define	dealloc_symbol									0x68630
	#define	copy_to_user_symbol								0xFEB4
	#define	copy_from_user_symbol							0x100D0
	#define	copy_to_process_symbol							0xFF6C
	#define	copy_from_process_symbol						0xFD7C
	#define process_read_memory_symbol						0x26E7E4
	#define process_write_memory_symbol						0x26E658
	#define	page_allocate_symbol							0x63D64
	#define	page_free_symbol								0x637C8
	#define	page_export_to_proc_symbol						0x63F00
	#define	page_unexport_from_proc_symbol					0x636BC
	#define	kernel_ea_to_lpar_addr_symbol					0x73C9C
	#define	process_ea_to_lpar_addr_ex_symbol				0x7B83C
	#define	set_pte_symbol									0x61D60
	#define	map_process_memory_symbol						0x7B348
	#define	panic_symbol									0x2754A0

	#define	memcpy_symbol									0x82A08
	#define	memset_symbol									0x51014
	#define	memcmp_symbol									0x50324
	#define	memchr_symbol									0x502D4
	#define	printf_symbol									0x278978
	#define	printfnull_symbol								0x27D400
	#define	sprintf_symbol									0x5243C
	#define	snprintf_symbol									0x523A8
	#define	strcpy_symbol									0x511C0
	#define	strncpy_symbol									0x51288
	#define	strlen_symbol									0x511E8
	#define	strcat_symbol									0x510F0
	#define	strcmp_symbol									0x5116C
	#define	strncmp_symbol									0x51214
	#define	strchr_symbol									0x51128
	#define	strrchr_symbol									0x512F8

	#define	spin_lock_irqsave_ex_symbol						0x275670
	#define	spin_unlock_irqrestore_ex_symbol				0x275644

	#define	create_process_common_symbol					0x272468
	#define	create_process_base_symbol						0x271B00
	#define	load_process_symbol								0x5004
	#define	process_kill_symbol								0x272268

	#define	ppu_thread_create_symbol						0x145FC
	#define	ppu_thread_exit_symbol							0x146B4
	#define	ppu_thread_join_symbol							0x14708
	#define	ppu_thread_delay_symbol							0x2A6E8
	#define	create_kernel_thread_symbol						0x267D0
	#define	create_user_thread_symbol						0x26F0C
	#define	create_user_thread2_symbol						0x26D30
	#define	start_thread_symbol								0x25868
	#define	run_thread_symbol								0x2502C
	#define	register_thread_symbol							0x26E270
	#define	allocate_user_stack_symbol						0x26EA58
	#define	deallocate_user_stack_symbol					0x26E9C0
	#define mmapper_flags_temp_patch						0x74C08

	#define	mutex_create_symbol								0x13C8C
	#define	mutex_destroy_symbol							0x13C24
	#define	mutex_lock_symbol								0x13C1C
	#define	mutex_lock_ex_symbol							0x1F60C
	#define	mutex_trylock_symbol							0x13C18
	#define	mutex_unlock_symbol								0x13C14

	#define	cond_create_symbol								0x13DF8
	#define	cond_destroy_symbol								0x13DA8
	#define	cond_wait_symbol								0x13DA0
	#define	cond_wait_ex_symbol								0x20BF8
	#define	cond_signal_symbol								0x13D7C
	#define	cond_signal_all_symbol							0x13D58

	#define	semaphore_initialize_symbol						0x34574
	#define	semaphore_wait_ex_symbol						0x3427C
	#define	semaphore_trywait_symbol						0x33E64
	#define	semaphore_post_ex_symbol						0x33FB0

	#define	event_port_create_symbol						0x136C8
	#define	event_port_destroy_symbol						0x13B30
	#define	event_port_connect_symbol						0x13BA8
	#define	event_port_disconnect_symbol					0x13AD4
	#define	event_port_send_symbol							0x136C0
	#define	event_port_send_ex_symbol						0x2D2C8

	#define	event_queue_create_symbol						0x139D0
	#define	event_queue_destroy_symbol						0x13958
	#define event_queue_drain_symbol						0x2D890
	#define	event_queue_receive_symbol						0x1379C
	#define	event_queue_tryreceive_symbol					0x13868
	#define event_queue_buff_not_recieved_symbol			0x52904
	#define self_threading_symbol							0x2ED50

	#define	cellFsOpen_symbol								0x2B2898
	#define	cellFsClose_symbol								0x2B2700
	#define	cellFsRead_symbol								0x2B283C
	#define	cellFsWrite_symbol								0x2B27A8
	#define	cellFsLseek_symbol								0x2B1FFC
	#define	cellFsStat_symbol								0x2B20B4
	#define	cellFsUtime_symbol								0x2B3A24
	#define	cellFsUnlink_internal_symbol					0x1A29D8
	#define cellFsRename_internal_symbol					0x19D490

	#define	cellFsUtilMount_symbol							0x2B1D70
	#define	cellFsUtilUmount_symbol							0x2B1D44
	#define	cellFsUtilNewfs_symbol							0x2B36BC

	#define	pathdup_from_user_symbol						0x2B7B5C
	#define	open_path_symbol								0x2B25D0
	#define	open_fs_object_symbol							0x190CFC
	#define	close_fs_object_symbol							0x18FC38
	#define	storage_get_device_info_symbol					0x28CA00
	#define	storage_get_device_config_symbol				0x28B08C
	#define	storage_open_symbol								0x28CC28 //0x28B624
	#define	storage_close_symbol							0x28B414
	#define	storage_read_symbol								0x28A390
	#define	storage_write_symbol							0x28A260
	#define	storage_send_device_command_symbol				0x289EB0
	#define	storage_map_io_memory_symbol					0x28C8AC
	#define	storage_unmap_io_memory_symbol					0x28C768
	#define	new_medium_listener_object_symbol				0x9CC34
	#define	delete_medium_listener_object_symbol			0x9E46C
	#define	set_medium_event_callbacks_symbol				0x9E7D0

	#define	cellUsbdRegisterLdd_symbol						0x266758
	#define	cellUsbdUnregisterLdd_symbol					0x266708
	#define	cellUsbdScanStaticDescriptor_symbol				0x267958
	#define	cellUsbdOpenPipe_symbol							0x267A08
	#define	cellUsbdClosePipe_symbol						0x2679B8
	#define	cellUsbdControlTransfer_symbol					0x2678BC
	#define	cellUsbdBulkTransfer_symbol						0x26783C

	#define	decrypt_func_symbol								0x38290
	#define	lv1_call_99_wrapper_symbol						0x52850
	#define	modules_verification_symbol						0x5C488
	#define	authenticate_program_segment_symbol				0x5E2E0

	#define	prx_load_module_symbol							0x8D308
	#define	prx_start_module_symbol							0x8BFD4
	#define	prx_stop_module_symbol							0x8D3AC
	#define	prx_unload_module_symbol						0x8BD08
	#define	prx_get_module_info_symbol						0x8B700
	#define	prx_get_module_id_by_address_symbol				0x8B610
	#define	prx_get_module_id_by_name_symbol				0x8B660
	#define	prx_get_module_list_symbol						0x8B780
	#define	load_module_by_fd_symbol						0x8C938
	#define	parse_sprx_symbol								0x8A62C
	#define	open_prx_object_symbol							0x835D4
	#define	close_prx_object_symbol							0x83EE4
	#define	lock_prx_mutex_symbol							0x8B5B8
	#define	unlock_prx_mutex_symbol							0x8B5C4

	#define	extend_kstack_symbol							0x73BF4

	#define	get_pseudo_random_number_symbol					0x22E65C
	#define	md5_reset_symbol								0x1681AC
	#define	md5_update_symbol								0x168C4C
	#define	md5_final_symbol								0x168DCC
	#define	ss_get_open_psid_symbol							0x230B44
	#define	update_mgr_read_eeprom_symbol					0x229F3C
	#define	update_mgr_write_eeprom_symbol					0x229E70
	#define	update_mgr_if_get_token_symbol					0x22B8B8

	#define	ss_params_get_update_status_symbol				0x5445C

	#define	syscall_table_symbol							0x38A4E8
	#define	syscall_call_offset								0x27DEE4

	#define	read_bdvd0_symbol								0x1AAACC
	#define	read_bdvd1_symbol								0x1AC6F8
	#define	read_bdvd2_symbol								0x1B98B0

	#define	storage_internal_get_device_object_symbol		0x289968

	#define	hid_mgr_read_usb_symbol							0x107F48
	#define	hid_mgr_read_bt_symbol							0x101E20

	#define	bt_set_controller_info_internal_symbol			0xF5E8C

	/* Calls, jumps	*/
	#define	device_event_port_send_call						0x296BFC

	#define	ss_pid_call_1									0x21974C

	#define	process_map_caller_call							0x4D24

	#define	read_module_header_call							0x834C8
	#define	read_module_body_call							0x671C
	#define	load_module_by_fd_call1							0x8D1A4

	#define	shutdown_copy_params_call						0xAB4C

	#define	fsloop_open_call								0x2B2A30
	#define	fsloop_close_call								0x2B2A80
	#define	fsloop_read_call								0x2B2AC0

	/* Patches */
	#define	shutdown_patch_offset							0xAB38
	#define	module_sdk_version_patch_offset					0x26D898
	#define	module_add_parameter_to_parse_sprxpatch_offset	0x8CA14

	/* Rtoc	entries	*/

	#define	io_rtoc_entry_1									 0x2EC0
	#define	io_sub_rtoc_entry_1								-0x7EA0
	#define	decrypt_rtoc_entry_2							-0x65C0
	#define	decrypter_data_entry							-0x7F10

	#define	storage_rtoc_entry_1							 0x22B0

	#define	device_event_rtoc_entry_1						 0x2638

	#define	time_rtoc_entry_1								-0x75E0
	#define	time_rtoc_entry_2								-0x75E8

	#define	thread_rtoc_entry_1								-0x7660

	#define	process_rtoc_entry_1							-0x77A0

	#define	bt_rtoc_entry_1									-0x3558

	#define	shutdown_copy_params_call						 0xAB4C

	/* Permissions */
	#define	permissions_func_symbol							0x3560
	#define	permissions_exception1							0x26DB0
	#define	permissions_exception2							0xC8A08
	#define	permissions_exception3							0x21F80

	/* Legacy patches with no names	yet	*/
	/* Kernel offsets */
	#define	patch_data1_offset								0x409A40
	#define	patch_func2										0x5D754
	#define	patch_func2_offset								0x2C
//	#define patch_func2_offset 								0x5D780
	#define	patch_func8_offset1								0x59E80
	#define	patch_func8_offset2								0x59FE4
	#define	patch_func9_offset								0x5E0C8
	#define	mem_base2										0x3D90
	#define	sm_get_temperature_symbol						0x269A84
	#define	sm_set_fan_policy_symbol						0x26ADE0
	#define	sm_get_fan_policy_symbol						0x268E18
	#define	ECDSA_1											0x5D794
	#define	ECDSA_2											0x2F46D4
	#define	fix_80010009									0x5E0B4
	#define	fix_8001003D									0x59F5C
	#define	fix_8001003E									0x5A020
	#define	PATCH_JUMP										0x59FD4
	#define	user_thread_prio_patch							0x21EAC
	#define	user_thread_prio_patch2							0x21EB8
	#define	lic_patch										0x59C00
	#define	ode_patch										0x22DAD0
	#define	ECDSA_FLAG										0x49CA80 //	TODO
	#define	sysmem_obj										0x49CC38 //	TODO
	#define	qa_eeprom_offset								0x48c0a	 //	TODO

	/* RAP Activation */
	#define	SHA1_init_symbol								0x2F0228
	#define	SHA1_update_symbol								0x2F0288
	#define	SHA1_final_symbol								0x2F043C
	#define	aescbccfb_dec_symbol							0x2EE71C
	#define	aescbccfb_enc_symbol							0x2EE4CC
	#define	get_path_by_fd_symbol							0x2B73F8

	// VSH is debuggable on	TM
	#define	vsh_patch										0x3B38

	/* vars	*/
	#define	thread_info_symbol								0x3A4A30

	/* LV2 POKE	*/
	#define	hash_checked_area								0x378960

	#define rsx_syscall_check								0x7e4c
	#define unk_func2_unregister_service					0x9e900
	#define unk_func3_unregister_service					0xa3394


	//////////////////// modulespatch.h	//////////////////////

	#define	VSH_HASH										0xb6b6d000002e6000
	#define	BDP_DISC_CHECK_PLUGIN_HASH						0x9940000000003000
	#define	EXPLORE_PLUGIN_HASH								0xc50d0000000e0000
	#define	EXPLORE_CATEGORY_GAME_HASH						0xde52d00000050000
	#define	PS1_EMU_HASH									0xcc28400000090000
	#define	PS1_NETEMU_HASH									0xcc284000000b0000
	#define	GAME_EXT_PLUGIN_HASH							0xcc26800000010000
	#define	LIBFS_EXTERNAL_HASH								0x05fd000000006000
	#define	NAS_PLUGIN_HASH									0xc50d000000020000
	#define	BDP_BDMV_HASH									0xcc28700000370000
	#define	BDP_BDVD_HASH									0xcc28d00000430000
	#define	DOWNLOAD_PLUGIN_HASH							0xcc26800000020000
	#define	AUTODOWNLOAD_PLUGIN_HASH						0x6a1af00000040000
	#define	PREMO_PLUGIN_HASH								0x1000000000010000
	#define	PREMO_GAME_PLUGIN_HASH							0x5bc3000000010000
	#define	BASIC_PLUGINS_HASH								0x55f4700000010000
	#define	PSP_EMULATOR_HASH								0xcc29b00000020000
	#define	PEMUCORELIB_HASH								0x40425000000c0000
	#define	EMULATOR_API_HASH								0x8409f00000010000
	#define	EMULATOR_DRM_HASH								0xbbb8800000005000
	#define	EMULATOR_DRM_DATA_HASH							0x2f3ab00000010000
	#define	LIBSYSUTIL_SAVEDATA_PSP_HASH					0x0dfdc00000003000
	#define	LIBAUDIO_HASH									0x2200600000002000

	/* download_plugin */
	#define	elf_patch1_download								0x42DC0	// 0x42e2c
	#define	elf_patch2_download								0x42DC8	// 0x42e34
	///	advanced download patches found	by Devil303
	#define	elf_patch3_download								0x4D628	// 0x4D708
	#define	elf_patch4_download								0x4E448	// 0x4E528
	#define	elf_patch5_download								0x4E468	// 0x4E548
	#define	elf_patch6_download								0x4E544	// 0x4E624

	/* autodownload_plugin */
	#define	elf_patch1_autodownload							0x824B8	// 0x82650
	#define	elf_patch2_autodownload							0x824C0	// 0x82658

	/*Cinavia patch*/
	#define	bdp_cinavia_patch								0x15ecd0
	#define	bdp_cinavia1_patch								0x15ecfc

	/* lv1 */
	#define	vsh_pos_in_ram									0x510000

	/* vsh */
	#define	vsh_text_size									0x6C0000
	#define	ps2tonet_patch									0xCA380
	#define	ps2tonet_size_patch								0xCA374
	#define	vmode_patch_offset								0x44ADD0
	#define	psp_drm_patch1									0x24A7E8
	#define	psp_drm_patch2									0x24B288
	#define	psp_drm_patch3									0x24AEC4
	#define	psp_drm_patch4									0x24B6D0
	#define	psp_drm_patchA									0x24A904
	#define	psp_drm_patchB									0x24B1A4
	#define	psp_drm_patchC									0x24A33C
	#define	psp_drm_patchD									0x24A8EC
	#define	psp_drm_patchE									0x24A8F0
	#define	psp_drm_patchF									0x24B2BC
	#define	psp_extra_drm_patch								0x24D318

	/* explore_plugin */
	#define	app_home_offset									0x2514C0 //	HAN	support	files has DEX version of this module
	#define	ps2_nonbw_offset								0xDDDC4
	#define	whatsnew_offset									0x26E9B0

	/* explore_category_game */
	#define	ps2_nonbw_offset2								0x68264

	/* bdp_disccheck_plugin	*/
	#define	dvd_video_region_check_offset					0x152C

	/* ps1_emu */
	#define	ps1_emu_get_region_offset						0x3E74

	/* ps1_netemu */
	#define	ps1_netemu_get_region_offset					0xA4E74

	/* game_ext_plugin */
	#define	sfo_check_offset								0x23DAC
	#define	ps2_nonbw_offset3								0x172F0
	#define	ps_region_error_offset							0x687C
	#define	remote_play_offset								0x5fc0

	/* premo_plugin	*/
	#define	pcremote_play_offset1							0xb6fc

	/* premo_game_plugin */
	#define	pcremote_play_offset2							0xc8fc

	/* psp_emulator	*/
	#define	psp_set_psp_mode_offset							0x1C18

	/* emulator_api	*/
	#define	psp_read										0x102D8
	#define	psp_read_header									0x1125C
	#define	psp_drm_patch5									0x11080
	#define	psp_drm_patch6									0x110B0
	#define	psp_drm_patch7									0x110C8
	#define	psp_drm_patch8									0x110CC
	#define	psp_drm_patch9									0x1120C
	#define	psp_drm_patch11									0x11210
	#define	psp_drm_patch12									0x11220
	#define	psp_product_id_patch1							0x11320
	#define	psp_product_id_patch3							0x115F8

	/* pemucorelib */
	#define	psp_eboot_dec_patch								0x5E6BC
	#define	psp_prx_patch									0x577D8
	#define	psp_savedata_bind_patch1						0x7A4BC
	#define	psp_savedata_bind_patch2						0x7A514
	#define	psp_savedata_bind_patch3						0x7A030
	#define	psp_extra_savedata_patch						0x87540
	#define	psp_prometheus_patch							0x12EA28
	#define	prx_patch_call_lr								0x5892C

	/* emulator_drm	*/
	#define	psp_drm_tag_overwrite							0x4C68
	#define	psp_drm_key_overwrite							(0x27600 - 0xBE80)

	/* libsysutil_savedata_psp */
	#define	psp_savedata_patch1								0x46CC
	#define	psp_savedata_patch2								0x46A4
	#define	psp_savedata_patch3								0x4504
	#define	psp_savedata_patch4								0x453C
	#define	psp_savedata_patch5								0x4550
	#define	psp_savedata_patch6								0x46B8

	/* nas_plugin */
	#define	patch1_nas										0x2EEF4	//
	#define	patch2_nas										0x2F058	//
	#define	patch3_nas										0x1FA0C	// Install ALL pkgs

	/* libfs */
	#define	aio_copy_root_offset							0xD658

	/* libaudio	*/
	//#define bt_usb_audio_offset				0xF80

	/* CEX */
	#define	cex_ps2tonet_patch								0xC4E34
	#define	cex_ps2tonet_size_patch							0xC4E28
	#define	cex_vmode_patch_offset							0x4431DC
	#define	cex_psp_drm_patch1								0x242FC0
	#define	cex_psp_drm_patch2								0x243A60
	#define	cex_psp_drm_patch3								0x24369C
	#define	cex_psp_drm_patch4								0x243EA8
	#define	cex_psp_drm_patchA								0x2430DC
	#define	cex_psp_drm_patchB								0x24397C
	#define	cex_psp_drm_patchC								0x242B14
	#define	cex_psp_drm_patchD								0x2430C4
	#define	cex_psp_drm_patchE								0x2430C8
	#define	cex_psp_drm_patchF								0x243A94
	#define	cex_psp_extra_drm_patch							0x245AF0
#endif
