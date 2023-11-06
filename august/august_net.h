#ifndef AUGUST_NET_H__
#define AUGUST_NET_H__

#include <stdint.h>
#include <stdbool.h>
#include "kal_general_types.h"
#include "MMIDataType.h"
#include "med_utility.h"
#include "august_utility.h"

#include "SimCtrlSrvGprot.h"
#include "soc_consts.h"
#include "common_nvram_editor_data_item.h"


#define CMNET_ACCOUNT_NAME	L"GPRSNET"
#define CMWAP_ACCOUNT_NAME	L"GPRSWAP"

#ifndef ABS
#define ABS(x) ((x) > 0 ? (x) : -(x))
#endif

#ifndef MAX
#define MAX(a,b) (a>b)? a:b
#endif

#ifndef MIN
#define MIN(a,b) (a<b)? a:b
#endif

#ifndef IsDigit
#define IsDigit(c)        ((c >= '0') && (c <= '9'))
#endif


typedef struct _GGT_currUserInfo
{
	AU_S8 IMEIOK;
	AU_S8 IMEI[SRV_MAX_IMSI_LEN];
} GT_currUserInfo;

GT_currUserInfo GTCurrUserInfo;

typedef struct GT_session_context_t
{
    /* for gethostbyname */
    AU_S32 request_id; 	/* socket id or enum type of app */
    AU_S8 access_id; 		/* enum type of app */
    AU_S8 ref_count;		/* hx address for context, dispatch message*/

    /* for socket */
    AU_S8 socId;
    AU_U8 ipAddr[MAX_SOCK_ADDR_LEN];
    AU_S16 dstPort;

     /* hx address for context, dispatch message*/
    AU_S8 *pRecvBuff;
    AU_S32 recvBuffsize;
    AU_S32 totalSize;
    AU_S32 recvSize;
    AU_S8 *pSendBuff;
    AU_S32 sendBuffsize;

    AU_S32 socHandle;
    void (*callback)(AU_S32 handle, AU_S32 event);
} GT_session_context_t;

GT_session_context_t GT_WRT_soc_context;

typedef struct _net_cmd_tbl
{
   AU_S8 cmdCode;
   AU_S8 cmdString[5];
}net_cmd_tbl;


typedef enum
{
	GT_ACTIVE_CARD_EMPTY = 0,
	GT_ACTIVE_CARD_SIM1,
	GT_ACTIVE_CARD_SIM2
}GT_SIM_ENUM;

/* mmi_soc_demo_app_enum */
typedef enum
{
    GT_HSW_HTTP_DW=0x10,
    GT_HSW_HTTP_WL=0x11,
    GT_WRT_SOC_PRO=0x12,
    GT_HSW_HTTP_ADP=0x13,
    WRT_UBLOX_AGPS_REQUEST=0x14,
#if defined(CUSTOMER_NAME_W15)
// baiwenlin 20130704
	NECKLACE_COMMON_SOC=0x15,
#endif /* CUSTOMER_NAME_W15 */
    GT_SESSION_MAX
} GT_session_app_enum;


typedef struct
{
	AU_U16 DevId;
	AU_U16 isLogin;
	AU_U16 currPro;
	AU_U16 isConn;
	AU_U16 recvSeq;
	AU_U16 sendSeq;
} Pro_Context_t;


Pro_Context_t GTProContext=
{
	0x0410, /* GK301 LBS版本识别码为：0x10 0x04 */
	0x0000,
	0x0000,
	0x0000,
	0x0001,
	0x0001,
};


typedef enum
{
    NET_CMD_REPLY_START = 0,
    NET_CMD_REPLY_LOGIN = NET_CMD_REPLY_START,
	NET_CMD_REPLY_HEARTBEAT,
	NET_CMD_SET_PARA,
	NET_CMD_UPL_PARA_RPL,
	NET_CMD_REPLY_END = NET_CMD_UPL_PARA_RPL,
	NET_CMD_MAX
}NET_CMD_CODE;

typedef enum
{
    CMD_GET_IMEI,
	CMD_APN_SET,
	CMD_IP_SET,			
	CMD_MAX
}CMD_CODE;

typedef struct _cmd_tbl
{
	AU_S8 cmdCode;
	AU_S8 cmdString[20];
}cmd_tbl;

typedef struct
{
	AU_U8 buff[512];
	AU_U32 len;
}net_send_data;



#if defined(MTK_VER_10A1108) ||defined(MTK_VER_11B1132)
#define GT_malloc(size) med_alloc_ext_mem_ext(size,MED_EXT_MEMORY_TYPE_NONCACHEABLE,__FILE__,__LINE__)
#define GT_free(pptr) med_free_ext_mem_ext(pptr,__FILE__,__LINE__)
#else
#define GT_malloc(size) med_alloc_ext_mem_ext(size,1,__FILE__,__LINE__)
#define GT_free(pptr) med_free_ext_mem_ext(pptr,__FILE__,__LINE__)
#endif


AU_U32 g_GTDataAccountId = 0xffff;
nvram_ef_ggt_struct GTSuperInfo;

#endif //AUGUST_NET_H__
