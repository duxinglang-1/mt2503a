#include "kal_release.h" 
kal_char* release_verno(void) 
{ 
   static kal_char verno_str[] = "MAUI.11C.W13.52.SP3.V3"; 
   return verno_str; 
} 
kal_char* release_hal_verno(void) 
{ 
   static kal_char hal_verno_str[] = ""; 
   return hal_verno_str; 
} 
kal_char* release_hw_ver(void) 
{ 
   static kal_char hw_ver_str[] = "OVIPHONE03A_11C_HW"; 
   return hw_ver_str; 
} 
kal_char* build_date_time(void) 
{ 
   static kal_char build_date_time_str[] = "2020/09/22 16:44"; 
   return build_date_time_str; 
} 
kal_char* release_build(void) 
{ 
   static kal_char build_str[] = "BUILD_NO"; 
   return build_str; 
} 
kal_char* release_branch(void) 
{ 
   static kal_char build_branch_str[] = "11CW1352SP3 AURI"; 
   return build_branch_str; 
} 
kal_char* release_flavor(void) 
{ 
   static kal_char build_flavor_str[] = "NONE"; 
   return build_flavor_str; 
} 
