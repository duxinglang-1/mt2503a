





#ifdef __CUST_NEW__
#include "kal_release.h"
#include "dcl.h"
#include "aw9106_i2c_operation.h"
#include "us_timer.h"               /* For ust_get_current_time() API*/
#include "kal_trace.h"

kal_bool aw9106_i2c_configure_done = KAL_FALSE;
	
extern const char gpio_aw9106_i2c_data_pin;
extern const char gpio_aw9106_i2c_clk_pin;

DCL_HANDLE aw9106_i2c_handle;
DCL_HANDLE aw9106_pmu_handle;

#define AW9106_DEVICE_ADD_H 0xB6
#define AW9106_DEVICE_ADD_L 0xB7


//i2c delay for 400KHz speed 
#define aw9106_I2C_0P6US_DELAY \
{\
	volatile int count = 0;\
	/*0.048us per cycle*/\
	for(;count<14;count++) ;\
}

//i2c delay for 400KHz speed 
#define aw9106_I2C_1P3US_DELAY \
{\
	volatile int count = 0;\
	/*0.048us per cycle*/\
	for(;count<28;count++) ;\
}

#define	T_w_SCL_L_MIN		aw9106_I2C_1P3US_DELAY
#define	T_w_SCL_H_MIN		aw9106_I2C_0P6US_DELAY 
#define	T_h_ST_MIN			aw9106_I2C_0P6US_DELAY 
#define	T_su_SR_MIN		aw9106_I2C_0P6US_DELAY 
#define	T_su_SP_MIN		aw9106_I2C_0P6US_DELAY 

kal_int32 aw9106_i2c_configure(kal_uint32 slave_addr, kal_uint32 speed)
{
	I2C_CONFIG_T cfg;
	DCL_STATUS status = STATUS_OK;
	
	if(gpio_aw9106_i2c_data_pin == 0xFF) // HW I2C
	{
		if(!aw9106_i2c_configure_done)
		{
			aw9106_i2c_handle = DclSI2C_Open(DCL_I2C, DCL_I2C_OWNER_MS);
		}
		cfg.eOwner = DCL_I2C_OWNER_MS;
		cfg.fgGetHandleWait = KAL_TRUE;
		cfg.u1SlaveAddress = slave_addr ;
		cfg.u1DelayLen = 0;
		cfg.eTransactionMode = DCL_I2C_TRANSACTION_FAST_MODE;
		cfg.u4FastModeSpeed = speed;
		cfg.u4HSModeSpeed = 0;
		cfg.fgEnableDMA = KAL_FALSE;
  	
		status = DclSI2C_Configure(aw9106_i2c_handle, (DCL_CONFIGURE_T *)&cfg);
	}
	
	aw9106_i2c_configure_done = KAL_TRUE;
	return status;
}

void aw9106_i2c_power_on(kal_bool ON, kal_uint32 ldo, kal_uint32 ldo_volt)
{
	PMU_CTRL_LDO_BUCK_SET_VOLTAGE_EN pmu_ldo_voltage_en;
	PMU_CTRL_LDO_BUCK_SET_EN pmu_ldo_en;
		
	if (aw9106_pmu_handle==DCL_HANDLE_NONE)
		aw9106_pmu_handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
	
	if( ON && (ldo_volt != 0) )
	{
		pmu_ldo_voltage_en.mod = (PMU_LDO_BUCK_LIST_ENUM)ldo;
		pmu_ldo_voltage_en.voltage = (PMU_VOLTAGE_ENUM)ldo_volt;
		DclPMU_Control(aw9106_pmu_handle, LDO_BUCK_SET_VOLTAGE_EN,(DCL_CTRL_DATA_T *)& pmu_ldo_voltage_en);
	}
	else if( ON && (ldo_volt == 0) )
	{
		pmu_ldo_en.mod = (PMU_LDO_BUCK_LIST_ENUM)ldo;
		pmu_ldo_en.enable = KAL_TRUE;
		DclPMU_Control(aw9106_pmu_handle, LDO_BUCK_SET_EN,(DCL_CTRL_DATA_T *)&pmu_ldo_en);
	}
	else
	{
		pmu_ldo_en.mod = (PMU_LDO_BUCK_LIST_ENUM)ldo;
		pmu_ldo_en.enable = KAL_FALSE;
		DclPMU_Control(aw9106_pmu_handle, LDO_BUCK_SET_EN,(DCL_CTRL_DATA_T *)&pmu_ldo_en);
	}
}

// Start bit of I2C waveform
void aw9106_i2c_start(void)
{
	DCL_HANDLE sda_handle, scl_handle;
	if(gpio_aw9106_i2c_data_pin == 0xFF) // HW I2C
	{

	}
	else
	{		
		sda_handle = DclGPIO_Open(DCL_GPIO, gpio_aw9106_i2c_data_pin);
		scl_handle = DclGPIO_Open(DCL_GPIO, gpio_aw9106_i2c_clk_pin);
		
		DclGPIO_Control(sda_handle, GPIO_CMD_SET_MODE_0, NULL);
		DclGPIO_Control(scl_handle,  GPIO_CMD_SET_MODE_0, NULL);
		
		DclGPIO_Control(sda_handle, GPIO_CMD_SET_DIR_OUT, NULL);		
		DclGPIO_Control(scl_handle,  GPIO_CMD_SET_DIR_OUT, NULL);
		
		DclGPIO_Control(sda_handle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(scl_handle, GPIO_CMD_WRITE_HIGH, NULL);
	
		DclGPIO_Control(sda_handle, GPIO_CMD_WRITE_LOW, NULL);
		DclGPIO_Control(scl_handle, GPIO_CMD_WRITE_HIGH, NULL);
		T_h_ST_MIN;
	
		DclGPIO_Control(scl_handle, GPIO_CMD_WRITE_LOW, NULL);
	}
}

// Stop bit of I2C waveform
void aw9106_i2c_stop(void)
{
	DCL_HANDLE sda_handle, scl_handle;
	if(gpio_aw9106_i2c_data_pin == 0xFF) // HW I2C
	{

	}
	else
	{		
		sda_handle = DclGPIO_Open(DCL_GPIO, gpio_aw9106_i2c_data_pin);
		scl_handle = DclGPIO_Open(DCL_GPIO, gpio_aw9106_i2c_clk_pin);
		
		DclGPIO_Control(sda_handle, GPIO_CMD_SET_MODE_0, NULL);
		DclGPIO_Control(scl_handle, GPIO_CMD_SET_MODE_0, NULL);
		
		DclGPIO_Control(sda_handle, GPIO_CMD_SET_DIR_OUT, NULL);
		DclGPIO_Control(scl_handle, GPIO_CMD_SET_DIR_OUT, NULL);
		
		DclGPIO_Control(sda_handle, GPIO_CMD_WRITE_LOW, NULL);
		DclGPIO_Control(scl_handle, GPIO_CMD_WRITE_HIGH, NULL);

		DclGPIO_Control(sda_handle, GPIO_CMD_WRITE_HIGH, NULL);
		T_su_SP_MIN;
	}
}

// Send one byte from host to client
kal_int32 aw9106_i2c_send_byte(kal_uint8 ucData)
{
	//kal_bool bRet;
	int i;
	kal_uint8 ucMask;
	DCL_STATUS status = STATUS_OK;
	GPIO_CTRL_READ_T sda_read;
	I2C_CTRL_CONT_WRITE_T write;
	DCL_HANDLE sda_handle, scl_handle;

	if(gpio_aw9106_i2c_data_pin == 0xFF) // HW I2C
	{
		if(aw9106_i2c_configure_done)
		{
			write.pu1Data = &ucData;
			write.u4DataLen = 1;
			write.u4TransferNum = 1;
			status = DclSI2C_Control(aw9106_i2c_handle, I2C_CMD_CONT_WRITE, (DCL_CTRL_DATA_T *)&write);
		}
		if(status != STATUS_OK) return status;
	}
	else
	{
		sda_handle = DclGPIO_Open(DCL_GPIO, gpio_aw9106_i2c_data_pin);
		scl_handle = DclGPIO_Open(DCL_GPIO, gpio_aw9106_i2c_clk_pin);
		
		DclGPIO_Control(sda_handle, GPIO_CMD_SET_MODE_0, NULL);
		DclGPIO_Control(scl_handle, GPIO_CMD_SET_MODE_0, NULL);
		
		DclGPIO_Control(sda_handle, GPIO_CMD_SET_DIR_OUT, NULL);
		DclGPIO_Control(scl_handle, GPIO_CMD_SET_DIR_OUT, NULL);
		
		for(i = 0, ucMask = 0x80; i < 8; i++, ucMask >>= 1)
		{
			if(ucData & ucMask)
				DclGPIO_Control(sda_handle, GPIO_CMD_WRITE_HIGH, NULL);
			else
				DclGPIO_Control(sda_handle, GPIO_CMD_WRITE_LOW, NULL);
			DclGPIO_Control(scl_handle, GPIO_CMD_WRITE_HIGH, NULL);
			T_w_SCL_H_MIN;
			DclGPIO_Control(scl_handle, GPIO_CMD_WRITE_LOW, NULL);
			T_w_SCL_L_MIN;
		}
		DclGPIO_Control(sda_handle, GPIO_CMD_SET_DIR_IN, NULL);
	
		DclGPIO_Control(sda_handle, GPIO_CMD_READ, (DCL_CTRL_DATA_T *)&sda_read);
		
		DclGPIO_Control(scl_handle, GPIO_CMD_WRITE_HIGH, NULL);
		T_w_SCL_H_MIN;
		DclGPIO_Control(scl_handle, GPIO_CMD_WRITE_LOW, NULL);
		T_w_SCL_L_MIN;
	
		status = (sda_read.u1IOData == GPIO_IO_LOW)?AW9106_I2C_ACK:AW9106_I2C_NAK;
	}
	return status;
}


// Receive one byte form client to host 
kal_uint8 aw9106_i2c_receive_byte(kal_bool bAck)
{
	kal_uint8 ucRet = 0;
	int i;
	I2C_CTRL_CONT_READ_T read;
	GPIO_CTRL_READ_T sda_read;
	DCL_STATUS status = STATUS_OK;
	DCL_HANDLE sda_handle, scl_handle;
	
	if(gpio_aw9106_i2c_data_pin == 0xFF) // HW I2C
	{
		if(aw9106_i2c_configure_done)
		{
			read.pu1Data = &ucRet;
			read.u4DataLen = 1;
			read.u4TransferNum = 1;
			status = DclSI2C_Control(aw9106_i2c_handle, I2C_CMD_CONT_READ, (DCL_CTRL_DATA_T *)&read);
			if(status != STATUS_OK)
				return 0;
		}
	}
	else
	{
		sda_handle = DclGPIO_Open(DCL_GPIO, gpio_aw9106_i2c_data_pin);
		scl_handle = DclGPIO_Open(DCL_GPIO, gpio_aw9106_i2c_clk_pin);
		
		DclGPIO_Control(sda_handle, GPIO_CMD_SET_MODE_0, NULL);
		DclGPIO_Control(scl_handle, GPIO_CMD_SET_MODE_0, NULL);
		
		DclGPIO_Control(sda_handle, GPIO_CMD_SET_DIR_IN, NULL);
		DclGPIO_Control(scl_handle, GPIO_CMD_SET_DIR_OUT, NULL);
		
		for(i = 7; i >= 0; i--)
		{
			DclGPIO_Control(sda_handle, GPIO_CMD_READ, (DCL_CTRL_DATA_T *)&sda_read);
			ucRet |= sda_read.u1IOData << i;
	
			DclGPIO_Control(scl_handle, GPIO_CMD_WRITE_HIGH, NULL);
			T_w_SCL_H_MIN;
			DclGPIO_Control(scl_handle, GPIO_CMD_WRITE_LOW, NULL);
			T_w_SCL_L_MIN;
		}
	
		DclGPIO_Control(sda_handle, GPIO_CMD_SET_DIR_OUT, NULL);
	
		if(bAck)
			DclGPIO_Control(sda_handle, GPIO_CMD_WRITE_HIGH, NULL);
		else
			DclGPIO_Control(sda_handle, GPIO_CMD_WRITE_LOW, NULL);
	
		DclGPIO_Control(scl_handle, GPIO_CMD_WRITE_HIGH, NULL);
		T_w_SCL_H_MIN;
		DclGPIO_Control(scl_handle, GPIO_CMD_WRITE_LOW, NULL);
		T_w_SCL_L_MIN;

	}
	return ucRet;
}

// I2C send data fuction
kal_int32 aw9106_i2c_send(kal_uint8 ucDeviceAddr, kal_uint8 ucBufferIndex, kal_uint8* pucData, kal_uint32 unDataLength)
{
	kal_uint32 i;
	kal_uint8 write_buf[9];
	I2C_CTRL_CONT_WRITE_T write;
	DCL_STATUS status = STATUS_OK;

	if(gpio_aw9106_i2c_data_pin == 0xFF) // HW I2C
	{
		if(aw9106_i2c_configure_done)
		{
			write_buf[0] = ucBufferIndex;
			for(i=0;i<unDataLength;i++)
			{
				write_buf[i+1] = *(pucData+i);
			}
			write.pu1Data = write_buf;
			write.u4DataLen = unDataLength+1;
			write.u4TransferNum = 1;
			status = DclSI2C_Control(aw9106_i2c_handle, I2C_CMD_CONT_WRITE, (DCL_CTRL_DATA_T *)&write);
			if(status != STATUS_OK) return status;
		}
	}
	else
	{
		aw9106_i2c_start();
	
		if(aw9106_i2c_send_byte(ucDeviceAddr & 0xFE) == AW9106_I2C_ACK)
		{
			if(aw9106_i2c_send_byte(ucBufferIndex) == AW9106_I2C_ACK)
			{
				for(i = 0; i < unDataLength; i++)
				{
					if(aw9106_i2c_send_byte(pucData[i]) == AW9106_I2C_NAK)
					{
						status = STATUS_INVALID_OPERATION;
						break;
					}
				}
			}
			else
			{
				status = STATUS_INVALID_OPERATION;
			}
		}
		else
		{
			status = STATUS_INVALID_OPERATION;
		}
		aw9106_i2c_stop();
	}
	return status;
}

kal_int32 aw9106_i2c_send_ext(kal_uint8 ucDeviceAddr, kal_uint16 ucBufferIndex, kal_uint8* pucData, kal_uint32 unDataLength)
{
	kal_uint32 i;
	kal_uint8 write_buf[10];
	I2C_CTRL_CONT_WRITE_T write;
	DCL_STATUS status = STATUS_OK;
	kal_uint8 addr_h = ( ucBufferIndex >> 8 )& 0xFF;
	kal_uint8 addr_l = ucBufferIndex&0xFF;
	kal_uint32 offset = 0;
	kal_uint8  pkt_len;

	if(gpio_aw9106_i2c_data_pin == 0xFF) // HW I2C
	{
		if(aw9106_i2c_configure_done)
		{
			while ( offset <= unDataLength )
			{
				write_buf[0] = ((ucBufferIndex + offset)>>8)&0xFF;
				write_buf[1] = (ucBufferIndex + offset)&0xFF;
          			if ( unDataLength - offset > 6 )
				{
					pkt_len = 6;
				}
				else
				{
					pkt_len = unDataLength - offset;
				}
				memcpy( &write_buf[2], &pucData[offset], pkt_len );
				offset += pkt_len;
				write.pu1Data = write_buf;
				write.u4DataLen = pkt_len+2;
				write.u4TransferNum = 1;
				status = DclSI2C_Control(aw9106_i2c_handle, I2C_CMD_CONT_WRITE, (DCL_CTRL_DATA_T *)&write);
				if(status != STATUS_OK) return status;
					
				if ( offset == unDataLength )
					break;					
			}
		}
	}
	else
	{
		aw9106_i2c_start();
	
		if(aw9106_i2c_send_byte(ucDeviceAddr & 0xFE) == AW9106_I2C_ACK)
		{
			if ( (aw9106_i2c_send_byte(addr_h) == AW9106_I2C_ACK) &&
				(aw9106_i2c_send_byte(addr_l) == AW9106_I2C_ACK) )
			{
				for(i = 0; i < unDataLength; i++)
				{
					if(aw9106_i2c_send_byte(pucData[i]) == AW9106_I2C_NAK)
					{
						status = STATUS_INVALID_OPERATION;
						break;
					}
				}
			}
			else
			{
				status = STATUS_INVALID_OPERATION;
			}
		}
		else
		{
			status = STATUS_INVALID_OPERATION;
		}
		aw9106_i2c_stop();
	}
	return status;
}

// I2C receive data function
kal_int32 aw9106_i2c_receive(kal_uint8 ucDeviceAddr, kal_uint8 ucBufferIndex, kal_uint8* pucData, kal_uint32 unDataLength)
{
	kal_uint32 i;
	DCL_STATUS status = STATUS_OK;
	I2C_CTRL_WRITE_AND_READE_T write_read;

	if(gpio_aw9106_i2c_data_pin == 0xFF) // HW I2C
	{
		if(aw9106_i2c_configure_done)
		{
			write_read.pu1InData = pucData;
			write_read.u4InDataLen = unDataLength;
			write_read.pu1OutData = &ucBufferIndex;			
			write_read.u4OutDataLen = 1;
			status = DclSI2C_Control(aw9106_i2c_handle, I2C_CMD_WRITE_AND_READ, (DCL_CTRL_DATA_T *)&write_read);
			if(status != STATUS_OK) return status;
		}
	}
	else
	{
		aw9106_i2c_start();
  	
		if(aw9106_i2c_send_byte(ucDeviceAddr & 0xFE) == AW9106_I2C_ACK)
		{
			if(aw9106_i2c_send_byte(ucBufferIndex) == AW9106_I2C_ACK)
			{
				aw9106_i2c_start();
  	
				if(aw9106_i2c_send_byte(ucDeviceAddr | 0x01) == AW9106_I2C_ACK)
				{
					for(i = 0; i < unDataLength - 1; i++)
					{
						pucData[i] = aw9106_i2c_receive_byte((kal_bool)AW9106_I2C_ACK);
					}
					pucData[unDataLength - 1] = aw9106_i2c_receive_byte((kal_bool)AW9106_I2C_NAK);
				}
				else
				{
					status = STATUS_INVALID_OPERATION;		
				}
			}
			else
			{
				status = STATUS_INVALID_OPERATION;			
			}
		}
		else
		{
			status = STATUS_INVALID_OPERATION;				
		}
		aw9106_i2c_stop();
	}
	return status;
}

// I2C receive data function
kal_int32 aw9106_i2c_receive_ext(kal_uint8 ucDeviceAddr, kal_uint16 ucBufferIndex, kal_uint8* pucData, kal_uint32 unDataLength)
{
	kal_uint32 i;
	DCL_STATUS status = STATUS_OK;
	I2C_CTRL_WRITE_AND_READE_T write_read;
	kal_uint8 write_buf[2];
	kal_uint16 reg_addr = ucBufferIndex;
	kal_uint32 offset = 0;
	kal_uint8  pkt_len;
	kal_uint8 addr_h = ( ucBufferIndex >> 8 )& 0xFF;
	kal_uint8 addr_l = ucBufferIndex&0xFF;

	if(gpio_aw9106_i2c_data_pin == 0xFF) // HW I2C
	{
		if(aw9106_i2c_configure_done)
		{
			while ( offset < unDataLength )
			{
				write_buf[0] = ( reg_addr >> 8 )& 0xFF;
				write_buf[1] = reg_addr&0xFF;
				if ( unDataLength - offset > 8 )
				{
					pkt_len = 8;
				}
				else
				{
					pkt_len = unDataLength - offset;
				}
				write_read.pu1InData = pucData + offset;
				write_read.u4InDataLen = pkt_len;
				write_read.pu1OutData = write_buf;			
				write_read.u4OutDataLen = 2;
				status = DclSI2C_Control(aw9106_i2c_handle, I2C_CMD_WRITE_AND_READ, (DCL_CTRL_DATA_T *)&write_read);
				if(status != STATUS_OK) return status;
				offset += pkt_len;
				reg_addr = ucBufferIndex + offset;
			}
		}
	}
	else
	{
		aw9106_i2c_start();
  	
		if(aw9106_i2c_send_byte(ucDeviceAddr & 0xFE) == AW9106_I2C_ACK)
		{
			if ( (aw9106_i2c_send_byte(addr_h) == AW9106_I2C_ACK) &&
				(aw9106_i2c_send_byte(addr_l) == AW9106_I2C_ACK) )
			{
				aw9106_i2c_start();
  	
				if(aw9106_i2c_send_byte(ucDeviceAddr | 0x01) == AW9106_I2C_ACK)
				{
					for(i = 0; i < unDataLength - 1; i++)
					{
						pucData[i] = aw9106_i2c_receive_byte((kal_bool)AW9106_I2C_ACK);
					}
					pucData[unDataLength - 1] = aw9106_i2c_receive_byte((kal_bool)AW9106_I2C_NAK);
				}
				else
				{
					status = STATUS_INVALID_OPERATION;
				}
			}
			else
			{
				status = STATUS_INVALID_OPERATION;
			}
		}
		else
		{
			status = STATUS_INVALID_OPERATION;
		}
		aw9106_i2c_stop();
	}
	return status;
}


kal_int32 i2c_smbus_write_byte_data(unsigned char reg_addr, unsigned char reg_data)
{
	return aw9106_i2c_send(AW9106_DEVICE_ADD_L,reg_addr,1);
}

kal_int32 i2c_smbus_read_byte_data(unsigned char reg_addr, unsigned char* reg_data)
{
	return aw9106_i2c_receive(AW9106_DEVICE_ADD_L,reg_addr,reg_data,1);
}
#endif //#ifdef __CUST_NEW__

