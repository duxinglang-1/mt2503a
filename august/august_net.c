
/*****************************************************************************
* File Name          : august_net.c
* Author             : frank
* Version            : v1.0
* Date               : 11/06/2019 
* Description        : device connect to net
*                      
* HISTORY:
* Date               |	Modification                    |	Author
* 11/06/2019         |	Initial Revision                |	frank

********************************************************************************/
#include "august_net.h"
#include <string.h>
#include <math.h>
#include "stdlib.h"


#include "TimerEvents.h"
#include "SimCtrlSrvGprot.h"
#include "NwInfoSrvGprot.h"
#include "mmi_msg_struct.h"
#include "app2soc_struct.h"
#include "soc_api.h"
#include "DtcntSrvGprot.h"
#include "DtcntSrvIntStruct.h"
#include "DtcntSrvIntDef.h"
#include "DtcntSrvIprot.h"
#include "DtcntSrvDb.h"
#include "mmi_frm_events_gprot.h"
#include "SmsSrvGprot.h"
#include "SmsAppSetting.h"
#include "AlertScreen.h"
#include "GlobalResDef.h"
#include "mmi_frm_events_gprot.h"


#define FALL_DETECT_TEST_MODE
#define PRINT_RAW_DATA_TEST_MODE


#ifdef FALL_DETECT_TEST_MODE
extern void get_real_tri_fo_std_thres(double *tri_thr, double *fo_thr, double *std_thr, double *angle, double *svmg,uint32_t *index);
#endif

extern srv_dtcnt_store_info_context g_srv_dtcnt_store_ctx;
extern kal_mutexid g_srv_dtcnt_mutex_op;

PsFuncPtr GT_logincallback;
PsFuncPtr GT_sendSmsCallback;



extern void AlmATPowerReset(AU_U8 power_off, AU_U8 time);
extern void GT_delete_cur_message(void);
AU_U8 GT_pro_get_net_con_status(void);
void GT_SocketSessionFree(void);
void GT_set_net_con_status(AU_U8 temp);
void GT_WRT_LBS_main(void);
AU_S8 GT_SocketCreate(AU_U32 account_id);
void GT_WRT_init(void);
void GT_WRT_main(PsFuncPtr call_back);
void GT_pro_soc_upl_set_para(void);
GT_SIM_ENUM GT_get_active_card(void);
void mmi_network_fail_deel(void);
void GT_check_rec_status_timer(void);



AU_U8 g_is_heart_replay = 1;
net_send_data g_resend_data;




net_cmd_tbl service_cmd_tbl[]=
{
	{NET_CMD_REPLY_LOGIN, "00"}, 			
	{NET_CMD_REPLY_HEARTBEAT,"03"},
	{NET_CMD_SET_PARA,"06"},
	{NET_CMD_MAX, "err\0"},			
};



void GT_RESET(void)
{
	AlmATPowerReset(MMI_FALSE, 3);
}

void GT_set_superviser_info(void)
{
	S16 error;
   
    WriteRecord(NVRAM_EF_LID_GGT_LID,1, &GTSuperInfo, NVRAM_EF_FM_GGT_SIZE, &error);
}

void net_resend_data_init(void)
{
	memset(&g_resend_data,0x00,sizeof(net_send_data));
	g_resend_data.len = 0;
}

cmd_tbl g_cmd_tbl[]=
{
	{CMD_GET_IMEI,"IMEI#"},
	{CMD_APN_SET,"apn:"},
	{CMD_IP_SET,"ip:"},
	{CMD_MAX, "err\0"},		
};

void GT_sms_del_rsp(srv_sms_callback_struct *callback_data)
{
	dbg_print("GT_sms_del_rsp,result:%d, cause:%d", callback_data->result, callback_data->cause);
}


void GT_sms_send_sms_callback(srv_sms_callback_struct* callback_data)
{
	dbg_print("GT_sms_send_sms_callback(),result:%d, cause:%d", callback_data->result, callback_data->cause);
	if(GT_sendSmsCallback != NULL)
	{
		if(callback_data->result)
		{
			GT_sendSmsCallback(NULL);
		}
		else
		{
			GT_sendSmsCallback(NULL);
		}
	}
}


void GT_sms_send_sms(AU_S8* pAsciiDstNumber, WCHAR * pSMSContent, smsal_dcs_enum contentDcs, PsFuncPtr callback)
{
		AU_S32 numlen = 0;
		GT_SIM_ENUM sim;
		SMS_HANDLE srv_send_handle;
		AU_S8 ucs2_addr[(SRV_SMS_MAX_ADDR_LEN + 1) * ENCODING_LENGTH];
              
		sim = GT_get_active_card();
		dbg_print("GT_sms_send_sms(), Use SIM:%d, number:%s, content:%s", sim, pAsciiDstNumber, pSMSContent);
		if (GT_ACTIVE_CARD_EMPTY == sim)
		{
	        if(NULL!=callback)
	        {
			  callback(NULL);
	        }
			return;
		}
		
		GT_sendSmsCallback = callback;
		numlen = strlen(pAsciiDstNumber) > MAX_DIGITS_SMS?MAX_DIGITS_SMS:strlen(pAsciiDstNumber);
		if (numlen <= 0)
		{
	        if(NULL!=callback)
	        {
	           callback(NULL);
	        }
			return;
		}
		
		srv_send_handle = srv_sms_get_send_handle();
		memset(ucs2_addr, 0, (SRV_SMS_MAX_ADDR_LEN + 1) * ENCODING_LENGTH);
		mmi_asc_n_to_ucs2((AU_S8*)ucs2_addr, pAsciiDstNumber, numlen+1);
		srv_sms_set_address(srv_send_handle, ucs2_addr);
		
        if(GT_ACTIVE_CARD_SIM2 == sim)
		{
			srv_sms_set_sim_id(srv_send_handle, SRV_SMS_SIM_2);
		}
		else
		{
			srv_sms_set_sim_id(srv_send_handle, SRV_SMS_SIM_1);
		}
	       
        if (contentDcs==SRV_SMS_DCS_UCS2)
        {
		    srv_sms_set_content_dcs(srv_send_handle, SRV_SMS_DCS_UCS2);
        }
		else
		{
			srv_sms_set_content_dcs(srv_send_handle, SMSAL_DEFAULT_DCS);
		}
		
		srv_sms_set_content (srv_send_handle, (AU_S8 *)pSMSContent, mmi_ucs2strlen((const AU_S8*)pSMSContent) * 2);
		srv_sms_set_no_sending_icon(srv_send_handle);
		srv_sms_set_send_type(srv_send_handle, SRV_SMS_FG_SEND);	
		srv_sms_set_status_report(srv_send_handle, MMI_FALSE);
		
		srv_sms_send_msg(srv_send_handle, GT_sms_send_sms_callback, NULL);
}


CMD_CODE GT_WRT_cmd_process_handle(AU_U8 *asciiNum, AU_U8 *asciiContent)
{
	AU_S32 i = 0;
	AU_S8 *p = NULL;
	AU_S8 *pw = NULL;
	AU_S8 *pos = NULL;	
	AU_S32 cmdCode=CMD_MAX;
	AU_U8 reply_code[64] = {0};
	AU_S32 len1, len2, len3;
	AU_S32 nLen=strlen((AU_S8 *)asciiContent);
	

	if(asciiNum[0]=='+')
	{
		p=(AU_S8 *)asciiNum+3;
	}
	else
	{
		p=(AU_S8 *)asciiNum;
	}


	dbg_print("GT_WRT_cmd_process_handle, asciiNum:%s, asciiContent[%d]:%s", asciiNum, nLen, asciiContent);

	for(i=0; i<CMD_MAX; i++)
	{
		nLen = strlen(g_cmd_tbl[i].cmdString);
		
		//dbg_print("g_cmd_tbl:%s,%d \r\n", g_cmd_tbl[i].cmdString, nLen);
		if(nLen>0 && !strncmp(g_cmd_tbl[i].cmdString, (AU_S8 *)asciiContent, nLen))
		{
			cmdCode=g_cmd_tbl[i].cmdCode;
			break;
		}
	}

	pw=asciiContent;
	
	dbg_print("GT_WRT_cmd_process_handle, cmdCode:%d, cmdString:%s", cmdCode, g_cmd_tbl[cmdCode].cmdString);
	
	/* 响应所有号码 */
	if(cmdCode!=CMD_MAX)
	{		
		switch(cmdCode)
		{
			  case CMD_GET_IMEI:
              {
			    AU_S8 buff[100];
			    AU_S8 buff2[200];
			  
                memset(buff,0,sizeof(buff));
			    memset(buff2,0,sizeof(buff2));	
		
                sprintf(buff,"IMEI:%s;\r\nVERSION:%s %s;\r\n",GTCurrUserInfo.IMEI, release_verno(), build_date_time());

                mmi_asc_to_ucs2(buff2, buff);
                GT_sms_send_sms(asciiNum, (AU_U16*)buff2, 0x08, GT_delete_cur_message);	
			  }
			  break;
			  case CMD_IP_SET:
			  {
				  AU_U8 i = 0;
				  AU_U8 buf[20] = {0};
				  pw = pw+3;
	 
				  dbg_print("pw=%s \r\n", pw);
						 
				  if(*pw == ' ')	
				  {
					 pw =pw+2;
				  }
				  else
				  {
					 pos = strstr(pw,".");
							
					 dbg_print("pw=%s \r\n", pos);			
					 for(i = 0;i<3;i++) 
					 {
						if(pos)
						{
						  memset(buf,0,sizeof(buf));
						  memcpy(buf, pw, ABS(pos-pw));
						  GTSuperInfo.netInfo.ip[i] = atoi(buf);		
						  pw = pos+1;
						  pos = strstr(pw,".");    
						  dbg_print("pos=%s \r\n", pos); 	
						}
					 }
				
					 pos = strstr(pw,",");	  
					 if(pos)
					 {
						memset(buf,0,sizeof(buf));
						memcpy(buf, pw, ABS(pos-pw));
						GTSuperInfo.netInfo.ip[3] = atoi(buf);		
					 }
					 pw = pos+1;
				  }


				  if(*p == ' ') 
				  {   
				  }
				  else
				  {
					 pos = strstr(pw,";");
					 memset(buf,0,sizeof(buf));
					 memcpy(buf, pw, ABS(pos-pw));
					 GTSuperInfo.netInfo.port = atoi(buf);	
					 pw = pos+1;
				  }
				  GT_set_superviser_info();

				  dbg_print("GTSuperInfo=<%d,%d,%d,%d,%d>", GTSuperInfo.netInfo.ip[0],GTSuperInfo.netInfo.ip[1],GTSuperInfo.netInfo.ip[2],
				  GTSuperInfo.netInfo.ip[3],GTSuperInfo.netInfo.port);
				  GT_sms_send_sms(asciiNum, L"IP set success!!", 0x08, GT_delete_cur_message);		
			  }
			  break;
			
			  case CMD_APN_SET:
			  {
				 AU_U8 i = 0;
				 pw = pw+4;
				 
				 if(*pw == ' ')
				 {
				   pw =pos+2;
				 }
				 else
				 {
				   pos = strstr(pw,",");
				   memset(GTSuperInfo.netInfo.apnName,0,sizeof(GTSuperInfo.netInfo.apnName));
				   memcpy(GTSuperInfo.netInfo.apnName,pw, ABS(pos-pw));
				   pw = pos+1;
				 }
						 
				 if(*pw == ' ')
				 {
					pw =pos+2;
				 }
				 else
				 {
					pos = strstr(pw,",");
					memset(GTSuperInfo.netInfo.userName,0,sizeof(GTSuperInfo.netInfo.userName));
					memcpy(GTSuperInfo.netInfo.userName,pw, ABS(pos-pw));
					pw = pos+1;
				 }
	 
				 if(*pw == ' ')
				 {
					pw =pos+2;
				 }
				 else
				 {
					pos = strstr(pw,";");
					memset(GTSuperInfo.netInfo.password,0,sizeof(GTSuperInfo.netInfo.password));
					memcpy(GTSuperInfo.netInfo.password,pw, ABS(pos-pw));
					pw = pos+1;
				 }
				 GT_set_superviser_info();

				 dbg_print("GTSuperInfo=<%s,%s,%s>", GTSuperInfo.netInfo.apnName,GTSuperInfo.netInfo.userName,GTSuperInfo.netInfo.password);
				 GT_sms_send_sms(asciiNum, L"APN set success!!", 0x08, GT_delete_cur_message);	
			  }
			  break;			  
			  case CMD_MAX:
			  default:
				break;
		}
	}
	else
	{
		dbg_print("GT_WRT_cmd_process_handle, command not match!");
	}
	
	return cmdCode;
}



AU_S32 GT_sms_filter_handle(srv_sms_new_msg_struct *evt,AU_S8* content)
{
	AU_S32 result = 0;
	AU_U8 *pBuff = NULL;
	AU_S32 messageLen=0;
	srv_sms_new_msg_struct *new_msg_data = (srv_sms_new_msg_struct *)evt;
       
	dbg_print("GT_sms_filter_handle(), number:%s, dcs:%d, content:%s,len=%d", new_msg_data->number, new_msg_data->dcs, content,new_msg_data->message_len);
       
	if(new_msg_data->dcs == SRV_SMS_DCS_7BIT)
	{
		messageLen = (new_msg_data->message_len+2)/2;
		pBuff = get_ctrl_buffer(messageLen);
		memset(pBuff, 0x00, messageLen);
		mmi_ucs2_to_asc(pBuff, content);
		result = GT_WRT_cmd_process_handle(new_msg_data->number, pBuff);
		free_ctrl_buffer(pBuff);
	}
	else
	{
		result = 0;
	}
       
	//dbg_print("GT_sms_filter_handle(), number:%d,%d",new_msg_data->msg_id,event_info->msg_id);
	return result;
}


AU_U16 wrt_gprs_pack_login(AU_S8 *pack)
{
	sprintf(pack,"{\"code\":\"LGAP00\",\"IMEI\":\"%s\"}",GTCurrUserInfo.IMEI);
	strcat(pack,"\r\n");
    return strlen(pack);
}

AU_U16 wrt_gprs_pack_device_report_heartbeat(AU_S8 *pack)
{
  sprintf(pack,"{\"code\":\"LGAP03\",\"AU_S8ge\":80,\"steps\":9999}");
  strcat(pack,"\r\n");
  return strlen(pack);
}

#define FALL_DETECT_STATUS 0
AU_U16 wrt_gprs_pack_real_para(AU_S8 *pack)
{
	double tri_thr,fo_thr,std_thr,angle,svmg;
	AU_U32 data_index;

#ifdef FALL_DETECT_TEST_MODE
	get_real_tri_fo_std_thres(&tri_thr, &fo_thr, &std_thr,&angle,&svmg,&data_index);
#endif

	sprintf(pack,"{\"code\":\"DGAP02\",\"acc_trigger\":\"%.2f\",\"fuzzy_output\":\"%.2f\",\"Standard_Deviation\":\"%.2f\",\"angle\":\"%.2f\",\"svmg\":\"%.2f\",\"index\":\"%d\",\"sign\":\"%d\"}",
		tri_thr,fo_thr,std_thr,angle,svmg,data_index,FALL_DETECT_STATUS);
	strcat(pack,"\r\n");
  	return strlen(pack);
	
}

AU_U16 wrt_gprs_pack_set_para(AU_S8 *pack)
{
	sprintf(pack,"{\"code\":\"DGAP01\"}");
	strcat(pack,"\r\n");
    return strlen(pack);
}


AU_U8 GT_net_set_para(AU_S8 *p, kal_int32 len)
{
	AU_S8 *ptr1 = NULL,*ptr2 = NULL;
	AU_S8 para1[5] = {0},para2[5] = {0},para3[3] = {0};
	double tri_thr, fo_thr, std_thr;

	ptr1 = strstr(p,"acc_trigger");
		
	if(ptr1 !=NULL)
	{
		ptr1 = ptr1+strlen("acc_trigger")+4;
		ptr2 = strchr(ptr1,'\"');
		if(ptr2 !=NULL)
		{
			strncpy(para1,ptr1,ptr2-ptr1);
		}
	}
	else
	{
		return 0;
	}

	ptr1 = strstr(p,"fuzzy_output");
		
	if(ptr1 !=NULL)
	{
		ptr1 = ptr1+strlen("fuzzy_output")+4;
		ptr2 = strchr(ptr1,'\"');
		if(ptr2 !=NULL)
		{
			strncpy(para2,ptr1,ptr2-ptr1);
		}
	}	
	else
	{
		return 0;
	}

	ptr1 = strstr(p,"Standard_Deviation");

	if(ptr1 !=NULL)
	{
		ptr1 = ptr1+strlen("Standard_Deviation")+4;
		ptr2 = strchr(ptr1,'\"');
		if(ptr2 !=NULL)
		{
			strncpy(para3,ptr1,ptr2-ptr1);
		}
	}	
	else
	{
		return 0;
	}


	tri_thr = atof(para1);
	fo_thr = atof(para2);
	std_thr = atof(para3);
	{
		AU_U8 buffer[128] = {0};
		sprintf(buffer,"tri_thr:%.3f,fo_thr:%.3f,std_thr:%.3f\r\n",tri_thr,fo_thr,std_thr);
		dbg_print("%s",buffer);
	}
	set_tri_fo_std_thres(tri_thr,fo_thr,std_thr);	
	return 1;
}


AU_U16 GT_pro_unpack_data(AU_S8 *p, kal_int32 len)
{
	AU_S32 i = 0;
	AU_S32 cmdCode=NET_CMD_MAX;
	AU_U8	is_save = 0;
	AU_U8	is_reply = 0;
	AU_U8	cmd[3] = {0};
	AU_U16 handle_len = 0xffff;
	AU_U8 temp,nLen;
	AU_U8 *ptr =NULL;

	ptr = strstr(p,"LGBP");
	if(ptr)
	{
	   strncpy(cmd,ptr+4,2);
	   for(i=NET_CMD_REPLY_START; i<=NET_CMD_REPLY_END; i++)
	   {
		  nLen = strlen(service_cmd_tbl[i].cmdString);
			
		  if(!strncmp(service_cmd_tbl[i].cmdString, (AU_S8 *)cmd, nLen))
		  {
			cmdCode=service_cmd_tbl[i].cmdCode;
			break;
		  }
	   }

	}
	else if(strstr(p,"DGBP01"))
	{
		cmdCode = NET_CMD_SET_PARA;
	}
	else if(strstr(p,"DGBP02"))
	{
		cmdCode = NET_CMD_UPL_PARA_RPL;
	}
	else
	{
	   return;
	}
	
	dbg_print("recvHandle:cmdCode=%d,save=%d,reply=%d\r\n",cmdCode,is_save,is_reply);	
	switch(cmdCode)
	{
		case NET_CMD_REPLY_LOGIN:
		{
		   AU_S32 result;
		   AU_S32 len=0;

		   GTProContext.isLogin = 1;
		   GT_set_net_con_status(1);
		   if(GT_logincallback !=NULL)
		   {
		   	GT_logincallback(NULL);
		   }
	    #ifdef __MTK_TARGET__		 
			dbg_print("login success!");
	    #endif
		#if defined(__GPS_SUPPORT__) && defined(__AUGUST_ALL_FUNC_SUPPORT__)
			au_gps_turn_on();
		#endif
		}
		handle_len = 8;
		break;
		
		case NET_CMD_REPLY_HEARTBEAT:
		{
			  g_is_heart_replay = 1;
		}
		handle_len = 8;
		break;	
		case NET_CMD_SET_PARA:
			if(GT_net_set_para(p,len))
			{
				//GT_pro_soc_upl_set_para();
			}
		break;
		case NET_CMD_UPL_PARA_RPL:
		{
			dbg_print("NET_CMD_UPL_PARA_RPL\r\n");
			net_resend_data_init();
		}
		break;
		default:
		break;
	}

	return	handle_len;
}


void GT_pro_pulse_handle(void)
{
	AU_S32 i = 0;
	AU_S32 result;
	AU_S8 buff[64];
	
	StopTimer(GT_WRT_SOC_PULSE_TIMER);
	if((GT_pro_get_net_con_status() == 1) && (g_is_heart_replay == 1))
	{
		result = wrt_gprs_pack_device_report_heartbeat(buff);
		if(result>0)
		{
			result = GT_SocketSend(GT_WRT_soc_context.socId, buff, result);
			GTProContext.sendSeq+=1;
			g_is_heart_replay = 0;
		}
              
	    StartTimer(GT_WRT_SOC_PULSE_TIMER, 180*1000, GT_pro_pulse_handle);
	}
	else if(g_is_heart_replay == 0)
	{
        GT_SocketSessionFree();
		StartTimer(GT_NETWORK_FAIL_TIMER, 30*1000, mmi_network_fail_deel);
	}
}



GT_SIM_ENUM GT_get_active_card(void)
{
	kal_int32 result;
	srv_nw_info_service_availability_enum status;
	
	status = srv_nw_info_get_service_availability(MMI_SIM1);
	if(status == SRV_NW_INFO_SA_FULL_SERVICE)
	{
		result = GT_ACTIVE_CARD_SIM1;
	}
	else
	{
	       status = srv_nw_info_get_service_availability(MMI_SIM2);
		if(status == SRV_NW_INFO_SA_FULL_SERVICE)
		{
		      result =  GT_ACTIVE_CARD_SIM2;
		}
		else
		{
			result = GT_ACTIVE_CARD_EMPTY;
		}
	}
	return result;
}

static srv_dtcnt_account_info_st* GT_srv_dtcnt_db_store_get_acc_info_by_apn(AU_S8 *apn, AU_S8 SimId)
{
    AU_S32 i;
    for (i = 0; i < SRV_DTCNT_PROF_MAX_ACCOUNT_NUM; i++)
    {
        if (g_srv_dtcnt_store_ctx.acc_list[i].in_use &&
            g_srv_dtcnt_store_ctx.acc_list[i].bearer_type == SRV_DTCNT_BEARER_GPRS)            
        {      

		dbg_print("name = %s,%d \r\n",g_srv_dtcnt_store_ctx.acc_list[i].dest_name,g_srv_dtcnt_store_ctx.acc_list[i].sim_info);
            if ((!strcmp((AU_S8 *)g_srv_dtcnt_store_ctx.acc_list[i].dest_name, apn)) && (g_srv_dtcnt_store_ctx.acc_list[i].sim_info == SimId))
            {
                return &(g_srv_dtcnt_store_ctx.acc_list[i]);
            }
        }
    }
    return NULL;
}


void mmi_network_fail_deel(void)
{
  StopTimer(GT_NETWORK_FAIL_TIMER);
  GT_WRT_main(GT_pro_pulse_handle);
}


/*  SetProtocolEventHandler  */
void GT_set_protocol_event_handler(AU_U16 eventID, PsIntFuncPtr funcPtr)
{
	mmi_frm_set_protocol_event_handler(eventID, funcPtr, MMI_FALSE);
}

void GT_clear_protocol_event_handler(AU_U16 eventID, PsIntFuncPtr funcPtr)
{
	mmi_frm_clear_protocol_event_handler(eventID, funcPtr);
}

void GT_get_imei_rsp(void *Msg)
{
	mmi_nw_get_imei_rsp_struct *pMsg = (mmi_nw_get_imei_rsp_struct *)Msg;
	dbg_print("GT_get_imei_rsp");
	if (pMsg->result == 1)
	{
	   memset(GTCurrUserInfo.IMEI, 0x00, SRV_MAX_IMSI_LEN);
	   #ifdef WIN32
	   memcpy(GTCurrUserInfo.IMEI, "354403061188888", SRV_MAX_IMSI_LEN);
	   #else
	   memcpy(GTCurrUserInfo.IMEI, pMsg->imei, SRV_MAX_IMSI_LEN);
	   #endif
	   dbg_print("imei = %s \r\n",GTCurrUserInfo.IMEI); 
	   GT_WRT_main(GT_pro_pulse_handle);
	}
	else
	{ 
	   GT_set_protocol_event_handler(MSG_ID_MMI_NW_GET_IMEI_RSP, GT_get_imei_rsp);
       mmi_frm_send_ilm(MOD_L4C,MSG_ID_MMI_NW_GET_IMEI_REQ,NULL,NULL);
	}
}

AU_S32 GT_SocketSend_next(AU_S8 socketId, const AU_S8 *buf, AU_S32 len)
{
	AU_S32 ret;
       AU_S8 *p;
	
       ret = soc_send(socketId, (AU_U8 *)buf, len, 0);
       if(ret > 0)
       {
          return ret;
       }
	else
	{
           if(ret == SOC_WOULDBLOCK)
           {
              return 0;
           }
	    else
	    {
              return -1;
	    }
	}
}


AU_S32 GT_SocketSend(AU_S8 socketId, const AU_S8 *buf, AU_S32 len)
{
	AU_S32 sent_len,ret;
    AU_S8 *p;
	net_send_data send_data;
    sent_len = 0;
	

	memcpy(send_data.buff,buf,len);
	send_data.len = len;

	dbg_print("send_len=%d,send_data:%s",len,buf);
	if(GT_WRT_soc_context.socId == SOC_ERROR)
	    return 0;
	
    while(sent_len < send_data.len)
    {
      ret = GT_SocketSend_next(socketId,send_data.buff+sent_len,send_data.len-sent_len);
      if(ret > 0)
      {
         sent_len = sent_len+ret;
      }
	  else
	  {
	      break;
	  }
    }

	 dbg_print("GT_SocSend:ret=%d\r\n",ret);
	 StopTimer(GT_WRT_CHECK_NET_TIMER);
	 StartTimer(GT_WRT_CHECK_NET_TIMER,6000,GT_check_rec_status_timer);

	 return ret;
}



AU_S32 GT_SocketRecv (AU_S8 socketId, const AU_S8 *buf, AU_S32 len)
{
	AU_S32 ret = soc_recv(socketId, (AU_U8 *)buf, len, 0);
	
	if(ret == SOC_WOULDBLOCK)
	{
      //kingc SetProtocolEventHandler(GT_SocketNotify, MSG_ID_APP_SOC_NOTIFY_IND);
	}
	return ret;
}


void GT_pro_soc_event_conn_handle(void)
{
	AU_S32 result=0;
	AU_S8 buff[512]={0};

	GTProContext.isConn = 1;
	memset(buff, 0x00, sizeof(buff));
    result = wrt_gprs_pack_login(buff);
	if(result>0)
	{
		result = GT_SocketSend(GT_WRT_soc_context.socId, buff, result);
		GTProContext.sendSeq+=1;
	}
}

void GT_pro_soc_upl_real_para(void)
{
	AU_S32 result=0;
	AU_S8 buff[512]={0};

	if(GT_pro_get_net_con_status() == 1)
	{
		memset(buff, 0x00, sizeof(buff));
		result = wrt_gprs_pack_real_para(buff);
		net_resend_data_init();
		memcpy(&g_resend_data.buff,buff,result);
		g_resend_data.len = result;
		if(result>0)
		{
			result = GT_SocketSend(GT_WRT_soc_context.socId, buff, result);
			GTProContext.sendSeq+=1;
		}
	}
}



void GT_pro_soc_upl_set_para(void)
{
	AU_S32 result=0;
	AU_S8 buff[512]={0};

	if(GT_pro_get_net_con_status() == 1)
	{
		memset(buff, 0x00, sizeof(buff));
	    result = wrt_gprs_pack_set_para(buff);
		if(result>0)
		{
			result = GT_SocketSend(GT_WRT_soc_context.socId, buff, result);
			GTProContext.sendSeq+=1;
			mmi_popup_display((unsigned short*)GetString(STR_GLOBAL_DONE), MMI_EVENT_SUCCESS, NULL);
		}
	}
}


void GT_pro_soc_event_write_handle(void)
{

	//not used currently
}


void GT_pro_soc_event_read_handle(void)
{
	AU_S32 recvlen = 0;
    AU_U16 handle_len;


   memset(GT_WRT_soc_context.pRecvBuff,0,GT_WRT_soc_context.recvBuffsize);
   recvlen = GT_SocketRecv(GT_WRT_soc_context.socId, (AU_S8 *)GT_WRT_soc_context.pRecvBuff, GT_WRT_soc_context.recvBuffsize);

   GT_WRT_soc_context.recvSize = recvlen;

   dbg_print("SocRecv:%d,%s\r\n ",recvlen,GT_WRT_soc_context.pRecvBuff);

   GTProContext.recvSeq = 1;

   handle_len = GT_pro_unpack_data(GT_WRT_soc_context.pRecvBuff, GT_WRT_soc_context.recvSize);

	return;
}

AU_U8 GT_pro_get_net_con_status(void)
{
    return GTProContext.isConn;
}

AU_S8 GT_SocketClose(AU_S8 socketId)
{
	AU_S8  ret = soc_close(socketId);
	return ret;
}


void GT_SocketNotify(void *inMsg)
{
	app_soc_notify_ind_struct *msg = (app_soc_notify_ind_struct *)inMsg;
	 #ifdef __MTK_TARGET__
	dbg_print("GT_SocketNotify, result:%d, socket_id:%d, event_type:%d, ref_count:%d\r\n", msg->result, msg->socket_id, msg->event_type, msg->ref_count);
	#endif

	 if(!msg)
    {
	    return;
    }

	if(msg->socket_id!=GT_WRT_soc_context.socId)
	{
	    dbg_print("GT_SocketNotify, socket(%d) mismatch!\r\n", msg->socket_id);
		return;
	}
	
	if(msg->result)
	{
	    switch (msg->event_type)
		{
			case SOC_READ:
			{
				//dbg_print("GT_SocketNotify, SOC_READ EVENT");
				GT_pro_soc_event_read_handle();
				break;
			}
			
			case SOC_WRITE:
			{
				//dbg_print("GT_SocketNotify, SOC_WRITE EVENT");
				GT_pro_soc_event_write_handle();
				break;
			}
			
			case SOC_ACCEPT:
			{
				dbg_print("GT_SocketNotify, socket(%d) mismatch!", msg->socket_id);
				break;
			}
			
			case SOC_CONNECT:
			{
				GT_pro_soc_event_conn_handle();
				break;
			}	
			
			case SOC_CLOSE:
			{
				GT_SocketSessionFree();
				break;
			}
			
			default:
			{
				dbg_print("GT_SocketNotify reset, invaild event type:%d\r\n", msg->event_type);
				GT_RESET();
				break;
			}
	    	}
	}
	else
	{
		dbg_print("GT_SocketNotify Error, error_cause:%d, detail_cause:%d", msg->error_cause, msg->detail_cause);	
		//if(msg->socket_id==GT_WRT_soc_context.socId)
		//{
			GT_SocketSessionFree();
			StartTimer(GT_NETWORK_FAIL_TIMER, 30*1000, mmi_network_fail_deel);
			//mmi_network_fail_deel();
		//}
	}
}


AU_S8 GT_SocketConnect(AU_S8 socketId, AU_U8 ip[], AU_U16 port)
{
	AU_S8 ret = 0;
	sockaddr_struct addr;
	memset((void *)&addr, 0x00, sizeof(sockaddr_struct));
	addr.addr_len = 4;
	memcpy(addr.addr, ip, addr.addr_len); /* IP is 4Byte AU_U8 number here!*/
	addr.port = port;		
	addr.sock_type=SOC_SOCK_STREAM;
#ifdef __MTK_TARGET__
	dbg_print("IP =%d.%d.%d.%d:%d\r\n",ip[0],ip[1],ip[2],ip[3],port);
#endif
	ret =  soc_connect(socketId, &addr);
	if(ret == SOC_WOULDBLOCK || ret == SOC_SUCCESS)
	{
         SetProtocolEventHandler(GT_SocketNotify, MSG_ID_APP_SOC_NOTIFY_IND);
	}
	else
	{
         GT_RESET();
	}
	return ret;
}

void GT_SocketSessionFree(void)
{
#if defined(MTK_VER_10A1108) ||defined(MTK_VER_11B1132)
	AU_U8 app_id;
#endif
    
	dbg_print("GT_SocketSessionFree = %d\r\n",GT_WRT_soc_context.socId);
	ClearProtocolEventHandler(MSG_ID_APP_SOC_NOTIFY_IND);	
    //     youchen_reset_device_state();
	GTProContext.isLogin = 0x0000;
	GTProContext.isConn = 0x0000;
	GTProContext.recvSeq = 1;
	g_is_heart_replay =1;

    StopTimer(GT_WRT_SOC_PULSE_TIMER);
	
       GT_set_net_con_status(2);
	if(GT_WRT_soc_context.socId!=SOC_ERROR)
	{
		GT_SocketClose(GT_WRT_soc_context.socId);
		GT_WRT_soc_context.access_id=-1;
		GT_WRT_soc_context.callback=NULL;
		GT_WRT_soc_context.dstPort=-1;
		GT_WRT_soc_context.pRecvBuff=NULL;
		GT_WRT_soc_context.pSendBuff=NULL;
		GT_WRT_soc_context.recvSize=0;
		GT_WRT_soc_context.ref_count=-1;
		GT_WRT_soc_context.request_id=-1;
		GT_WRT_soc_context.sendBuffsize=0;
		GT_WRT_soc_context.socHandle=0;
		GT_WRT_soc_context.socId=SOC_ERROR;
		GT_WRT_soc_context.totalSize=0;
	}
       
	if(GT_WRT_soc_context.pRecvBuff)
	{
		GT_free((void **)&GT_WRT_soc_context.pRecvBuff);
		GT_WRT_soc_context.pRecvBuff=NULL;
	}	

	if(GT_WRT_soc_context.pSendBuff)
	{
		GT_free((void **)&GT_WRT_soc_context.pSendBuff);
		GT_WRT_soc_context.pSendBuff=NULL;
	}
}



void GT_set_net_con_status(AU_U8 temp)
{
   GTProContext.isConn = temp;
}


static srv_dtcnt_result_enum GT_srv_dtcnt_get_acc_id_by_apn(AU_S8 *apn, AU_U32 *acc_id_out, AU_S8 SimId,AU_U8 app_id)
{
    MMI_BOOL    store_status;
    srv_dtcnt_result_enum ret;
    srv_dtcnt_account_info_st *acc_info = NULL;
   
#ifndef __TCPIP__
    return SRV_DTCNT_RESULT_FAILED;
#endif /* __TCPIP__ */

    if (!acc_id_out || !apn)
        return SRV_DTCNT_RESULT_INVALID_INPUT;


SRV_DTCNT_GLOBAL_LOCK;
    store_status = srv_dtcnt_db_store_status_check();
SRV_DTCNT_GLOBAL_UNLOCK;


    if (!store_status)
        return SRV_DTCNT_RESULT_FAILED;


SRV_DTCNT_GLOBAL_LOCK;
    acc_info = GT_srv_dtcnt_db_store_get_acc_info_by_apn(apn, SimId);
    //dbg_print("acc_info->acc_id  = %d \r\n", acc_info->acc_id);
    if (acc_info)
    {
        cbm_sim_id_enum sim_id = (acc_info->sim_info == SRV_DTCNT_SIM_TYPE_1)? CBM_SIM_ID_SIM1 : CBM_SIM_ID_SIM2;
		
       // *acc_id_out = cbm_encode_data_account_id((AU_U32)acc_info->acc_id, sim_id, app_id, KAL_FALSE);
       *acc_id_out = cbm_encode_data_account_id((AU_U32)CBM_DEFAULT_ACCT_ID, sim_id, app_id, KAL_FALSE);
        ret = SRV_DTCNT_RESULT_SUCCESS;
    }
    else
    {
        *acc_id_out = CBM_INVALID_NWK_ACCT_ID;
        ret = SRV_DTCNT_RESULT_FAILED;
    }
SRV_DTCNT_GLOBAL_UNLOCK;


    return ret;
}


static AU_S32 GT_set_gprs_data_account_req (AU_U8 *name, AU_U8 *apn, srv_dtcnt_prof_gprs_auth_type_enum auth_type, AU_U8 *user_name, AU_U8 *passwd, AU_U8 *dns, AU_U8 proxy,AU_U8 * proxy_add)
{
	AU_S32 i;
	AU_U32 acct_id;
	srv_dtcnt_result_enum ret;
	srv_dtcnt_store_prof_data_struct prof_info;
	srv_dtcnt_prof_gprs_struct prof_gprs = {0};
	
//	dbg_print("GT_set_gprs_data_account_req(), Name:%s, apn:%s", name, apn);
	if(!apn ){
		return -1;
	}
	
	prof_gprs.APN = apn;
       //prof_gprs.prof_common_header.acc_id = *count_id;
	prof_gprs.prof_common_header.sim_info =  GT_get_active_card();
	prof_gprs.prof_common_header.AccountName = (const AU_U8*)name;
	prof_gprs.prof_common_header.Auth_info.AuthType = auth_type;
	prof_gprs.prof_common_header.px_service = SRV_DTCNT_PROF_PX_SRV_HTTP;
	
	if (user_name!=NULL)
		strcpy((AU_S8*)prof_gprs.prof_common_header.Auth_info.UserName, user_name);
	if (passwd!= NULL)
		strcpy ((AU_S8*)prof_gprs.prof_common_header.Auth_info.Passwd,passwd);
	
	if (dns != NULL)
	{
       	for ( i = 0; i < 4; i++)
       	{
       		prof_gprs.prof_common_header.PrimaryAddr[i] = dns[i];
       	}	
	}

	prof_gprs.prof_common_header.use_proxy = proxy;
       if (proxy_add != NULL)
	{
       	for ( i = 0; i < 4; i++)
       	{
       		prof_gprs.prof_common_header.px_addr[i] = proxy_add[i];
       	}	
	}
      
	prof_info.prof_data = &prof_gprs;
	prof_info.prof_fields = SRV_DTCNT_PROF_FIELD_ALL;
	prof_info.prof_type = SRV_DTCNT_BEARER_GPRS;
	ret = srv_dtcnt_store_add_prof(&prof_info, &acct_id);

	 dbg_print("GT_set_gprs_data_account_req = %d",ret);
	if (ret == SRV_DTCNT_RESULT_SUCCESS)
	{
		return 0;	
	}
	else if(ret == SRV_DTCNT_RESULT_STORE_FULL)
	{
          ret = srv_dtcnt_store_update_prof(g_srv_dtcnt_store_ctx.acc_list[SRV_DTCNT_PROF_MAX_ACCOUNT_NUM-1].acc_id,&prof_info);
	    return ret;
	}
	else
	{		
		return -1;
	}
}


void GT_set_gprs_data_acount(kal_uint32 contextId , AU_S8 *netType, PsFuncPtr rspCallback)
{      
	AU_S32  result;
	AU_S8 plmn[6] = {0};
	AU_S8 apn_new[32] = {0};
	AU_U8 app_id = 0;
	kal_uint32 accountid;
	GT_SIM_ENUM  sim_card = 1;  // GT_get_active_card();
	AU_U8 i,cbm;
	AU_S8 *usrname = (AU_S8 *)GTSuperInfo.netInfo.userName;
	AU_S8 *pwd = (AU_S8 *)GTSuperInfo.netInfo.password;
	kal_uint32 acct_id = 0;
	cbm_app_info_struct info;

	strncpy(apn_new,netType,strlen(netType));
	   
	  if(CBM_OK ==cbm_register_app_id(&app_id))
	  {
	      cbm = cbm_hold_bearer(app_id);
	  }

	//  cbm_register_app_id_with_app_info(&info, &app_id);
	  //dbg_print("cbm = %d", cbm);
	
	result = GT_srv_dtcnt_get_acc_id_by_apn(apn_new, &accountid, sim_card, app_id);
	
	if(result!=SRV_DTCNT_RESULT_SUCCESS)
	{
		if(!strncmp(netType, "cmwap", 5))
		{
			AU_U8 proxy_add[5] = {10,0,0,172,0};
			result = GT_set_gprs_data_account_req((AU_U8 *)CMNET_ACCOUNT_NAME, (AU_U8 *)apn_new, 0, usrname, pwd, NULL, 1, proxy_add);
		}
		else
		{
			result = GT_set_gprs_data_account_req((AU_U8 *)CMNET_ACCOUNT_NAME, (AU_U8 *)apn_new, 0, usrname, pwd, NULL, 1, NULL);
		}

		if(result == SRV_DTCNT_RESULT_SUCCESS)
			result = GT_srv_dtcnt_get_acc_id_by_apn(apn_new, &accountid, sim_card, app_id);
	}
	
	g_GTDataAccountId = accountid;
	cbm_deregister_app_id(app_id);
	rspCallback(&accountid);
       
	dbg_print("g_GTDataAccountId =%d\r\n", accountid);
}


void GT_GetHostByNameRsp(void* inMsg)
{
	kal_int32 result;
	app_soc_get_host_by_name_ind_struct* pMsg = (app_soc_get_host_by_name_ind_struct*)inMsg;

	if (pMsg && pMsg->result != FALSE)
	{
		ClearProtocolEventHandler(MSG_ID_APP_SOC_GET_HOST_BY_NAME_IND);
		if(pMsg->access_id==GT_WRT_soc_context.access_id)
		{
			memset(&GT_WRT_soc_context.ipAddr, 0x00, sizeof(GT_WRT_soc_context.ipAddr));
			memcpy(GT_WRT_soc_context.ipAddr, pMsg->addr, pMsg->addr_len);
			#ifdef __MTK_TARGET__
			dbg_print("GT_GetHostByNameRsp, WRT Pro Connect:  %d.%d.%d.%d:%d\r\n", GT_WRT_soc_context.ipAddr[0], GT_WRT_soc_context.ipAddr[1], GT_WRT_soc_context.ipAddr[2], GT_WRT_soc_context.ipAddr[3], GT_WRT_soc_context.dstPort);
			dbg_print("GT_GetHostByNameRsp, WRT Pro access_id:%d, socId:%d\r\n", GT_WRT_soc_context.access_id, GT_WRT_soc_context.socId);
            #endif
			result = GT_SocketConnect(GT_WRT_soc_context.socId, GT_WRT_soc_context.ipAddr, GT_WRT_soc_context.dstPort);
            #ifdef __MTK_TARGET__
			dbg_print("GT_GetHostByNameRsp, soc_connect result:%d\r\n", result);
		    #endif
		}
		else
		{
			//watch_dbg_print("GT_GetHostByNameRsp, access_id invalid[%d]", pMsg->access_id);
		}

	}
	else
	{
		dbg_print("GT_GetHostByNameRsp, error_cause:%d, detail_cause:%d, reset!\r\n", pMsg->error_cause, pMsg->detail_cause);
		if(pMsg->access_id==GT_WRT_soc_context.access_id)
		{
			//GT_SocketSessionFree();
			GT_RESET();
		}
		else
		{
			GT_RESET();
		}
		// baiwenlin 20130711  掉卡后，重启
		if(pMsg->detail_cause == 896)
		{
			GT_RESET();
		}
	}
}


void GT_GetHostByNameReq(AU_U32 acctId, kal_int32 request_id, const AU_S8 *hostName,  AU_U8 ip[], kal_uint16 dstPort, AU_S8 access_id)
{
	AU_S32 result = 0;
	AU_S8 addr_len = 0; 
	AU_U8 addr[MAX_SOCK_ADDR_LEN] = {0x00}; 

	//dbg_print("GT_GetHostByNameReq, domain: %s, port: %d\r\n", hostName, dstPort);
	/* MTK 平台有域名解析cache ! */
	result = soc_gethostbyname(0, MOD_MMI, request_id, hostName, (AU_U8 *)addr, (AU_U8 *)&addr_len, access_id, acctId);
	//watch_dbg_print("GT_GetHostByNameReq, soc_gethostbyname result:%d, access_id:%d\r\n", result, access_id);
	
	if(result == SOC_SUCCESS) /* 非阻塞取得IP */
	{
		memcpy(ip, addr, MAX_SOCK_ADDR_LEN);
		//watch_dbg_print("GT_GetHostByNameReq() IP: %d.%d.%d.%d",  ip[0], ip[1], ip[2], ip[3]);
		result = GT_SocketConnect(request_id /* socket id */, (AU_U8 *)addr, dstPort);
		dbg_print("GT_GetHostByNameReq, GT_SocketConnect return:%d", result);
	}
	else if(result == SOC_WOULDBLOCK||result == SOC_ALREADY)
	{
		SetProtocolEventHandler(GT_GetHostByNameRsp, MSG_ID_APP_SOC_GET_HOST_BY_NAME_IND); 
	}
	else
	{
		/*error_cause: SOC_BEARER_FAIL, dataacct set error or encode proileId error */
		dbg_print("GT_GetHostByNameReq failed, soc_gethostbyname return:%d, reset!\r\n", result);
		//DRV_RESET();
		GT_SocketSessionFree();
		//StartTimer(GT_WRT_IMEI_REQ_TIMER,60*1000,GT_RESET);
	}
}



void GT_WRT_pro_SetDataAcctRsp(kal_uint32 *msg)
{
	AU_S8 result;
	 
	//g_GTDataAccountId= *msg;
	GT_WRT_soc_context.sendBuffsize = 2*1024;
	GT_WRT_soc_context.pSendBuff=GT_malloc(GT_WRT_soc_context.sendBuffsize);
	GT_WRT_soc_context.recvBuffsize = 2*1024;
	GT_WRT_soc_context.pRecvBuff=GT_malloc(GT_WRT_soc_context.recvBuffsize);
	GT_WRT_soc_context.access_id=GT_WRT_SOC_PRO;
	GT_WRT_soc_context.socId = GT_SocketCreate(g_GTDataAccountId);
	GT_WRT_soc_context.callback = NULL;
#ifdef __MTK_TARGET__	
	dbg_print("socId =%d \r\n", GT_WRT_soc_context.socId);
#endif
	dbg_print("GT_WRT_pro_SetDataAcctRsp");
#ifdef WIN32
	GT_WRT_soc_context.dstPort=8080;	
#else
	GT_WRT_soc_context.dstPort=GTSuperInfo.netInfo.port;	
#endif
	if(GTSuperInfo.netInfo.ym_type == 1)
	{
		GT_GetHostByNameReq(g_GTDataAccountId, GT_WRT_soc_context.socId, (const AU_S8 *)GTSuperInfo.netInfo.domain, GT_WRT_soc_context.ipAddr, GT_WRT_soc_context.dstPort, GT_WRT_soc_context.access_id);
	}
	else
	{
		result = GT_SocketConnect(GT_WRT_soc_context.socId /* socket id */, (AU_U8 *)GTSuperInfo.netInfo.ip, GT_WRT_soc_context.dstPort);
	}
	   
}


void GT_WRT_LBS_main(void)
{
#if defined(__MMI_DUAL_SIM_MASTER__)
	AU_U8 contextId = GT_DATA_ACCT_MENU_INDEX;
#else
	AU_U8 contextId = 0; //OK !!!
#endif
	static AU_U8 times = 0;
#ifdef __MTK_TARGET__
	dbg_print("nw_info=%d\r\n",srv_nw_info_get_service_availability(MMI_SIM1));
#endif

	if(srv_nw_info_get_service_availability(MMI_SIM1) == SRV_NW_INFO_SA_FULL_SERVICE)
	{
#ifdef __MTK_TARGET__
		dbg_print("FULL_SERVICE \r\n");
#endif
		StopTimer(GT_WRT_IMEI_REQ_TIMER);
		GT_WRT_soc_context.access_id=-1;
		GT_WRT_soc_context.callback=NULL;
		GT_WRT_soc_context.dstPort=-1;
		GT_WRT_soc_context.pRecvBuff=NULL;
		GT_WRT_soc_context.pSendBuff=NULL;
		GT_WRT_soc_context.recvSize=0;
		GT_WRT_soc_context.ref_count=-1;
		GT_WRT_soc_context.request_id=-1;
		GT_WRT_soc_context.sendBuffsize=0;
		GT_WRT_soc_context.socHandle=0;
		GT_WRT_soc_context.socId=-1;
		GT_WRT_soc_context.totalSize=0;
		if(g_GTDataAccountId == 0xffff)
		{
			GT_set_gprs_data_acount(contextId, GTSuperInfo.netInfo.apnName, GT_WRT_pro_SetDataAcctRsp); //异步响应
		}
		else
		{
			GT_WRT_pro_SetDataAcctRsp(NULL);
		}
		times = 0;
		}
	else
	{
		dbg_print("GT_WRT_LBS_main no FULL_SERVICE");
		times++;
		if(times>=10)
		{
			GT_RESET();
		}		
		StartTimer(GT_WRT_IMEI_REQ_TIMER, 5*1000, GT_WRT_LBS_main);
		//dbg_print("GT_WRT_LBS_main, CurrentServiceType Error(%d)", g_pwr_context.CurrentServiceType);
	}
}


void GT_WRT_main(PsFuncPtr call_back)
{	
	static AU_U8 times = 0;
       DCL_HANDLE gpio_handle;
	   
#ifdef __MTK_TARGET__
	dbg_print("GT_WRT_main");
#endif
    StopTimer(GT_WRT_SOC_PULSE_TIMER);
	StopTimer(GT_WRT_CHECK_NET_TIMER);
	g_is_heart_replay = 1;

    GT_set_net_con_status(0);
	if(mmi_bootup_is_sim_valid())
	{
	    GT_logincallback = call_back;
	    GT_WRT_LBS_main();
		times = 0;
	}
	#if 0//
	else
	{
	    #ifdef __MTK_TARGET__
		dbg_print("GT_WRT_main, SIM Card empty!");
        #endif
		times++;
		if(times>=3)
		{
			GT_RESET();
		}
	    StartTimer(GT_WRT_IMEI_REQ_TIMER, 20*1000, GT_WRT_init);
	}
	#endif
}


void GT_WRT_init(void)
{
	memset((void *)&GTCurrUserInfo, 0x00, sizeof(GTCurrUserInfo));

	dbg_print("GT_WRT_init\r\n");

	GT_set_protocol_event_handler(MSG_ID_MMI_NW_GET_IMEI_RSP, GT_get_imei_rsp);
	mmi_frm_send_ilm(MOD_L4C,MSG_ID_MMI_NW_GET_IMEI_REQ,NULL,NULL);
}

AU_S8 GT_SocketCreate(AU_U32 account_id)
{
	 AU_S8 ret = 0;	 
	 AU_S8 soc_ret = 0;
	 AU_S8  val = KAL_TRUE;
	 soc_ret = soc_create(SOC_PF_INET, SOC_SOCK_STREAM, 0, MOD_MMI, account_id);
	 dbg_print("GT_SocketCreate soc_ret result=%d\r\n", soc_ret);
		
	 if(soc_ret >= 0)
	 {
		ret = soc_setsockopt(soc_ret, SOC_NBIO, &val, sizeof(val));
		val = SOC_READ|SOC_WRITE|SOC_CONNECT|SOC_CLOSE;
		ret = soc_setsockopt((AU_U8)soc_ret, SOC_ASYNC, &val, sizeof(val));
	 }	
	 else
	 {
		   GT_RESET();
	 }
	 
	 return soc_ret;
}

void GT_check_rec_status_timer(void)
{
	static AU_U32 times =0;	
	dbg_print("GT_check_rec_status_timer %d\r\n",times);
	if(times>=5)
	{
		times = 0;
		GT_SocketSessionFree();
		GT_WRT_main(GT_pro_pulse_handle);
	}
	else
	{
		if(GTProContext.recvSeq == 0)
		{
			times++;
			if(g_resend_data.len>0)
			{
				GT_SocketSend(GT_WRT_soc_context.socId, g_resend_data.buff, g_resend_data.len);	
				GTProContext.recvSeq = 0;
			}					
		}
		else
		{
			times = 0;
		}
	}
}

void GT_initialize(void)
{
	kal_int32 drv;
	kal_uint32 fs_len;
	FS_HANDLE handle;
	S16 error;
	AU_S8 usc2Path[64];
    AU_S32 result = 0;
	   
	/* 硬件要求拉高GPIO31控制模拟开关
	使短接的POWERKEY接地 避免POWERKEY一直按导致其他按键无效 */
	GT_WRT_soc_context.access_id=-1;
	GT_WRT_soc_context.callback=NULL;
	GT_WRT_soc_context.dstPort=-1;
	GT_WRT_soc_context.pRecvBuff=NULL;
	GT_WRT_soc_context.pSendBuff=NULL;
	GT_WRT_soc_context.recvSize=0;
	GT_WRT_soc_context.ref_count=-1;
	GT_WRT_soc_context.request_id=-1;
	GT_WRT_soc_context.sendBuffsize=0;
	GT_WRT_soc_context.socHandle=0;
	GT_WRT_soc_context.socId=SOC_ERROR;
	GT_WRT_soc_context.totalSize=0;

	net_resend_data_init();
	  
      result = ReadRecord(NVRAM_EF_LID_GGT_LID,1, &GTSuperInfo, NVRAM_EF_FM_GGT_SIZE, &error);
}


void xb_test_chipRID(void)
{ 
	kal_uint32 i;
	kal_uint8 RID_buffer[128] = {0};
	
#ifdef __MTK_TARGET__
	SST_Get_ChipRID(RID_buffer,128);
#endif

	for(i=0;i<128;i++)
	{
		if(RID_buffer[i]==0)
			break;
		else
			i++;
	}
	
	kal_prompt_trace(MOD_ABM, "RID len:%d, RID=%02x,%02x,%02x,%02x,%02x,%02x,%02x,%02x,%02x,%02x,%02x,%02x,%02x,%02x,%02x,%02x,%02x,%02x,%02x,%02x", 
							i,
							RID_buffer[0],RID_buffer[1],RID_buffer[2],RID_buffer[3],RID_buffer[4],RID_buffer[5],RID_buffer[6],RID_buffer[7],RID_buffer[8],RID_buffer[9],
							RID_buffer[10],RID_buffer[11],RID_buffer[12],RID_buffer[13],RID_buffer[14],RID_buffer[15],RID_buffer[16],RID_buffer[17],RID_buffer[18],RID_buffer[19]);
}

extern void author_data_encode(void);
void xb_test_fall(void)
{
	author_data_encode();
}

void GGT_api_init(void)
{	
	extern void lsm6ds3_main_init(void);
	//lsm6ds3_main_init();
    //GT_initialize(); 
	StartTimer(GT_WRT_SOC_PULSE_TIMER,30000,xb_test_fall);
}




