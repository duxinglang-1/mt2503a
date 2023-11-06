
#if defined(__GPS_SUPPORT__) && defined(__AUGUST_ALL_FUNC_SUPPORT__)

#include "august_gps.h"
AU_U8 g_august_gps_state = 0;

au_gps_data_struct au_gps_data;
au_agps_data_struct au_agps_data;

static AU_U8 gps_calc_nmea_checksum(const AU_S8 *sentence)
{
	AU_U8 checksum = 0;
	
	while(*sentence)
	{
		checksum ^= (AU_U8)*sentence++;
	}

	return checksum;
}

void gps_ate_send_pmtk_command(AU_U32 data_len, AU_U8 *data_str)
{
    U32 written = 0;

    mdi_gps_uart_write((U16)mdi_get_gps_port(), data_str, data_len, &written);
}


void au_gps_set_agps_data(void)
{
	au_agps_data_struct *agps_data = &au_agps_data;
	au_gps_data_struct *gps_data = &au_gps_data;
	
	agps_data->status = 1;
	agps_data->latitude = gps_data->latitude;
	agps_data->longitude = gps_data->longitude;
	memcpy(&agps_data.utc_date,&gps_data->utc_date,sizeof(au_gps_utc_date_struct));
	memcpy(&agps_data.utc_time,&gps_data->utc_time,sizeof(au_gps_utc_time_struct));
}

void gps_send_agps_data(void)
{
	AU_U8 buff[128]={0},buff2[128]={0};
	au_agps_data_struct *agps_data = &au_agps_data;
	AU_U8 checksum;
	AU_U32 len;
	
	if(agps_data->status)
	{
		sprintf(buff,"$PMTK741,%f,%f,%f,%04d,%02d,%02d,%02d,%02d,%02d",agps_data->latitude,agps_data->longitude
			agps_data->altitude,agps_data->utc_date.year,agps_data->utc_date.month,agps_data->utc_date.day
			,agps_data->utc_time.hour,agps_data->utc_time.minute,agps_data->utc_time.second);
		checksum = gps_calc_nmea_checksum(buff+1);

		sprintf(buff2,"%s*%x\x0d\x0a",buff,checksum);
		len = strlen(buff2);
		gps_ate_send_pmtk_command(len,buff2);
	}
}

static void au_gps_nmea_rmc_callback(mdi_gps_nmea_rmc_struct *param)
{
	au_gps_data_struct *gps_data = &au_gps_data;
	static AU_U8 times = 0;
	AU_U8 buff[128] = {0};
	
	if(param)
	{
		gps_data->latitude = param->latitude;
		gps_data->longitude = param->longitude;
		gps_data->north_south = param->north_south;
		gps_data->east_west = param->east_west;
		gps_data->status = param->status;
		gps_data->utc_date.year = 2000+param->utc_date.year;
		gps_data->utc_date.month = param->utc_date.month;
		gps_data->utc_date.day = param->utc_date.day;
		gps_data->utc_time.hour = param->utc_time.hour;
		gps_data->utc_time.minute = param->utc_time.minute;
		gps_data->utc_time.second = param->utc_time.second;	

		sprintf(buff,"lat:%.6f,lon:%.6f; %04d-%02d-%02d %02d:%02d:%02d\r\n"
			gps_data->latitude,gps_data->longitude,gps_data->utc_date.year,gps_data->utc_date.month,gps_data->utc_date.day
			gps_data->utc_time.hour,gps_data->utc_time.minute,gps_data->utc_time.second);
		dbg_print(...);

		if(param->status == 'A')
		{
			times++;
			if(times>=5)
			{
				times = 0;
				au_gps_location_finish();
			}
		}
		else
		{
			times = 0;
		}
	}
}


static void au_gps_nmea_gga_callback(mdi_gps_nmea_gga_struct *param)
{
	if(param)
	{
		au_gps_data.altitude = param->altitude;
	}
}


void au_minigps_gps_callback(mdi_gps_parser_info_enum type, void *buffer, AU_U32 length)
{
	dbg_print("au_minigps_gps_callback\r\n");
	if(buffer)
	{
		switch(type)
		{
			case MDI_GPS_PARSER_NMEA_RMC:
				au_gps_nmea_rmc_callback((mdi_gps_nmea_rmc_struct *)buffer);
			break;
			case MDI_GPS_PARSER_NMEA_GGA:
				au_gps_nmea_gga_callback((mdi_gps_nmea_gga_struct *)buffer);
			break;
			default:
			break;
		}
	}
}

void au_gps_location_timerout(void)
{
	StopTimer(AU_TIMER_ID_GPS_TIMEROUT);
	au_gps_turn_off();
}

void au_gps_location_finish(void)
{
	StopTimer(AU_TIMER_ID_GPS_TIMEROUT);
	au_gps_set_agps_data();
	au_gps_turn_off();
}

void au_gps_turn_on(void)
{
	if(g_august_gps_state == 0)
	{
		dbg_print("au_gps_turn_on\r\n");
		g_august_gps_state = 1;
		gps_enter_normal_fix_mode();
		mdi_gps_uart_open((U16)mdi_get_gps_port(), MDI_GPS_UART_MODE_LOCATION, au_minigps_gps_callback);
		StartTimer(AU_TIMER_ID_SEND_AGPS,1000,gps_send_agps_data);	
		StartTimer(AU_TIMER_ID_GPS_TIMEROUT,90*1000,au_gps_location_timerout);	
	}
}

void au_gps_turn_off(void)
{
	if(g_august_gps_state == 1)
	{
		dbg_print("au_gps_turn_off\r\n");
		mdi_gps_uart_close((U16)mdi_get_gps_port(), MDI_GPS_UART_MODE_LOCATION, au_minigps_gps_callback);
		gps_enter_power_saving_mode(); 
	}
}

#endif

