//CMCSD0 ---CLK  27    CMCD1---SDA 28  CMCSK-----EN


#include "mmi_features.h"
#include "MMIDataType.h"
#include "kal_release.h"
#include "dcl.h"
//#include "touch_panel.h"
#include "eint.h"
#include "us_timer.h"
#include "TimerEvents.h"

#ifndef WIN32

#include "UcmSrvGprot.h" 
#define __AW9106__
#if defined(__AW9106__)
#define ALP_PS_TRACE  kal_prompt_trace
#else
#define ALP_PS_TRACE
#endif

#define MOD_ALP_PS    MOD_BEE

/*
*IIC数字脚，时钟脚
*/
#define LEDS_SDA_PIN	28
#define LEDS_SCL_PIN	27

/*
*设备地址
*/
#define LEDS_DEVICE_WRITE_ADDRESS	 	0xB6//0x5a//0x58//0x5a
#define LEDS_DEVICE_READ_ADDRESS 		0xB7//0x5b//0x59//0x5b

/******************************************************************************
**
**	I2c Defines
**
*******************************************************************************/
 
#define LEDS_CLK_PIN_GPIO_MODE			GPIO_ModeSetup(LEDS_SCL_PIN,0)
#define	LEDS_DATA_PIN_GPIO_MODE		GPIO_ModeSetup(LEDS_SDA_PIN,0)

#define LEDS_I2C_CLK_OUTPUT			GPIO_InitIO(OUTPUT,LEDS_SCL_PIN)
#define LEDS_I2C_DATA_OUTPUT			GPIO_InitIO(OUTPUT,LEDS_SDA_PIN)
#define LEDS_I2C_DATA_INPUT		   	GPIO_InitIO(INPUT,LEDS_SDA_PIN)

#define LEDS_I2C_CLK_HIGH				GPIO_WriteIO(1,LEDS_SCL_PIN)
#define LEDS_I2C_CLK_LOW				GPIO_WriteIO(0,LEDS_SCL_PIN)
#define LEDS_I2C_DATA_HIGH				GPIO_WriteIO(1,LEDS_SDA_PIN)
#define LEDS_I2C_DATA_LOW				GPIO_WriteIO(0,LEDS_SDA_PIN)

#define LEDS_I2C_GET_BIT				GPIO_ReadIO(LEDS_SDA_PIN)

/******************************************************************************
**
**	I2c Platform Functions
**
*******************************************************************************/

static void LEDS_i2c_udelay(unsigned int time)
{
	kal_uint32 ust = 0; //ust_get_current_time
	kal_uint32 count = 0;
	kal_uint32 break_count = 0;
	
	ust = ust_get_current_time();
	do{
		if(ust_get_current_time() != ust)
			count++;
		else
			break_count++;
	}while((count < time) && (break_count < 0xFFFFFF));
}

/*
*当CLK是高电平的时候，DATA由高变低表示I2C起始
*/
static void LEDS_i2c_begin(void)
{
	//ALP_PS_TRACE(MOD_ALP_PS,"IIC Begin");
	LEDS_CLK_PIN_GPIO_MODE;
	LEDS_I2C_CLK_OUTPUT;

	LEDS_DATA_PIN_GPIO_MODE;
	LEDS_I2C_DATA_OUTPUT;
	
	LEDS_i2c_udelay(5);//(20);//(40); 	//20
	
	LEDS_I2C_DATA_HIGH;
	LEDS_I2C_CLK_HIGH;
	LEDS_i2c_udelay(2);//(20);//(40); 	//20
	LEDS_I2C_DATA_LOW;
	LEDS_i2c_udelay(2);//(20);		//10
	LEDS_I2C_CLK_LOW;
	LEDS_i2c_udelay(20);//(20);		//10
}

/*
*当CLK是高电平的时候，DATA由低变高表示I2C结束
*/

 void LEDS_i2c_end(void)
{
	//ALP_PS_TRACE(MOD_ALP_PS,"IIC End");
	LEDS_I2C_CLK_OUTPUT;
	LEDS_I2C_DATA_OUTPUT;
	
	LEDS_i2c_udelay(10);		//10
	LEDS_I2C_CLK_HIGH;
	LEDS_i2c_udelay(20);		//10
	LEDS_I2C_DATA_HIGH;
	//LEDS_i2c_udelay(10);		//10
	//LEDS_i2c_udelay(10);		//10
}
void LEDS_i2c_one_clk(void)
{
	LEDS_i2c_udelay(10);//(20);		//5
	LEDS_I2C_CLK_HIGH;
	LEDS_i2c_udelay(2);//(40);		//10
	LEDS_I2C_CLK_LOW;
	LEDS_i2c_udelay(2);//(20);		//5
}

/******************************************
	software I2C read byte with ack
*******************************************/
kal_uint8 LEDS_ReadByteAck(void)
{
	kal_int8 i;
	kal_uint8 data;

	LEDS_I2C_DATA_INPUT; 
	data = 0; 
	
	for (i=7; i>=0; i--) 
	{
		if (LEDS_I2C_GET_BIT)
		{
			data |= (0x01<<i);
		}
		LEDS_i2c_one_clk();
	}			                                

	/**send  ack :  data pin set low*/
	LEDS_I2C_DATA_OUTPUT;                    
	LEDS_I2C_DATA_LOW;                       
	LEDS_i2c_one_clk();                         

	return data;
}

/******************************************
	software I2C read byte without ack
*******************************************/
kal_uint8 LEDS_ReadByteNAck(void)
{
	kal_int8 i;
	kal_uint8 data;

	LEDS_I2C_DATA_INPUT; 
	data = 0; 
	
	for (i=7; i>=0; i--) 
	{
		if (LEDS_I2C_GET_BIT)
		{
			data |= (0x01<<i);
		}
		LEDS_i2c_one_clk();
	}			                                

	/*not send ack data pin set high*/
	LEDS_I2C_DATA_OUTPUT;                                           
	LEDS_I2C_DATA_HIGH;
	LEDS_i2c_one_clk();                         
	
	return data;
}

void LEDS_SendByte(kal_uint8 sData) 
{
	kal_int8 i;
	//ALP_PS_TRACE(MOD_ALP_PS,"IIC SendByt data = %x",sData);
	for (i=7; i>=0; i--) 
	{            
		if ((sData>>i)&0x01) 
		{               
			LEDS_I2C_DATA_HIGH;	              
		} 
		else 
		{ 
			LEDS_I2C_DATA_LOW;                  
		}
		LEDS_i2c_one_clk();                        
	}		
}

static kal_bool LEDS_Chkack(void)
{
	kal_bool result = KAL_FALSE;

	LEDS_I2C_DATA_INPUT;
	LEDS_i2c_udelay(2);		//5
	LEDS_I2C_CLK_HIGH;
	LEDS_i2c_udelay(2);		//5

	if(LEDS_I2C_GET_BIT)		//Non-ack
	{
		LEDS_i2c_udelay(10);	//5
		LEDS_I2C_CLK_LOW;
		LEDS_i2c_udelay(10);	//5
		LEDS_I2C_DATA_OUTPUT;
		LEDS_I2C_DATA_LOW;
		
		result = KAL_FALSE;
	}
	else					//Ack
	{
		LEDS_i2c_udelay(10);	//5
		LEDS_I2C_CLK_LOW;
		LEDS_i2c_udelay(10);	//5
		LEDS_I2C_DATA_OUTPUT;
		LEDS_I2C_DATA_LOW;

		result =  KAL_TRUE;
	}

	//ALP_PS_TRACE(MOD_ALP_PS,"IIC Read acs result = %x",result);
	return result;
	
}
/******************************************
	software I2C restart bit
*******************************************/

void LEDS_Restart(void)
{
	LEDS_I2C_CLK_OUTPUT;
	LEDS_I2C_DATA_OUTPUT;

	LEDS_i2c_udelay(40);
	LEDS_I2C_DATA_HIGH;
	LEDS_i2c_udelay(20);		//10
	LEDS_I2C_CLK_HIGH;
	LEDS_i2c_udelay(40);
	LEDS_I2C_DATA_LOW;
	LEDS_i2c_udelay(20);		//10
	LEDS_I2C_CLK_LOW;
	LEDS_i2c_udelay(20);		//10
}
void LEDS_DelayMS(kal_uint16 delay)
{
	kal_uint16 i=0;

	for(i=0; i<delay; i++)
	{
		LEDS_i2c_udelay(1000);
	}
}
/******************************************
	 read bytes
*******************************************/
kal_bool LEDS_ReadBytes(kal_uint8* Data, kal_uint8 RegAddr)
{
	LEDS_i2c_begin();						//start bit
	LEDS_SendByte(LEDS_DEVICE_WRITE_ADDRESS);		//slave address|write bit
	if(KAL_FALSE == LEDS_Chkack())		//check Ack bit
	{
		//ALP_PS_TRACE(MOD_ALP_PS,"Read byte send write address ack error!!!");
		LEDS_i2c_end();
		return KAL_FALSE;
	}
		
	LEDS_SendByte(RegAddr);				//send RegAddr
	if(KAL_FALSE == LEDS_Chkack())		//check Ack bit
	{
		//ALP_PS_TRACE(MOD_ALP_PS,"read byte send reg address ack error!!!");
		LEDS_i2c_end();
		return KAL_FALSE;
	}

	LEDS_Restart();						//restart bit

	LEDS_SendByte(LEDS_DEVICE_READ_ADDRESS);		//slave address|read bit
	if(KAL_FALSE == LEDS_Chkack())
	{
		//ALP_PS_TRACE(MOD_ALP_PS,"write byte send read address ack error!!!");
		LEDS_i2c_end();
		return KAL_FALSE;
	}

	*Data = LEDS_ReadByteNAck();
	//ALP_PS_TRACE(MOD_ALP_PS,"ReadByte RegAddr[%x]:%x",RegAddr,*Data);
	LEDS_i2c_end();						//stop bit

	//TO_DO: add debug code to display the data received

	return KAL_TRUE;
	
}
/******************************************
	 write bytes
*******************************************/
kal_bool LEDS_WriteBytes(kal_uint8 RegAddr, kal_uint8 Data)
{
	LEDS_i2c_begin();						//start bit

	LEDS_SendByte(LEDS_DEVICE_WRITE_ADDRESS);		//slave address|write bit
	if(KAL_FALSE == LEDS_Chkack())		//check Ack bit
	{
		//ALP_PS_TRACE(MOD_ALP_PS,"write byte send write addres ack error!!!");
		LEDS_i2c_end();
		return KAL_FALSE;
	}

	LEDS_SendByte(RegAddr);				//send RegAddr
	if(KAL_FALSE == LEDS_Chkack())		//check Ack bit
	{
		//ALP_PS_TRACE(MOD_ALP_PS,"write byte send reg address ack error!!!");
		LEDS_i2c_end();
		return KAL_FALSE;
	}

	LEDS_SendByte(Data);					//send parameter
	if(KAL_FALSE == LEDS_Chkack())
	{
		//ALP_PS_TRACE(MOD_ALP_PS,"write byte send data ack error!!!");
		LEDS_i2c_end();
		return KAL_FALSE;
	}

	LEDS_i2c_end();						//stop bit

	return KAL_TRUE;
}

#endif

#if 1
#define REG_INPUT_P0        0x00
#define REG_INPUT_P1        0x01
#define REG_OUTPUT_P0       0x02
#define REG_OUTPUT_P1       0x03
#define REG_CONFIG_P0       0x04
#define REG_CONFIG_P1       0x05
#define REG_INT_P0          0x06
#define REG_INT_P1          0x07
#define REG_ID              0x10
#define REG_CTRL            0x11
#define REG_WORK_MODE_P0    0x12
#define REG_WORK_MODE_P1    0x13
#define REG_EN_BREATH       0x14
#define REG_FADE_TIME       0x15
#define REG_FULL_TIME       0x16
#define REG_DLY0_BREATH     0x17
#define REG_DLY1_BREATH     0x18
#define REG_DLY2_BREATH     0x19
#define REG_DLY3_BREATH     0x1a
#define REG_DLY4_BREATH     0x1b
#define REG_DLY5_BREATH     0x1c
#define REG_DIM00           0x20
#define REG_DIM01           0x21
#define REG_DIM02           0x22
#define REG_DIM03           0x23
#define REG_DIM04           0x24
#define REG_DIM05           0x25
#define REG_SWRST           0x7F

static int aw9106_leds_read_chipid()
{
    int ret = -1;
    unsigned char cnt = 0;
    unsigned char reg_val = 0;
  
    ret = LEDS_ReadBytes(&reg_val,REG_ID);
    if (ret < 0) {
        ALP_PS_TRACE(MOD_ALP_PS,"aw9106_leds_read_chipid %d\n",ret);
        return -1;
    }
	
	ALP_PS_TRACE(MOD_ALP_PS,"aw9106_leds_read_chipid %d\n",reg_val);
	return ret;
}

#include "Dcl_gpio.h"

void led_poweron()
{
	DCL_HANDLE handle;

	handle = DclGPIO_Open(DCL_GPIO,30);
    DclGPIO_Control(handle, GPIO_CMD_SET_MODE_0, NULL);
    DclGPIO_Control(handle, GPIO_CMD_SET_DIR_OUT, NULL);
	DclGPIO_Control(handle, GPIO_CMD_WRITE_HIGH, 0);
	DclGPIO_Close(handle);
}
void led_poweroff()
{
	DCL_HANDLE handle;
	StopTimer(TIMER_ID_TEMP_LED1);
	StopTimer(TIMER_ID_TEMP_LED2);
	
	handle = DclGPIO_Open(DCL_GPIO,30);
    DclGPIO_Control(handle, GPIO_CMD_SET_MODE_0, NULL);
    DclGPIO_Control(handle, GPIO_CMD_SET_DIR_OUT, NULL);
	DclGPIO_Control(handle, GPIO_CMD_WRITE_LOW, 0);
	DclGPIO_Close(handle);
}

void aw9106_leds_blink_1()
{
    unsigned char i;
	kal_uint8  data = 0x00;
	ALP_PS_TRACE(MOD_ALP_PS,"aw9106_leds_blink start\n");
	
	led_poweron();
	LEDS_i2c_udelay(30);

	LEDS_WriteBytes(REG_WORK_MODE_P0, 0x00);   // led mode
	LEDS_WriteBytes(REG_WORK_MODE_P1, 0x00);   // led mode
	
	LEDS_WriteBytes(REG_EN_BREATH, 0x3f);   //  // enable breath

	LEDS_WriteBytes(REG_CONFIG_P0, 0x0f);   // led mode
	LEDS_WriteBytes(REG_CONFIG_P1, 0x0f);   // led mode
	
	LEDS_WriteBytes(REG_FADE_TIME, 0x1b);   // 1260ms
	LEDS_WriteBytes(REG_FULL_TIME, 0x12);	// 
	
	LEDS_WriteBytes(0x17,0x00);	//OUT0启动延时	
	LEDS_WriteBytes(0x18,0x00);  //OUT1启动延时 
	LEDS_WriteBytes(0x19,0x00);  //OUT2启动延时	
	LEDS_WriteBytes(0x1a,0x00);  //OUT3启动延时 
	LEDS_WriteBytes(0x1b,0x00);  //OUT4启动延时 
	LEDS_WriteBytes(0x1c,0x00);  //OUT5启动延时 
	LEDS_WriteBytes(REG_CTRL,0x03); // blink enable | imax
	LEDS_WriteBytes(REG_CTRL,0x83); // blink enable | imax

	
	//LEDS_WriteBytes(REG_FULL_TIME, 0x12);   // 1260ms
	
	//LEDS_WriteBytes(REG_OUTPUT_P0, 0x00);   // 1260ms
	//LEDS_WriteBytes(REG_OUTPUT_P1, 0x00);   // 1260ms
	//LEDS_WriteBytes(REG_FULL_TIME, 0x12);   // 1260ms
	
	//LEDS_WriteBytes(REG_CTRL,0x03); // blink enable | imax
	//LEDS_WriteBytes(REG_DIM00,0x3f); // dimming
	//LEDS_WriteBytes(REG_DIM04,0x3f); // dimming
	ALP_PS_TRACE(MOD_ALP_PS,"aw9106_leds_blink end\n");
}
void Leds_Aw9106_Paoma_loop(void);
void Leds_Aw9106_Power_On(void);

void aw9106_leds_blink()
{
    unsigned char i;
	kal_uint8  data = 0x00;
	ALP_PS_TRACE(MOD_ALP_PS,"aw9106_leds_blink start\n");
	
	led_poweron();
	LEDS_i2c_udelay(30);
#if 0
	LEDS_WriteBytes(REG_WORK_MODE_P0, 0x00);   // led mode
	LEDS_WriteBytes(REG_WORK_MODE_P1, 0x00);   // led mode
	LEDS_WriteBytes(REG_CTRL,0x03); // blink enable | imax
	LEDS_WriteBytes(REG_DIM00,0x3f); // dimming
	LEDS_WriteBytes(REG_DIM04,0x3f); // dimming
	#else
	
	LEDS_WriteBytes(REG_WORK_MODE_P0, 0x00);   // led mode
	LEDS_WriteBytes(REG_WORK_MODE_P1, 0x00);   // led mode
	LEDS_WriteBytes(REG_CTRL,0x03); // blink enable | imax
	//Leds_Aw9106_Paoma_loop();
	Leds_Aw9106_Power_On();
	#endif
	ALP_PS_TRACE(MOD_ALP_PS,"aw9106_leds_blink end\n");
	
	//aw9106_leds_blink_1();

}
int leds_paoma_index = 0;
void Leds_Aw9106_Paoma_loop(void)
{
	StopTimer(TIMER_ID_TEMP_LED);

	switch(leds_paoma_index)
	{
		case 0:			
			LEDS_WriteBytes(REG_DIM00,0x3f); //关闭上一颗灯
			LEDS_WriteBytes(REG_DIM01,0x00); //打开一颗灯
			LEDS_WriteBytes(REG_DIM02,0x00); //打开一颗灯
			LEDS_WriteBytes(REG_DIM03,0x3f); //关闭上一颗灯
			LEDS_WriteBytes(REG_DIM04,0x00); //打开一颗灯
			LEDS_WriteBytes(REG_DIM05,0x00); //打开一颗灯
			break;
		case 1:
			LEDS_WriteBytes(REG_DIM00,0x00); //关闭上一颗灯
			LEDS_WriteBytes(REG_DIM01,0x3f); //打开一颗灯
			LEDS_WriteBytes(REG_DIM02,0x00); //打开一颗灯
			LEDS_WriteBytes(REG_DIM03,0x00); //关闭上一颗灯
			LEDS_WriteBytes(REG_DIM04,0x3f); //打开一颗灯
			LEDS_WriteBytes(REG_DIM05,0x00); //打开一颗灯
			break;			
		case 2:
			LEDS_WriteBytes(REG_DIM00,0x00); //关闭上一颗灯
			LEDS_WriteBytes(REG_DIM01,0x00); //打开一颗灯
			LEDS_WriteBytes(REG_DIM02,0x3f); //打开一颗灯
			LEDS_WriteBytes(REG_DIM03,0x00); //关闭上一颗灯
			LEDS_WriteBytes(REG_DIM04,0x00); //打开一颗灯
			LEDS_WriteBytes(REG_DIM05,0x3f); //打开一颗灯
			break;	
		case 3:
			LEDS_WriteBytes(REG_DIM00,0x3f); //关闭上一颗灯
			LEDS_WriteBytes(REG_DIM01,0x3f); //打开一颗灯
			LEDS_WriteBytes(REG_DIM02,0x00); //打开一颗灯
			LEDS_WriteBytes(REG_DIM03,0x3f); //关闭上一颗灯
			LEDS_WriteBytes(REG_DIM04,0x3f); //打开一颗灯
			LEDS_WriteBytes(REG_DIM05,0x00); //打开一颗灯
			break;
		case 4:
			LEDS_WriteBytes(REG_DIM00,0x3f); //关闭上一颗灯
			LEDS_WriteBytes(REG_DIM01,0x3f); //打开一颗灯
			LEDS_WriteBytes(REG_DIM02,0x3f); //打开一颗灯
			LEDS_WriteBytes(REG_DIM03,0x3f); //关闭上一颗灯
			LEDS_WriteBytes(REG_DIM04,0x3f); //打开一颗灯
			LEDS_WriteBytes(REG_DIM05,0x3f); //打开一颗灯
			break;	
		case 5:
			LEDS_WriteBytes(REG_DIM00,0x00); //关闭上一颗灯
			LEDS_WriteBytes(REG_DIM01,0x3f); //打开一颗灯
			LEDS_WriteBytes(REG_DIM02,0x3f); //打开一颗灯
			LEDS_WriteBytes(REG_DIM03,0x00); //关闭上一颗灯
			LEDS_WriteBytes(REG_DIM04,0x3f); //打开一颗灯
			LEDS_WriteBytes(REG_DIM05,0x3f); //打开一颗灯
			break;	
		case 6:
			LEDS_WriteBytes(REG_DIM00,0x3f); //关闭上一颗灯
			LEDS_WriteBytes(REG_DIM01,0x00); //打开一颗灯
			LEDS_WriteBytes(REG_DIM02,0x3f); //打开一颗灯
			LEDS_WriteBytes(REG_DIM03,0x3f); //关闭上一颗灯
			LEDS_WriteBytes(REG_DIM04,0x00); //打开一颗灯
			LEDS_WriteBytes(REG_DIM05,0x3f); //打开一颗灯
			break;	
		case 7:
			LEDS_WriteBytes(REG_DIM00,0x3f); //关闭上一颗灯
			LEDS_WriteBytes(REG_DIM01,0x00); //打开一颗灯
			LEDS_WriteBytes(REG_DIM02,0x00); //打开一颗灯
			LEDS_WriteBytes(REG_DIM03,0x00); //关闭上一颗灯
			LEDS_WriteBytes(REG_DIM04,0x00); //打开一颗灯
			LEDS_WriteBytes(REG_DIM05,0x3f); //打开一颗灯
			break;	
		case 8:
			LEDS_WriteBytes(REG_DIM00,0x3f); //关闭上一颗灯
			LEDS_WriteBytes(REG_DIM01,0x00); //打开一颗灯
			LEDS_WriteBytes(REG_DIM02,0x00); //打开一颗灯
			LEDS_WriteBytes(REG_DIM03,0x00); //关闭上一颗灯
			LEDS_WriteBytes(REG_DIM04,0x3f); //打开一颗灯
			LEDS_WriteBytes(REG_DIM05,0x00); //打开一颗灯
			break;	
		default:
			break;
	}
	leds_paoma_index++;
	leds_paoma_index = leds_paoma_index%9;
	
	StartTimer(TIMER_ID_TEMP_LED,800,Leds_Aw9106_Paoma_loop);
}
void leds_aw9106_poweron_then_led_close();


int leds_w9106_poweron_index = 0;
extern int check_charging_status;
void Leds_Aw9106_Power_On(void)
{
		StopTimer(TIMER_ID_TEMP_LED1);
		LEDS_WriteBytes(REG_DIM00,0x00);
		LEDS_WriteBytes(REG_DIM01,0x00);
		LEDS_WriteBytes(REG_DIM02,0x00);
		LEDS_WriteBytes(REG_DIM03,0x00);
		LEDS_WriteBytes(REG_DIM04,0x00);
		LEDS_WriteBytes(REG_DIM05,0x00); 

	switch(leds_w9106_poweron_index)
	{
		case 0:			
			LEDS_WriteBytes(REG_DIM00,0x3f); 
			LEDS_WriteBytes(REG_DIM03,0x3f); 
			break;
		case 1:
			LEDS_WriteBytes(REG_DIM01,0x3f); 
			LEDS_WriteBytes(REG_DIM04,0x3f); 
			break;			
		case 2:
			LEDS_WriteBytes(REG_DIM02,0x3f);
			LEDS_WriteBytes(REG_DIM05,0x3f);
			break;	
		case 3:
			LEDS_WriteBytes(REG_DIM00,0x3f); 
			LEDS_WriteBytes(REG_DIM01,0x3f);
			LEDS_WriteBytes(REG_DIM03,0x3f); 
			LEDS_WriteBytes(REG_DIM04,0x3f);
			break;
		case 4:
			LEDS_WriteBytes(REG_DIM00,0x3f); 
			LEDS_WriteBytes(REG_DIM02,0x3f);
			LEDS_WriteBytes(REG_DIM03,0x3f); 
			LEDS_WriteBytes(REG_DIM05,0x3f);
			break;	
		case 5:
			LEDS_WriteBytes(REG_DIM01,0x3f); 
			LEDS_WriteBytes(REG_DIM02,0x3f);
			LEDS_WriteBytes(REG_DIM04,0x3f); 
			LEDS_WriteBytes(REG_DIM05,0x3f);
			break;	
		case 6:
			LEDS_WriteBytes(REG_DIM00,0x3f);
			LEDS_WriteBytes(REG_DIM01,0x3f);
			LEDS_WriteBytes(REG_DIM02,0x3f);
			LEDS_WriteBytes(REG_DIM03,0x3f);
			LEDS_WriteBytes(REG_DIM04,0x3f);
			LEDS_WriteBytes(REG_DIM05,0x3f);
			break;	
		default:
			break;
	}
	
	leds_w9106_poweron_index++;
	if(leds_w9106_poweron_index == 7)
	{
		LEDS_WriteBytes(REG_DIM00,0x00);
		LEDS_WriteBytes(REG_DIM01,0x00);
		LEDS_WriteBytes(REG_DIM02,0x00);
		LEDS_WriteBytes(REG_DIM03,0x00);
		LEDS_WriteBytes(REG_DIM04,0x00);
		LEDS_WriteBytes(REG_DIM05,0x00); 
		
		StartTimer(TIMER_ID_TEMP_LED1,1200,leds_aw9106_poweron_then_led_close);
		return;
	}
	
	StartTimer(TIMER_ID_TEMP_LED1,800,Leds_Aw9106_Power_On);
}


int leds_w9106_key_index = 0;
void Leds_Aw9106_Key(void)
{
	StopTimer(TIMER_ID_TEMP_LED1);
	StopTimer(TIMER_ID_TEMP_LED2);
	StopTimer(TIMER_ID_TEMP_LED3);
	
	led_poweroff();
	
	LEDS_i2c_udelay(30);
	ALP_PS_TRACE(MOD_ALP_PS,"Leds_Aw9106_Key\n");
	led_poweron();
	LEDS_i2c_udelay(30);

	LEDS_WriteBytes(REG_WORK_MODE_P0, 0x00);   // led mode
	LEDS_WriteBytes(REG_WORK_MODE_P1, 0x00);   // led mode
	LEDS_WriteBytes(REG_CTRL,0x03); // blink enable | imax

	LEDS_WriteBytes(REG_DIM00,0x00);
	LEDS_WriteBytes(REG_DIM01,0x00);
	LEDS_WriteBytes(REG_DIM02,0x3f);
	LEDS_WriteBytes(REG_DIM03,0x00);
	LEDS_WriteBytes(REG_DIM04,0x00);
	LEDS_WriteBytes(REG_DIM05,0x3f); 
	
	StartTimer(TIMER_ID_TEMP_LED2,1000,led_poweroff);
}

int g_charge_led_on = 0;
void Leds_Aw9106_charge(void)
{
	int time = 5000;
	StopTimer(TIMER_ID_TEMP_LED1);
	StopTimer(TIMER_ID_TEMP_LED2);
	StopTimer(TIMER_ID_TEMP_LED3);
	
	led_poweroff();

	if(g_charge_led_on==0)
	{
		LEDS_i2c_udelay(30);
		ALP_PS_TRACE(MOD_ALP_PS,"Leds_Aw9106_Key\n");
		led_poweron();
		LEDS_i2c_udelay(30);

		LEDS_WriteBytes(REG_WORK_MODE_P0, 0x00);   // led mode
		LEDS_WriteBytes(REG_WORK_MODE_P1, 0x00);   // led mode
		LEDS_WriteBytes(REG_CTRL,0x03); // blink enable | imax

		LEDS_WriteBytes(REG_DIM00,0x3f);
		LEDS_WriteBytes(REG_DIM01,0x00);
		LEDS_WriteBytes(REG_DIM02,0x00);
		LEDS_WriteBytes(REG_DIM03,0x3f);
		LEDS_WriteBytes(REG_DIM04,0x00);
		LEDS_WriteBytes(REG_DIM05,0x00); 
		g_charge_led_on =1;
		time = 200;
	}
	else
	{
		g_charge_led_on = 0;
	}

	StartTimer(TIMER_ID_TEMP_LED_CHARGE,time,Leds_Aw9106_charge);
}
void leds_aw9106_poweron_then_led_close()
{
	StopTimer(TIMER_ID_TEMP_LED1);
	StopTimer(TIMER_ID_TEMP_LED2);
	StopTimer(TIMER_ID_TEMP_LED3);
	led_poweroff();
	if(check_charging_status == 1)
	{
		Leds_Aw9106_charge();
	}

}

void Leds_Aw9106_charge_complete(void)
{
	StopTimer(TIMER_ID_TEMP_LED1);
	StopTimer(TIMER_ID_TEMP_LED2);
	StopTimer(TIMER_ID_TEMP_LED3);
	StopTimer(TIMER_ID_TEMP_LED_CHARGE);
	led_poweroff();
	LEDS_i2c_udelay(30);
	ALP_PS_TRACE(MOD_ALP_PS,"Leds_Aw9106_Key\n");
	led_poweron();
	LEDS_i2c_udelay(30);

	LEDS_WriteBytes(REG_WORK_MODE_P0, 0x00);   // led mode
	LEDS_WriteBytes(REG_WORK_MODE_P1, 0x00);   // led mode
	LEDS_WriteBytes(REG_CTRL,0x03); // blink enable | imax

	LEDS_WriteBytes(REG_DIM00,0x00);
	LEDS_WriteBytes(REG_DIM01,0x3f);
	LEDS_WriteBytes(REG_DIM02,0x00);
	LEDS_WriteBytes(REG_DIM03,0x00);
	LEDS_WriteBytes(REG_DIM04,0x3f);
	LEDS_WriteBytes(REG_DIM05,0x00); 
	
}

int power_on_off_blink = 0;
void leds_aw9106_sos(void)
{
	unsigned char i;
	kal_uint8  data = 0x00;
	ALP_PS_TRACE(MOD_ALP_PS,"aw9106_leds_blink start\n");
	StopTimer(TIMER_ID_TEMP_LED1);
	StopTimer(TIMER_ID_TEMP_LED2);
	StopTimer(TIMER_ID_TEMP_LED3);
	led_poweroff();
	LEDS_i2c_udelay(30);
	led_poweron();
	LEDS_i2c_udelay(30);

	LEDS_WriteBytes(REG_WORK_MODE_P0, 0x00);   // led mode
	LEDS_WriteBytes(REG_WORK_MODE_P1, 0x00);   // led mode
	LEDS_WriteBytes(REG_CTRL,0x03); // blink enable | imax
	power_on_off_blink = power_on_off_blink%2;

	if(power_on_off_blink == 0)
	{
		LEDS_WriteBytes(REG_DIM00,0x3f);
		LEDS_WriteBytes(REG_DIM01,0x00);
		LEDS_WriteBytes(REG_DIM02,0x00);

		LEDS_WriteBytes(REG_DIM03,0x3f);
		LEDS_WriteBytes(REG_DIM04,0x00);
		LEDS_WriteBytes(REG_DIM05,0x00);
	}
	else
	{
		LEDS_WriteBytes(REG_DIM00,0x00);
		LEDS_WriteBytes(REG_DIM01,0x00);
		LEDS_WriteBytes(REG_DIM02,0x00);

		LEDS_WriteBytes(REG_DIM03,0x00);
		LEDS_WriteBytes(REG_DIM04,0x00);
		LEDS_WriteBytes(REG_DIM05,0x00);
	}
	power_on_off_blink ++;
	
	StartTimer(TIMER_ID_TEMP_LED3,800,leds_aw9106_sos);
}


void Leds_Aw9106_charge_out(void)
{
	StopTimer(TIMER_ID_TEMP_LED_CHARGE);
	led_poweroff();
}

void leds_aw9106_led_sos_stop(void)
{
	StopTimer(TIMER_ID_TEMP_LED3);
}

void Leds_Aw9106_Power_Off()
{
}

#endif
