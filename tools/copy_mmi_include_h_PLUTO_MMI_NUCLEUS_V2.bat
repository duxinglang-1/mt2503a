@echo off
copy /Y          .\kal\include\clib.h						 %1
copy /Y          .\kal\include\clib_list.h						 %1
copy /Y          .\kal\include\kal_general_types.h						 %1
copy /Y          .\hal\drv_def\drv_features_chip_select.h						 %1
copy /Y          .\hal\drv_def\drv_features_opengles.h						 %1
copy /Y          .\hal\drv_def\drv_features_mmsysmisc.h						 %1
copy /Y          .\hal\drv_def\drv_features_g2d.h						 %1
copy /Y          .\hal\drv_def\drv_features_mdp.h						 %1
copy /Y          .\hal\drv_def\drv_features_jpeg.h						 %1
copy /Y          .\hal\drv_def\drv_features_gif.h						 %1
copy /Y          .\hal\drv_def\drv_features_kbd.h						 %1
copy /Y          .\hal\drv_def\drv_features_png.h						 %1
copy /Y          .\config\include\app\app_task_config.h						 %1
copy /Y          .\config\include\hal\hal_task_config.h						 %1
copy /Y          .\config\include\hal\hisr_config_internal.h						 %1
copy /Y          .\config\include\hal\stack_config.h						 %1
copy /Y          .\interface\hal\drv_sw_def\drv_sw_features_g2d.h						 %1
copy /Y          .\interface\hal\drv_sw_def\drv_sw_features_gif.h						 %1
copy /Y          .\interface\hal\drv_sw_def\drv_sw_features_jpeg.h						 %1
copy /Y          .\interface\hal\drv_sw_def\drv_sw_features_kbd.h						 %1
copy /Y          .\interface\hal\drv_sw_def\drv_sw_features_mmsysmisc.h						 %1
copy /Y          .\interface\hal\drv_sw_def\drv_sw_features_opengles.h						 %1
copy /Y          .\interface\hal\drv_sw_def\drv_sw_features_png.h						 %1
copy /Y          .\config\include\app\user_msgid_app.h						 %1
copy /Y          .\config\include\hal\stack_msgs.h						 %1
copy /Y          .\config\include\hal\user_msgid_hal.h						 %1
copy /Y          .\fmr\inc\fmr_sap.h						 %1
copy /Y          .\interface\bt\bluetooth_sap.h						 %1
copy /Y          .\interface\fs\fs_sap.h						 %1
copy /Y          .\interface\gps\gps_sap.h						 %1
copy /Y          .\interface\gps\mnl_sap.h						 %1
copy /Y          .\interface\hal\camera\cal_sap.h						 %1
copy /Y          .\interface\hal\l1\hal_l1_sap.h						 %1
copy /Y          .\interface\hal\peripheral\drv_sap.h						 %1
copy /Y          .\interface\hal\security\certman_sap.h						 %1
copy /Y          .\interface\hal\video\mpl_sap.h						 %1
copy /Y          .\interface\hal\video\vcodec_sap.h						 %1
copy /Y          .\interface\hal\video\vcodec_v2_sap.h						 %1
copy /Y          .\interface\hal\video\vfile_sap.h						 %1
copy /Y          .\interface\hal\video\vsrc_sap.h						 %1
copy /Y          .\interface\inet_ps\dhcpd_sap.h						 %1
copy /Y          .\interface\inet_ps\dm_sap.h						 %1
copy /Y          .\interface\inet_ps\email_sap.h						 %1
copy /Y          .\interface\inet_ps\emlst_sap.h						 %1
copy /Y          .\interface\inet_ps\imps_sap.h						 %1
copy /Y          .\interface\inet_ps\iperf_sap.h						 %1
copy /Y          .\interface\inet_ps\rtsp_sap.h						 %1
copy /Y          .\interface\inet_ps\saf_sap.h						 %1
copy /Y          .\interface\inet_ps\sip_sap.h						 %1
copy /Y          .\interface\inet_ps\syncml_sap.h						 %1
copy /Y          .\interface\inet_ps\xdm_sap.h						 %1
copy /Y          .\interface\l1interface\sap\ft_sap.h						 %1
copy /Y          .\interface\l1interface\sap\l1_sap.h						 %1
copy /Y          .\interface\l1interface\sap\l1hisr_sap.h						 %1
copy /Y          .\interface\media\hal\med_hal_sap.h						 %1
copy /Y          .\interface\media\med_sap.h						 %1
copy /Y          .\interface\media\med_v_sap.h						 %1
copy /Y          .\interface\middleware\ircomm_sap.h						 %1
copy /Y          .\interface\middleware\irda_sap.h						 %1
copy /Y          .\interface\middleware\mexe_sap.h						 %1
copy /Y          .\interface\misc_ps\obex_sap.h						 %1
copy /Y          .\interface\misc_ps\udx_sap.h						 %1
copy /Y          .\interface\mmi\drmt_sap.h						 %1
copy /Y          .\interface\mmi\fmt_sap.h						 %1
copy /Y          .\interface\mmi\mmi_um_sap.h						 %1
copy /Y          .\interface\mmi\mmiapi_sap.h						 %1
copy /Y          .\interface\nfc\nfc_app_sap.h						 %1
copy /Y          .\interface\nfc\nfc_reader_sap.h						 %1
copy /Y          .\interface\nfc\nfc_sap.h						 %1
copy /Y          .\interface\nvram\nvram_sap.h						 %1
copy /Y          .\interface\os\sysservice_sap.h						 %1
copy /Y          .\interface\ps\sap\abm_sap.h						 %1
copy /Y          .\interface\ps\sap\dhcp_sap.h						 %1
copy /Y          .\interface\ps\sap\mmi_sap.h						 %1
copy /Y          .\interface\ps\sap\ps_public_l4_sap.h						 %1
copy /Y          .\interface\ps\sap\ps_public_ups_sap.h						 %1
copy /Y          .\interface\ps\sap\sim_public_sap.h						 %1
copy /Y          .\interface\ps\sap\soc_sap.h						 %1
copy /Y          .\interface\ps\sap\tcpip_sap.h						 %1
copy /Y          .\interface\security\certmanmmi_sap.h						 %1
copy /Y          .\interface\security\tls_sap.h						 %1
copy /Y          .\interface\wap\bam_sap.h						 %1
copy /Y          .\interface\wap\browser_sap.h						 %1
copy /Y          .\interface\wap\das_sap.h						 %1
copy /Y          .\interface\wap\mma_sap.h						 %1
copy /Y          .\interface\wap\mmc_sap.h						 %1
copy /Y          .\interface\wap\mms_adp_sap.h						 %1
copy /Y          .\interface\wap\mms_sap.h						 %1
copy /Y          .\interface\wap\pmg_sap.h						 %1
copy /Y          .\interface\wap\profile_sap.h						 %1
copy /Y          .\interface\wap\q03c_mms_v01_adp_sap.h						 %1
copy /Y          .\interface\wap\ua_sap.h						 %1
copy /Y          .\interface\wap\wap_adp_sap.h						 %1
copy /Y          .\interface\wap\wap_sap.h						 %1
copy /Y          .\interface\wap\wps_sap.h						 %1
copy /Y          .\interface\wifi\hostap_sap.h						 %1
copy /Y          .\interface\wifi\supc_sap.h						 %1
copy /Y          .\interface\wifi\wndrv_sap.h						 %1
copy /Y          .\interface\wmt\wmt_sap.h						 %1
copy /Y          .\j2me\interface\j2me_sap.h						 %1
copy /Y          .\kal\include\kal_public_defs.h						 %1
copy /Y          .\ps\interfaces\sap\cc_sap.h						 %1
copy /Y          .\ps\interfaces\sap\ciss_sap.h						 %1
copy /Y          .\ps\interfaces\sap\cmux_sap.h						 %1
copy /Y          .\ps\interfaces\sap\data_sap.h						 %1
copy /Y          .\ps\interfaces\sap\dt_sap.h						 %1
copy /Y          .\ps\interfaces\sap\em_sap.h						 %1
copy /Y          .\ps\interfaces\sap\ext_modem_sap.h						 %1
copy /Y          .\ps\interfaces\sap\l4_sap.h						 %1
copy /Y          .\ps\interfaces\sap\llc_sap.h						 %1
copy /Y          .\ps\interfaces\sap\mm_sap.h						 %1
copy /Y          .\ps\interfaces\sap\ndis_sap.h						 %1
copy /Y          .\ps\interfaces\sap\ppp_sap.h						 %1
copy /Y          .\ps\interfaces\sap\ratcm_sap.h						 %1
copy /Y          .\ps\interfaces\sap\ratdm_sap.h						 %1
copy /Y          .\ps\interfaces\sap\rr_sap.h						 %1
copy /Y          .\ps\interfaces\sap\sim_ps_sap.h						 %1
copy /Y          .\ps\interfaces\sap\sm_sap.h						 %1
copy /Y          .\ps\interfaces\sap\sms_sap.h						 %1
copy /Y          .\ps\interfaces\sap\sndcp_sap.h						 %1
copy /Y          .\ps\interfaces\sap\ups_sap.h						 %1
copy /Y          .\ps\l4\l4c\include\common\l4c_msg_hdlr_defs.h						 %1
copy /Y          .\rsva\interfaces\sap\rsva_sap.h						 %1
copy /Y          .\tst\include\tstsap.h						 %1
copy /Y          .\kal\include\kal_public_api.h						 %1
copy /Y          .\kal\include\kal_release.h						 %1
copy /Y          .\interface\browser\opera_browser_sap.h						 %1
copy /Y          .\interface\widget\widget_sap.h						 %1
copy /Y          .\interface\mmi\mtp_sap.h						 %1
copy /Y          .\interface\ps\sap\ps_public_vt_sap.h						 %1
copy /Y          .\interface\ul1interface\sap\ll1_sap.h						 %1
copy /Y          .\interface\ul1interface\sap\ul1_sap.h						 %1
copy /Y          .\interface\ul1interface\sap\ul1c_sap.h						 %1
copy /Y          .\interface\ul1interface\sap\ul1data_sap.h						 %1
copy /Y          .\interface\ul1interface\sap\ul1hisr_sap.h						 %1
copy /Y          .\interface\ul1interface\sap\ul1tst_sap.h						 %1
copy /Y          .\ps\interfaces\sap\vt_sap.h						 %1
copy /Y          .\uas\interfaces\sap\uas_gas_gemini_sap.h						 %1
copy /Y          .\uas\interfaces\sap\uas_gas_sap.h						 %1
copy /Y          .\uas\interfaces\sap\ul2_sap.h						 %1
copy /Y          .\uas\interfaces\sap\ul2d_sap.h						 %1
copy /Y          .\uas\interfaces\sap\urr_sap.h						 %1
copy /Y          .\kal\include\kal_trace.h						 %1
copy /Y          .\kal\adaptation\include\stack_ltlcom.h						 %1
copy /Y          .\kal\adaptation\include\app_ltlcom.h						 %1
copy /Y          .\hal\system\regbase\inc\reg_base.h						 %1
copy /Y          .\kal\include\kal_non_specific_general_types.h						 %1
copy /Y          .\interface\ps\sap\ps_public_supl_sap.h						 %1
copy /Y          .\ps\interfaces\sap\lcsp_sap.h						 %1
copy /Y          .\ps\interfaces\sap\supl_sap.h						 %1
copy /Y          .\ulcs\interfaces\sap\ulcs_sap.h						 %1
copy /Y          .\fs\common\include\fs_internal_def.h						 %1
copy /Y          .\fs\common\include\fs_iprot.h						 %1
copy /Y          .\interface\fs\fs_gprot.h						 %1
copy /Y          .\hal\drv_def\drv_features_isp.h						 %1
copy /Y          .\hal\drv_def\drv_features_adc.h						 %1
copy /Y          .\hal\drv_def\drv_features_rtc.h						 %1
copy /Y          .\hal\drv_def\drv_features_sim.h						 %1
copy /Y          .\hal\drv_def\drv_features_vcodec.h						 %1
copy /Y          .\hal\drv_def\drv_features_video.h						 %1
copy /Y          .\hal\drv_def\drv_features_rotator.h						 %1
copy /Y          .\hal\drv_def\drv_features_gpt.h						 %1
copy /Y          .\hal\drv_def\drv_features_resizer.h						 %1
copy /Y          .\hal\drv_def\drv_features_display.h						 %1
copy /Y          .\hal\drv_def\drv_features_gpio.h						 %1
copy /Y          .\hal\drv_def\drv_features.h						 %1
copy /Y          .\hal\drv_def\drv_features_accdet.h						 %1
copy /Y          .\hal\drv_def\drv_features_bmt.h						 %1
copy /Y          .\hal\drv_def\drv_features_f32k.h						 %1
copy /Y          .\hal\drv_def\drv_features_gcu.h						 %1
copy /Y          .\hal\drv_def\drv_features_hif.h						 %1
copy /Y          .\hal\drv_def\drv_features_i2c.h						 %1
copy /Y          .\hal\drv_def\drv_features_irda.h						 %1
copy /Y          .\hal\drv_def\drv_features_misc.h						 %1
copy /Y          .\hal\drv_def\drv_features_msdc.h						 %1
copy /Y          .\hal\drv_def\drv_features_pfc.h						 %1
copy /Y          .\hal\drv_def\drv_features_pwm.h						 %1
copy /Y          .\hal\drv_def\drv_features_spi.h						 %1
copy /Y          .\hal\drv_def\drv_features_stack_switch.h						 %1
copy /Y          .\hal\drv_def\drv_features_tp.h						 %1
copy /Y          .\hal\drv_def\drv_features_uart.h						 %1
copy /Y          .\hal\drv_def\drv_features_usb.h						 %1
copy /Y          .\hal\drv_def\drv_features_wdt.h						 %1
copy /Y          .\plutommi\mmi\inc\mmi_features.h						 %1
copy /Y          .\plutommi\mmi\inc\mmi_features_switch.h						 %1
copy /Y          .\plutommi\mmi\inc\mmi_features_type.h						 %1
copy /Y          .\interface\hal\peripheral\drv_comm.h						 %1
copy /Y          .\interface\hal\peripheral\dcl_gpt.h						 %1
copy /Y          .\interface\hal\connectivity\usb_driver\dcl_otg_drv.h						 %1
copy /Y          .\interface\hal\connectivity\usb_driver\dcl_usb_drv.h						 %1
copy /Y          .\interface\hal\connectivity\usb_driver\dcl_usb_hcd.h						 %1
copy /Y          .\interface\hal\peripheral\dcl.h						 %1
copy /Y          .\interface\hal\peripheral\dcl_adc.h						 %1
copy /Y          .\interface\hal\peripheral\dcl_aux.h						 %1
copy /Y          .\interface\hal\peripheral\dcl_bmt.h						 %1
copy /Y          .\interface\hal\peripheral\dcl_chr_det.h						 %1
copy /Y          .\interface\hal\peripheral\dcl_f32k_clk.h						 %1
copy /Y          .\interface\hal\peripheral\dcl_gpio.h						 %1
copy /Y          .\interface\hal\peripheral\dcl_i2c.h						 %1
copy /Y          .\interface\hal\peripheral\dcl_i2c_owner.h						 %1
copy /Y          .\interface\hal\peripheral\dcl_irda.h						 %1
copy /Y          .\interface\hal\peripheral\dcl_msdc.h						 %1
copy /Y          .\interface\hal\peripheral\dcl_pfc.h						 %1
copy /Y          .\interface\hal\peripheral\dcl_pmu.h						 %1
copy /Y          .\interface\hal\peripheral\dcl_pw.h						 %1
copy /Y          .\interface\hal\peripheral\dcl_pwm.h						 %1
copy /Y          .\interface\hal\peripheral\dcl_pxs.h						 %1
copy /Y          .\interface\hal\peripheral\dcl_rtc.h						 %1
copy /Y          .\interface\hal\peripheral\dcl_sim.h						 %1
copy /Y          .\interface\hal\peripheral\dcl_sts.h						 %1
copy /Y          .\interface\hal\peripheral\dcl_uart.h						 %1
copy /Y          .\interface\hal\peripheral\dcl_wdt.h						 %1
copy /Y          .\interface\hal\peripheral\dclh_kbd.h						 %1
copy /Y          .\interface\hal\peripheral\dcls_kbd.h						 %1
copy /Y          .\interface\nvram\nvram_enums.h						 %1
copy /Y          .\interface\nvram\nvram_defs.h						 %1
copy /Y          .\kal\stacklib\include\lcd_ip_cqueue.h						 %1
copy /Y          .\interface\ps\local_inc\mcd_l4_common.h						 %1
copy /Y          .\interface\fs\fs_type.h						 %1
copy /Y          .\kal\adaptation\include\stack_common.h						 %1
copy /Y          .\interface\ps\enum\ps_public_enum.h						 %1
copy /Y          .\interface\hal\drv_sw_def\drv_sw_features_mdp.h						 %1
copy /Y          .\interface\ps\enum\sim_public_enum.h						 %1
copy /Y          .\interface\wifi\wndrv_cnst.h						 %1
copy /Y          .\interface\hal\video\med_status.h						 %1
copy /Y          .\ps\interfaces\enum\sim_ps_enum.h						 %1
copy /Y          .\plutommi\mmi\\..\\..\\venusmmi\\app\\common\\interface\\..\..\pluto_variation\interface\vapp_package_res.h						 %1
copy /Y          .\plutommi\mmi\\..\\..\\venusmmi\\app\\common\\interface\\vapp_res.h						 %1
copy /Y          .\plutommi\mmi\inc\mmi_lib_res_range_def.h						 %1
copy /Y          .\plutommi\mmi\inc\mmi_pluto_res_range_def.h						 %1
copy /Y          .\plutommi\mmi\inc\mmi_res_range_def.h						 %1
copy /Y          .\interface\fs\fsal.h						 %1
copy /Y          .\plutommi\framework\interface\mmidatatype.h						 %1
copy /Y          .\interface\wifi\wndrv_ft_types.h						 %1
copy /Y          .\interface\ps\local_inc\ps_public_struct.h						 %1
copy /Y          .\hal\system\pdn\inc\drvpdn.h						 %1
copy /Y          .\hal\system\pdn\inc\pdn_def.h						 %1
copy /Y          .\hal\system\pdn\inc\pdn_hw_series.h						 %1
copy /Y          .\kal\adaptation\include\stack_types.h						 %1
copy /Y          .\config\include\hal\task_config.h						 %1
copy /Y          .\interface\hal\mm_comm\mmsys_pwrmgr.h						 %1
copy /Y          .\interface\hal\mm_comm\mmsys_pwrmgr_def.h						 %1
copy /Y          .\interface\hal\mm_comm\mm_power_ctrl.h						 %1
copy /Y          .\interface\ps\include\tcm_api.h						 %1
copy /Y          .\plutommi\mmi\inc\mmi_features_demo_proj_comm_switch.h						 %1
copy /Y          .\plutommi\mmi\inc\mmi_features_undef_all_lang_fte.h						 %1
copy /Y          .\kal\common\include\stack_timer.h						 %1
copy /Y          .\interface\hal\drv_sw_def\drv_sw_features_display.h						 %1
copy /Y          .\kal\stacklib\include\lcd.h						 %1
copy /Y          .\interface\ps\enum\ps_em_enum.h						 %1
copy /Y          .\interface\hal\display\lcd_if_manager.h						 %1
copy /Y          .\interface\hal\display\common\lcd_if_common.h						 %1
copy /Y          .\interface\hal\display\ddv1\lcd_if.h						 %1
copy /Y          .\hal\graphics\jpeg\common\inc\jpeg_mem_int.h						 %1
copy /Y          .\interface\hal\mdp\idp_mem_def.h						 %1
copy /Y          .\interface\media\hal\med_aud_hal_struct.h						 %1
copy /Y          .\hal\graphics\jpeg\common\inc\jpeg_mem_sw.h						 %1
copy /Y          .\interface\hal\graphics\jpeg_mem.h						 %1
copy /Y          .\ps\interfaces\enum\l3_inc_enums.h						 %1
copy /Y          .\kal\stacklib\include\lcd_lqueue.h						 %1
copy /Y          .\interface\ps\include\device.h						 %1
copy /Y          .\kal\stacklib\include\lcd_cqueue.h						 %1
copy /Y          .\plutommi\framework\gui\gui_inc\gui_config.h						 %1
copy /Y          .\plutommi\framework\gui\gui_inc\gui_switch.h						 %1
copy /Y          .\plutommi\framework\gdi\gdiinc\gdi_datatype.h						 %1
copy /Y          .\plutommi\framework\gdi\gdiinc\gdi_lcd_config.h						 %1
copy /Y          .\plutommi\framework\gdi\gdiinc\gdi_features.h						 %1
copy /Y          .\plutommi\framework\gdi\gdiinc\gdi_const.h						 %1
copy /Y          .\interface\hal\audio\l1audio.h						 %1
copy /Y          .\kal\include\kal_debug.h						 %1
copy /Y          .\kal\stacklib\include\lcd_dll.h						 %1
copy /Y          .\kal\stacklib\include\stacklib.h						 %1
copy /Y          .\kal\mlib\include\mlib_dll.h						 %1
copy /Y          .\kal\common\include\event_shed.h						 %1
copy /Y          .\plutommi\framework\gdi\gdiinc\gdi_imgdec.h						 %1
copy /Y          .\plutommi\framework\gdi\gdiinc\gdi_include.h						 %1
copy /Y          .\interface\ps\include\sim_public_api.h						 %1
copy /Y          .\config\include\hal\hisr_config.h						 %1
copy /Y          .\interface\ps\local_inc\em_public_struct.h						 %1
copy /Y          .\ps\interfaces\local_inc\em_struct.h						 %1
copy /Y          .\config\include\hal\syscomp_config.h						 %1
copy /Y          .\interface\hal\video\mpl_common.h						 %1
copy /Y          .\plutommi\mmi\inc\globalconstants.h						 %1
copy /Y          .\interface\fs\fs_errcode.h						 %1
copy /Y          .\interface\fs\fs_func.h						 %1
copy /Y          .\interface\hal\peripheral\bmd.h						 %1
copy /Y          .\interface\hal\peripheral\uart_sw.h						 %1
copy /Y          .\interface\hal\video\mpl_player.h						 %1
copy /Y          .\plutommi\framework\debuglevels\debuglevelinc\debuginitdef_int.h						 %1
copy /Y          .\plutommi\framework\interface\fontres.h						 %1
copy /Y          .\plutommi\framework\interface\pixcomfontengine.h						 %1
copy /Y          .\plutommi\mmi\inc\custdatares.h						 %1
copy /Y          .\applib\mem\include\app_mem.h						 %1
copy /Y          .\plutommi\framework\commonfiles\commoninc\mmi_frm_utility_gprot.h						 %1
copy /Y          .\plutommi\framework\commonfiles\commoninc\mmi_frm_events_gprot.h						 %1
copy /Y          .\plutommi\framework\commonfiles\commoninc\mmi_frm_mem_gprot.h						 %1
copy /Y          .\plutommi\mmi\inc\mmi_common_app_trc.h						 %1
copy /Y          .\plutommi\mmi\inc\mmi_inet_app_trc.h						 %1
copy /Y          .\plutommi\framework\gui\gui_inc\gui_data_types.h						 %1
copy /Y          .\plutommi\framework\interface\unicodexdcl.h						 %1
copy /Y          .\ps\l4\include\l4a.h						 %1
copy /Y          .\plutommi\mmi\inc\mmi_conn_app_trc.h						 %1
copy /Y          .\media\audio\include\aud_defs.h						 %1
copy /Y          .\nucleus_v2\inc\esal_ar_cfg.h						 %1
copy /Y          .\nucleus_v2\inc\esal_ar_dbg_defs.h						 %1
copy /Y          .\nucleus_v2\inc\esal_ar_int_defs.h						 %1
copy /Y          .\nucleus_v2\inc\esal_ar_isr_defs.h						 %1
copy /Y          .\nucleus_v2\inc\esal_ar_stk_defs.h						 %1
copy /Y          .\nucleus_v2\inc\esal_ar_tmr_defs.h						 %1
copy /Y          .\nucleus_v2\inc\esal_co_cfg.h						 %1
copy /Y          .\nucleus_v2\inc\esal_dp_cfg.h						 %1
copy /Y          .\nucleus_v2\inc\esal_extern.h						 %1
copy /Y          .\nucleus_v2\inc\esal_ge_cfg.h						 %1
copy /Y          .\nucleus_v2\inc\esal_ge_com_defs.h						 %1
copy /Y          .\nucleus_v2\inc\esal_ge_dbg_defs.h						 %1
copy /Y          .\nucleus_v2\inc\esal_ge_int_defs.h						 %1
copy /Y          .\nucleus_v2\inc\esal_ge_isr_defs.h						 %1
copy /Y          .\nucleus_v2\inc\esal_ge_mem_defs.h						 %1
copy /Y          .\nucleus_v2\inc\esal_ge_rte_defs.h						 %1
copy /Y          .\nucleus_v2\inc\esal_ge_stk_defs.h						 %1
copy /Y          .\nucleus_v2\inc\esal_ge_tmr_defs.h						 %1
copy /Y          .\nucleus_v2\inc\esal_pr_cfg.h						 %1
copy /Y          .\nucleus_v2\inc\esal_pr_tmr_defs.h						 %1
copy /Y          .\nucleus_v2\inc\esal_ts_cfg.h						 %1
copy /Y          .\nucleus_v2\inc\esal_ts_rte_defs.h						 %1
copy /Y          .\nucleus_v2\inc\esal_ts_stk_defs.h						 %1
copy /Y          .\nucleus_v2\inc\cs_defs.h						 %1
copy /Y          .\nucleus_v2\inc\dm_defs.h						 %1
copy /Y          .\nucleus_v2\inc\er_extr.h						 %1
copy /Y          .\nucleus_v2\inc\ev_defs.h						 %1
copy /Y          .\nucleus_v2\inc\mb_defs.h						 %1
copy /Y          .\nucleus_v2\inc\nucleus.h						 %1
copy /Y          .\nucleus_v2\inc\pi_defs.h						 %1
copy /Y          .\nucleus_v2\inc\plus_cfg.h						 %1
copy /Y          .\nucleus_v2\inc\pm_defs.h						 %1
copy /Y          .\nucleus_v2\inc\qu_defs.h						 %1
copy /Y          .\nucleus_v2\inc\sm_defs.h						 %1
copy /Y          .\nucleus_v2\inc\tc_defs.h						 %1
copy /Y          .\nucleus_v2\inc\tm_defs.h						 %1
copy /Y          .\nucleus_v2\inc\zc_extr.h						 %1
copy /Y          .\plutommi\mmi\inc\mmi_media_app_trc.h						 %1
copy /Y          .\plutommi\mmi\inc\mmi_trc_int.h						 %1
copy /Y          .\plutommi\framework\interface\mmi_fw_trc.h						 %1
copy /Y          .\plutommi\framework\interface\pluto_fw_trc.h						 %1
copy /Y          .\plutommi\mmi\inc\mmi_mre_trc.h						 %1
copy /Y          .\plutommi\mmi\inc\custthemesres.h						 %1
copy /Y          .\plutommi\framework\commonfiles\commoninc\mmi_frm_queue_gprot.h						 %1
copy /Y          .\plutommi\framework\commonfiles\commoninc\mmi_frm_nvram_gprot.h						 %1
copy /Y          .\plutommi\framework\commonfiles\commoninc\mmi_frm_history_gprot.h						 %1
copy /Y          .\plutommi\framework\commonfiles\commoninc\mmi_cb_mgr_gprot.h						 %1
copy /Y          .\plutommi\framework\commonfiles\commoninc\mmi_frm_scenario_gprot.h						 %1
copy /Y          .\plutommi\framework\commonfiles\commoninc\mmi_frm_input_gprot.h						 %1
copy /Y          .\plutommi\framework\commonfiles\commoninc\mmi_frm_timer_gprot.h						 %1
copy /Y          .\init\include\task_main_func.h						 %1
copy /Y          .\plutommi\framework\commonfiles\commoninc\mmi_frm_remutex_gprot.h						 %1
copy /Y          .\plutommi\framework\commonfiles\commoninc\mmi_theme_mgr.h						 %1
copy /Y          .\plutommi\framework\commonfiles\commoninc\notificationgprot.h						 %1
copy /Y          .\plutommi\framework\commonfiles\commoninc\mmi_frm_gestures_gprot.h						 %1
copy /Y          .\plutommi\framework\commonfiles\commoninc\mmi_clipboard_gprot.h						 %1
copy /Y          .\plutommi\framework\commonfiles\commoninc\mmi_frm_at_util_gprot.h						 %1
copy /Y          .\plutommi\framework\commonfiles\commoninc\mmi_frm_event_flag_gprot.h						 %1
copy /Y          .\plutommi\framework\commonfiles\commoninc\mmi_frm_gprot.h						 %1
copy /Y          .\nucleus_v2\inc\tm_extr.h						 %1
copy /Y          .\interface\fs\fat_fs.h						 %1
copy /Y          .\kal\common\include\kal_debug_common_defs.h						 %1
copy /Y          .\kal\common\include\kal_error_code.h						 %1
copy /Y          .\kal\include\kal_internal_api.h						 %1
copy /Y          .\kal\nucleus\include\kal_debug_nucleus.h						 %1
copy /Y          .\kal\nucleus\include\kal_nucleus.h						 %1
copy /Y          .\kal\nucleus\include\kal_nucleus_common_defs.h						 %1
copy /Y          .\interface\hal\graphics\jpeg_enum.h						 %1
copy /Y          .\ps\l4\phb\include\phb_defs.h						 %1
copy /Y          .\interface\hal\opengles\mali400mp\gpu_sap.h						 %1
copy /Y          .\interface\hal\video\mpl_recorder.h						 %1
copy /Y          .\interface\hal\camera\mm_comm_def.h						 %1
copy /Y          .\interface\ps\local_inc\mmi_msg_struct.h						 %1
copy /Y          .\interface\hal\mdp\img_common_enum.h						 %1
copy /Y          .\plutommi\mmi\inc\mmi_platform.h						 %1
copy /Y          .\interface\hal\postproc\fd_comm_def.h						 %1
copy /Y          .\applib\misc\include\app_datetime.h						 %1
copy /Y          .\interface\hal\postproc\autocap_comm_def.h						 %1
copy /Y          .\interface\hal\postproc\pano_comm_def.h						 %1
copy /Y          .\hal\connectivity\usb_driver\inc\usbvideo_custom.h						 %1
copy /Y          .\interface\hal\camera\cal_comm_def.h						 %1
copy /Y          .\plutommi\mmi\inc\stdc.h						 %1
copy /Y          .\plutommi\framework\gui\gui_inc\gui_resource_type.h						 %1
copy /Y          .\plutommi\framework\gui\gui_inc\gui.h						 %1
copy /Y          .\plutommi\mmi\datetime\datetimeinc\datetimetype.h						 %1
copy /Y          .\plutommi\framework\gui\gui_inc\gui_theme_struct.h						 %1
copy /Y          .\plutommi\customer\customerinc\gui_setting.h						 %1
copy /Y          .\plutommi\framework\gui\gui_inc\gui_windows.h						 %1
copy /Y          .\plutommi\framework\commonfiles\commoninc\depreciation\frameworkbackwardcompatible.h						 %1
copy /Y          .\plutommi\framework\gui\gui_inc\wgui.h						 %1
copy /Y          .\interface\common\global_def.h						 %1
copy /Y          .\interface\media\med_struct.h						 %1
copy /Y          .\plutommi\framework\gui\gui_inc\wgui_categories_res.h						 %1
copy /Y          .\plutommi\framework\gui\gui_inc\wgui_categories_defs.h						 %1
copy /Y          .\plutommi\framework\gui\gui_inc\wgui_categories_enum.h						 %1
copy /Y          .\plutommi\framework\gui\gui_inc\gui_typedef.h						 %1
copy /Y          .\interface\ps\include\ems.h						 %1
copy /Y          .\plutommi\framework\gui\gui_inc\gui_buttons.h						 %1
copy /Y          .\plutommi\framework\gui\gui_inc\gui_virtual_keyboard_language_type.h						 %1
copy /Y          .\plutommi\framework\inputmethod\inc\imegprot.h						 %1
copy /Y          .\plutommi\framework\inputmethod\inc\imegprotenums.h						 %1
copy /Y          .\applib\misc\include\app_usedetails.h						 %1
copy /Y          .\plutommi\framework\gui\gui_inc\gui_scrollbars.h						 %1
copy /Y          .\plutommi\framework\gui\oem_inc\gui_scrollbars_post_oem.h						 %1
copy /Y          .\plutommi\framework\gui\oem_inc\gui_scrollbars_pre_oem.h						 %1
copy /Y          .\plutommi\framework\gui\gui_inc\gui_panel.h						 %1
copy /Y          .\plutommi\framework\gui\gui_inc\gui_inputs.h						 %1
copy /Y          .\plutommi\framework\gui\gui_inc\wgui_draw_manager.h						 %1
copy /Y          .\plutommi\framework\gui\gui_inc\wgui_inputs.h						 %1
copy /Y          .\kal\adaptation\include\stack_buff_pool.h						 %1
copy /Y          .\config\include\hal\kal_user_mem.h						 %1
copy /Y          .\config\include\hal\ctrl_buff_pool.h						 %1
copy /Y          .\hal\camera\isp\inc\aaa_nvram.h						 %1
copy /Y          .\hal\camera\isp\inc\isp_nvram.h						 %1
copy /Y          .\config\include\hal\sysconf_statistics.h						 %1
copy /Y          .\sst\include\ex_item.h						 %1
copy /Y          .\tst\include\tst.h						 %1
copy /Y          .\interface\hal\drv_sw_def\drv_sw_features_isp.h						 %1
copy /Y          .\interface\nvram\nvram_data_items.h						 %1
copy /Y          .\plutommi\mmi\inc\globalresdef.h						 %1
copy /Y          .\plutommi\framework\gui\gui_inc\gui_virtual_keyboard.h						 %1
copy /Y          .\plutommi\framework\gui\gui_inc\wgui_virtual_keyboard.h						 %1
copy /Y          .\plutommi\framework\interface\screenrotationgprot.h						 %1
copy /Y          .\plutommi\customer\customerinc\mmi_rp_file_type_def.h						 %1
copy /Y          .\plutommi\framework\gui\gui_inc\wgui_categories_inputs.h						 %1
copy /Y          .\plutommi\framework\gui\gui_inc\wgui_touch_screen.h						 %1
copy /Y          .\interface\inet_ps\cbm_consts.h						 %1
copy /Y          .\fmt\include\fmt_def.h						 %1
copy /Y          .\ul1_hs\ul1d_ext\ul1d_cid.h						 %1
copy /Y          .\plutommi\framework\gui\gui_inc\wgui_categories_list.h						 %1
copy /Y          .\plutommi\mmi\inc\globalmenuitems.h						 %1
copy /Y          .\plutommi\mmi\inc\menuid\apmenuitems.h						 %1
copy /Y          .\plutommi\mmi\inc\menuid\avatarmenuitems.h						 %1
copy /Y          .\plutommi\mmi\inc\menuid\barcodereadermenuitems.h						 %1
copy /Y          .\plutommi\mmi\inc\menuid\camcordermenuitems.h						 %1
copy /Y          .\plutommi\mmi\inc\menuid\connectivitymenuitems.h						 %1
copy /Y          .\plutommi\mmi\inc\menuid\emappmenuitems.h						 %1
copy /Y          .\plutommi\mmi\inc\menuid\emmenuitems.h						 %1
copy /Y          .\plutommi\mmi\inc\menuid\filemgrmenuitems.h						 %1
copy /Y          .\plutommi\mmi\inc\menuid\filemgrservicemenuitems.h						 %1
copy /Y          .\plutommi\mmi\inc\menuid\fmmenuitems.h						 %1
copy /Y          .\plutommi\mmi\inc\menuid\fmrmenuitems.h						 %1
copy /Y          .\plutommi\mmi\inc\menuid\fmsrecmenuitems.h						 %1
copy /Y          .\plutommi\mmi\inc\menuid\idlehomescreenmenuitems.h						 %1
copy /Y          .\plutommi\mmi\inc\menuid\idletoolbarmenuitems.h						 %1
copy /Y          .\plutommi\mmi\inc\menuid\j2me_menu_items.h						 %1
copy /Y          .\plutommi\mmi\inc\menuid\mmiapi_menu_items.h						 %1
copy /Y          .\plutommi\mmi\inc\menuid\mtpnp_ad_menudef.h						 %1
copy /Y          .\plutommi\mmi\inc\menuid\vdoedtmenuitem.h						 %1
copy /Y          .\plutommi\mmi\inc\menuid\vmmenuitems.h						 %1
copy /Y          .\plutommi\mmi\inc\menuid\vobjectsmenuitems.h						 %1
copy /Y          .\plutommi\mmi\inc\menuid\vrsdmenuitems.h						 %1
copy /Y          .\plutommi\mmi\inc\menuid\wapmenuitems.h						 %1
copy /Y          .\plutommi\mmi\inc\custmenures.h						 %1
