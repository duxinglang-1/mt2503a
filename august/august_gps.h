

#ifndef AUGUST_GPS_H
#define AUGUST_GPS_H

#if defined(__GPS_SUPPORT__) && defined(__AUGUST_ALL_FUNC_SUPPORT__)
#include "august_utility.h"

/*UTC time structure*/
typedef struct{
	AU_S8 hour; /* hour */
	AU_S8 minute; /* minute */
	AU_S8 second; /* second */
} au_gps_utc_time_struct;

/*UTC date structure*/
typedef struct{
	AU_S16 year;  /* year */
	AU_S8 month; /* month */
	AU_S8 day;   /* day */
} au_gps_utc_date_struct;

/*au gps data*/
typedef struct
{
	double latitude;		/* latitude */ 
	double longitude;		/* longitude */ 
	AU_S8 north_south;		/* north or south */
	AU_S8 east_west;		/* east or west */ 
	AU_S8 status; 			/* status */ 
	double  altitude;               /*Antenna Altitude above/below mean-sea-level (geoid)*/
	au_gps_utc_time_struct utc_time;		/*Time (UTC)*/
	au_gps_utc_date_struct utc_date;		/*Date (UTC)*/
}au_gps_data_struct;

/*au agps data*/
typedef struct
{
	AU_S8 status;
	double latitude;		/* latitude */ 
	double longitude;		/* longitude */ 
	double  altitude;               /*Antenna Altitude above/below mean-sea-level (geoid)*/
	au_gps_utc_time_struct utc_time;		/*Time (UTC)*/
	au_gps_utc_date_struct utc_date;		/*Date (UTC)*/
}au_agps_data_struct;

#endif // defined(__GPS_SUPPORT__) && defined(__AUGUST_ALL_FUNC_SUPPORT__)
#endif  // AUGUST_GPS_H