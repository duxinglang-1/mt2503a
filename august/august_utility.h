
#ifndef AUGUST_UTILITY_H
#define AUGUST_UTILITY_H

#include "TimerEvents.h" 

typedef unsigned char AU_U8;
typedef char          AU_S8;
typedef short AU_S16;
typedef unsigned short AU_U16 ;
typedef unsigned int AU_U32;
typedef int AU_S32;

typedef unsigned long       AU_ULONG;
typedef unsigned __int64    AU_U64;


typedef enum
{
	AU_TIMER_ID_SEND_AGPS = AUGUST_TIMER_ID_START,
	AU_TIMER_ID_GPS_TIMEROUT,
}AUGUST_TIMER_ID;

#endif
