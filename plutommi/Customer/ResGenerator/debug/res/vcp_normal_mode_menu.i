# 1 "temp/res/vcp_normal_mode_menu.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "temp/res/vcp_normal_mode_menu.c"
# 1 "../../mmi/inc/MMI_features.h" 1
# 69 "../../mmi/inc/MMI_features.h"
# 1 "../../mmi/inc/MMI_features_switch.h" 1
# 67 "../../mmi/inc/MMI_features_switch.h"
# 1 "../../mmi/inc/MMI_features_type.h" 1
# 68 "../../mmi/inc/MMI_features_switch.h" 2
# 70 "../../mmi/inc/MMI_features.h" 2
# 2 "temp/res/vcp_normal_mode_menu.c" 2
# 1 "../../framework/interface/MMIDataType.h" 1
# 937 "../../framework/interface/MMIDataType.h"
# 1 "../../mmi/inc/stdafx.h" 1
# 107 "../../mmi/inc/stdafx.h"
# 1 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/stdlib.h" 1 3
# 31 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/stdlib.h" 3
# 1 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/_mingw.h" 1 3
# 32 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/stdlib.h" 2 3






# 1 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/stddef.h" 1 3





# 1 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/lib/gcc-lib/mingw32/3.3.1/include/stddef.h" 1 3 4
# 220 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/lib/gcc-lib/mingw32/3.3.1/include/stddef.h" 3 4
typedef unsigned int size_t;
# 332 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/lib/gcc-lib/mingw32/3.3.1/include/stddef.h" 3 4
typedef short unsigned int wchar_t;
# 7 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/stddef.h" 2 3
# 39 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/stdlib.h" 2 3
# 88 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/stdlib.h" 3
extern int _argc;
extern char** _argv;




extern int* __attribute__((__cdecl__)) __p___argc(void);
extern char*** __attribute__((__cdecl__)) __p___argv(void);
extern wchar_t*** __attribute__((__cdecl__)) __p___wargv(void);
# 129 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/stdlib.h" 3
   extern __attribute__((dllimport)) int __mb_cur_max;
# 154 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/stdlib.h" 3
 int* __attribute__((__cdecl__)) _errno(void);


 int* __attribute__((__cdecl__)) __doserrno(void);
# 166 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/stdlib.h" 3
  extern char *** __attribute__((__cdecl__)) __p__environ(void);
  extern wchar_t *** __attribute__((__cdecl__)) __p__wenviron(void);
# 189 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/stdlib.h" 3
  extern __attribute__((dllimport)) int _sys_nerr;
# 213 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/stdlib.h" 3
extern __attribute__((dllimport)) char* _sys_errlist[];
# 226 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/stdlib.h" 3
extern unsigned __attribute__((__cdecl__)) int* __p__osver(void);
extern unsigned __attribute__((__cdecl__)) int* __p__winver(void);
extern unsigned __attribute__((__cdecl__)) int* __p__winmajor(void);
extern unsigned __attribute__((__cdecl__)) int* __p__winminor(void);







extern __attribute__((dllimport)) unsigned int _osver;
extern __attribute__((dllimport)) unsigned int _winver;
extern __attribute__((dllimport)) unsigned int _winmajor;
extern __attribute__((dllimport)) unsigned int _winminor;
# 277 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/stdlib.h" 3
 char** __attribute__((__cdecl__)) __p__pgmptr(void);

 wchar_t** __attribute__((__cdecl__)) __p__wpgmptr(void);
# 310 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/stdlib.h" 3
extern __attribute__((dllimport)) int _fmode;
# 326 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/stdlib.h" 3
 double __attribute__((__cdecl__)) atof (const char*);
 int __attribute__((__cdecl__)) atoi (const char*);
 long __attribute__((__cdecl__)) atol (const char*);

 int __attribute__((__cdecl__)) _wtoi (const wchar_t *);
 long __attribute__((__cdecl__)) _wtol (const wchar_t *);

 double __attribute__((__cdecl__)) strtod (const char*, char**);

extern __inline__ float __attribute__((__cdecl__)) strtof (const char *nptr, char **endptr)
  { return (strtod (nptr, endptr));}
long double __attribute__((__cdecl__)) strtold (const char * __restrict__, char ** __restrict__);


 long __attribute__((__cdecl__)) strtol (const char*, char**, int);
 unsigned long __attribute__((__cdecl__)) strtoul (const char*, char**, int);



 double __attribute__((__cdecl__)) wcstod (const wchar_t*, wchar_t**);

extern __inline__ float __attribute__((__cdecl__)) wcstof( const wchar_t *nptr, wchar_t **endptr)
{ return (wcstod(nptr, endptr)); }
long double __attribute__((__cdecl__)) wcstold (const wchar_t * __restrict__, wchar_t ** __restrict__);


 long __attribute__((__cdecl__)) wcstol (const wchar_t*, wchar_t**, int);
 unsigned long __attribute__((__cdecl__)) wcstoul (const wchar_t*, wchar_t**, int);



 size_t __attribute__((__cdecl__)) wcstombs (char*, const wchar_t*, size_t);
 int __attribute__((__cdecl__)) wctomb (char*, wchar_t);

 int __attribute__((__cdecl__)) mblen (const char*, size_t);
 size_t __attribute__((__cdecl__)) mbstowcs (wchar_t*, const char*, size_t);
 int __attribute__((__cdecl__)) mbtowc (wchar_t*, const char*, size_t);

 int __attribute__((__cdecl__)) rand (void);
 void __attribute__((__cdecl__)) srand (unsigned int);

 void* __attribute__((__cdecl__)) calloc (size_t, size_t);
 void* __attribute__((__cdecl__)) malloc (size_t);
 void* __attribute__((__cdecl__)) realloc (void*, size_t);
 void __attribute__((__cdecl__)) free (void*);

 void __attribute__((__cdecl__)) abort (void) __attribute__ ((noreturn));
 void __attribute__((__cdecl__)) exit (int) __attribute__ ((noreturn));


int __attribute__((__cdecl__)) atexit (void (*)(void));

 int __attribute__((__cdecl__)) system (const char*);
 char* __attribute__((__cdecl__)) getenv (const char*);


 void* __attribute__((__cdecl__)) bsearch (const void*, const void*, size_t, size_t,
                                 int (*)(const void*, const void*));
 void __attribute__((__cdecl__)) qsort (void*, size_t, size_t,
                                 int (*)(const void*, const void*));

 int __attribute__((__cdecl__)) abs (int);
 long __attribute__((__cdecl__)) labs (long);
# 398 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/stdlib.h" 3
typedef struct { int quot, rem; } div_t;
typedef struct { long quot, rem; } ldiv_t;

 div_t __attribute__((__cdecl__)) div (int, int);
 ldiv_t __attribute__((__cdecl__)) ldiv (long, long);







 void __attribute__((__cdecl__)) _beep (unsigned int, unsigned int);
 void __attribute__((__cdecl__)) _seterrormode (int);
 void __attribute__((__cdecl__)) _sleep (unsigned long);

 void __attribute__((__cdecl__)) _exit (int) __attribute__ ((noreturn));



typedef int (* _onexit_t)(void);
_onexit_t __attribute__((__cdecl__)) _onexit( _onexit_t );

 int __attribute__((__cdecl__)) _putenv (const char*);
 void __attribute__((__cdecl__)) _searchenv (const char*, const char*, char*);


 char* __attribute__((__cdecl__)) _ecvt (double, int, int*, int*);
 char* __attribute__((__cdecl__)) _fcvt (double, int, int*, int*);
 char* __attribute__((__cdecl__)) _gcvt (double, int, char*);

 void __attribute__((__cdecl__)) _makepath (char*, const char*, const char*, const char*, const char*);
 void __attribute__((__cdecl__)) _splitpath (const char*, char*, char*, char*, char*);
 char* __attribute__((__cdecl__)) _fullpath (char*, const char*, size_t);

 char* __attribute__((__cdecl__)) _itoa (int, char*, int);
 char* __attribute__((__cdecl__)) _ltoa (long, char*, int);
 char* __attribute__((__cdecl__)) _ultoa(unsigned long, char*, int);
 wchar_t* __attribute__((__cdecl__)) _itow (int, wchar_t*, int);
 wchar_t* __attribute__((__cdecl__)) _ltow (long, wchar_t*, int);
 wchar_t* __attribute__((__cdecl__)) _ultow (unsigned long, wchar_t*, int);


 long long __attribute__((__cdecl__)) _atoi64(const char *);
 char* __attribute__((__cdecl__)) _i64toa(long long, char *, int);
 char* __attribute__((__cdecl__)) _ui64toa(unsigned long long, char *, int);
 long long __attribute__((__cdecl__)) _wtoi64(const wchar_t *);
 wchar_t* __attribute__((__cdecl__)) _i64tow(long long, wchar_t *, int);
 wchar_t* __attribute__((__cdecl__)) _ui64tow(unsigned long long, wchar_t *, int);

 wchar_t* __attribute__((__cdecl__)) _wgetenv(const wchar_t*);
 int __attribute__((__cdecl__)) _wputenv(const wchar_t*);
 void __attribute__((__cdecl__)) _wsearchenv(const wchar_t*, const wchar_t*, wchar_t*);
 void __attribute__((__cdecl__)) _wmakepath(wchar_t*, const wchar_t*, const wchar_t*, const wchar_t*, const wchar_t*);
 void __attribute__((__cdecl__)) _wsplitpath (const wchar_t*, wchar_t*, wchar_t*, wchar_t*, wchar_t*);
 wchar_t* __attribute__((__cdecl__)) _wfullpath (wchar_t*, const wchar_t*, size_t);

 unsigned int __attribute__((__cdecl__)) _rotl(unsigned int, int);
 unsigned int __attribute__((__cdecl__)) _rotr(unsigned int, int);
 unsigned long __attribute__((__cdecl__)) _lrotl(unsigned long, int);
 unsigned long __attribute__((__cdecl__)) _lrotr(unsigned long, int);




 int __attribute__((__cdecl__)) putenv (const char*);
 void __attribute__((__cdecl__)) searchenv (const char*, const char*, char*);

 char* __attribute__((__cdecl__)) itoa (int, char*, int);
 char* __attribute__((__cdecl__)) ltoa (long, char*, int);


 char* __attribute__((__cdecl__)) ecvt (double, int, int*, int*);
 char* __attribute__((__cdecl__)) fcvt (double, int, int*, int*);
 char* __attribute__((__cdecl__)) gcvt (double, int, char*);
# 483 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/stdlib.h" 3
void __attribute__((__cdecl__)) _Exit(int) __attribute__ ((noreturn));

extern __inline__ void __attribute__((__cdecl__)) _Exit(int status)
        { _exit(status); }


typedef struct { long long quot, rem; } lldiv_t;

lldiv_t __attribute__((__cdecl__)) lldiv (long long, long long);

extern __inline__ long long __attribute__((__cdecl__)) llabs(long long _j)
  {return (_j >= 0 ? _j : -_j);}

long long __attribute__((__cdecl__)) strtoll (const char* __restrict__, char** __restrict, int);
unsigned long long __attribute__((__cdecl__)) strtoull (const char* __restrict__, char** __restrict__, int);


long long __attribute__((__cdecl__)) atoll (const char *);


long long __attribute__((__cdecl__)) wtoll (const wchar_t *);
char* __attribute__((__cdecl__)) lltoa (long long, char *, int);
char* __attribute__((__cdecl__)) ulltoa (unsigned long long , char *, int);
wchar_t* __attribute__((__cdecl__)) lltow (long long, wchar_t *, int);
wchar_t* __attribute__((__cdecl__)) ulltow (unsigned long long, wchar_t *, int);


extern __inline__ long long __attribute__((__cdecl__)) atoll (const char * _c)
        { return _atoi64 (_c); }
extern __inline__ char* __attribute__((__cdecl__)) lltoa (long long _n, char * _c, int _i)
        { return _i64toa (_n, _c, _i); }
extern __inline__ char* __attribute__((__cdecl__)) ulltoa (unsigned long long _n, char * _c, int _i)
        { return _ui64toa (_n, _c, _i); }
extern __inline__ long long __attribute__((__cdecl__)) wtoll (const wchar_t * _w)
        { return _wtoi64 (_w); }
extern __inline__ wchar_t* __attribute__((__cdecl__)) lltow (long long _n, wchar_t * _w, int _i)
        { return _i64tow (_n, _w, _i); }
extern __inline__ wchar_t* __attribute__((__cdecl__)) ulltow (unsigned long long _n, wchar_t * _w, int _i)
        { return _ui64tow (_n, _w, _i); }
# 108 "../../mmi/inc/stdafx.h" 2
# 1 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/malloc.h" 1 3
# 45 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/malloc.h" 3
typedef struct _heapinfo
{
        int* _pentry;
        size_t _size;
        int _useflag;
} _HEAPINFO;
# 63 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/malloc.h" 3
 int __attribute__((__cdecl__)) _heapwalk (_HEAPINFO*);





 int __attribute__((__cdecl__)) heapwalk (_HEAPINFO*);





 int __attribute__((__cdecl__)) _heapchk (void);
 int __attribute__((__cdecl__)) _heapmin (void);
 int __attribute__((__cdecl__)) _heapset (unsigned int);

 size_t __attribute__((__cdecl__)) _msize (void*);
 size_t __attribute__((__cdecl__)) _get_sbh_threshold (void);
 int __attribute__((__cdecl__)) _set_sbh_threshold (size_t);
 void* __attribute__((__cdecl__)) _expand (void*, size_t);
# 109 "../../mmi/inc/stdafx.h" 2
# 1 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/memory.h" 1 3






# 1 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/string.h" 1 3
# 40 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/string.h" 3
# 1 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/stddef.h" 1 3





# 1 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/lib/gcc-lib/mingw32/3.3.1/include/stddef.h" 1 3 4
# 7 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/stddef.h" 2 3
# 41 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/string.h" 2 3
# 52 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/string.h" 3
 void* __attribute__((__cdecl__)) memchr (const void*, int, size_t);
 int __attribute__((__cdecl__)) memcmp (const void*, const void*, size_t);
 void* __attribute__((__cdecl__)) memcpy (void*, const void*, size_t);
 void* __attribute__((__cdecl__)) memmove (void*, const void*, size_t);
 void* __attribute__((__cdecl__)) memset (void*, int, size_t);
 char* __attribute__((__cdecl__)) strcat (char*, const char*);
 char* __attribute__((__cdecl__)) strchr (const char*, int);
 int __attribute__((__cdecl__)) strcmp (const char*, const char*);
 int __attribute__((__cdecl__)) strcoll (const char*, const char*);
 char* __attribute__((__cdecl__)) strcpy (char*, const char*);
 size_t __attribute__((__cdecl__)) strcspn (const char*, const char*);
 char* __attribute__((__cdecl__)) strerror (int);

 size_t __attribute__((__cdecl__)) strlen (const char*);
 char* __attribute__((__cdecl__)) strncat (char*, const char*, size_t);
 int __attribute__((__cdecl__)) strncmp (const char*, const char*, size_t);
 char* __attribute__((__cdecl__)) strncpy (char*, const char*, size_t);
 char* __attribute__((__cdecl__)) strpbrk (const char*, const char*);
 char* __attribute__((__cdecl__)) strrchr (const char*, int);
 size_t __attribute__((__cdecl__)) strspn (const char*, const char*);
 char* __attribute__((__cdecl__)) strstr (const char*, const char*);
 char* __attribute__((__cdecl__)) strtok (char*, const char*);
 size_t __attribute__((__cdecl__)) strxfrm (char*, const char*, size_t);





 char* __attribute__((__cdecl__)) _strerror (const char *);
 void* __attribute__((__cdecl__)) _memccpy (void*, const void*, int, size_t);
 int __attribute__((__cdecl__)) _memicmp (const void*, const void*, size_t);
 char* __attribute__((__cdecl__)) _strdup (const char*);
 int __attribute__((__cdecl__)) _strcmpi (const char*, const char*);
 int __attribute__((__cdecl__)) _stricmp (const char*, const char*);
 int __attribute__((__cdecl__)) _stricoll (const char*, const char*);
 char* __attribute__((__cdecl__)) _strlwr (char*);
 int __attribute__((__cdecl__)) _strnicmp (const char*, const char*, size_t);
 char* __attribute__((__cdecl__)) _strnset (char*, int, size_t);
 char* __attribute__((__cdecl__)) _strrev (char*);
 char* __attribute__((__cdecl__)) _strset (char*, int);
 char* __attribute__((__cdecl__)) _strupr (char*);
 void __attribute__((__cdecl__)) _swab (const char*, char*, size_t);


 int __attribute__((__cdecl__)) _strncoll(const char*, const char*, size_t);
 int __attribute__((__cdecl__)) _strnicoll(const char*, const char*, size_t);







 wchar_t* __attribute__((__cdecl__)) wcscat (wchar_t*, const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) wcschr (const wchar_t*, wchar_t);
 int __attribute__((__cdecl__)) wcscmp (const wchar_t*, const wchar_t*);
 int __attribute__((__cdecl__)) wcscoll (const wchar_t*, const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) wcscpy (wchar_t*, const wchar_t*);
 size_t __attribute__((__cdecl__)) wcscspn (const wchar_t*, const wchar_t*);

 size_t __attribute__((__cdecl__)) wcslen (const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) wcsncat (wchar_t*, const wchar_t*, size_t);
 int __attribute__((__cdecl__)) wcsncmp(const wchar_t*, const wchar_t*, size_t);
 wchar_t* __attribute__((__cdecl__)) wcsncpy(wchar_t*, const wchar_t*, size_t);
 wchar_t* __attribute__((__cdecl__)) wcspbrk(const wchar_t*, const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) wcsrchr(const wchar_t*, wchar_t);
 size_t __attribute__((__cdecl__)) wcsspn(const wchar_t*, const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) wcsstr(const wchar_t*, const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) wcstok(wchar_t*, const wchar_t*);
 size_t __attribute__((__cdecl__)) wcsxfrm(wchar_t*, const wchar_t*, size_t);
# 131 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/string.h" 3
 wchar_t* __attribute__((__cdecl__)) _wcsdup (const wchar_t*);
 int __attribute__((__cdecl__)) _wcsicmp (const wchar_t*, const wchar_t*);
 int __attribute__((__cdecl__)) _wcsicoll (const wchar_t*, const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) _wcslwr (wchar_t*);
 int __attribute__((__cdecl__)) _wcsnicmp (const wchar_t*, const wchar_t*, size_t);
 wchar_t* __attribute__((__cdecl__)) _wcsnset (wchar_t*, wchar_t, size_t);
 wchar_t* __attribute__((__cdecl__)) _wcsrev (wchar_t*);
 wchar_t* __attribute__((__cdecl__)) _wcsset (wchar_t*, wchar_t);
 wchar_t* __attribute__((__cdecl__)) _wcsupr (wchar_t*);


 int __attribute__((__cdecl__)) _wcsncoll(const wchar_t*, const wchar_t*, size_t);
 int __attribute__((__cdecl__)) _wcsnicoll(const wchar_t*, const wchar_t*, size_t);
# 159 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/string.h" 3
 void* __attribute__((__cdecl__)) memccpy (void*, const void*, int, size_t);
 int __attribute__((__cdecl__)) memicmp (const void*, const void*, size_t);
 char* __attribute__((__cdecl__)) strdup (const char*);
 int __attribute__((__cdecl__)) strcmpi (const char*, const char*);
 int __attribute__((__cdecl__)) stricmp (const char*, const char*);
extern __inline__ int __attribute__((__cdecl__))
strcasecmp (const char * __sz1, const char * __sz2)
  {return _stricmp (__sz1, __sz2);}
 int __attribute__((__cdecl__)) stricoll (const char*, const char*);
 char* __attribute__((__cdecl__)) strlwr (char*);
 int __attribute__((__cdecl__)) strnicmp (const char*, const char*, size_t);
extern __inline__ int __attribute__((__cdecl__))
strncasecmp (const char * __sz1, const char * __sz2, size_t __sizeMaxCompare)
  {return _strnicmp (__sz1, __sz2, __sizeMaxCompare);}
 char* __attribute__((__cdecl__)) strnset (char*, int, size_t);
 char* __attribute__((__cdecl__)) strrev (char*);
 char* __attribute__((__cdecl__)) strset (char*, int);
 char* __attribute__((__cdecl__)) strupr (char*);

 void __attribute__((__cdecl__)) swab (const char*, char*, size_t);



extern __inline__ int __attribute__((__cdecl__))
wcscmpi (const wchar_t * __ws1, const wchar_t * __ws2)
  {return _wcsicmp (__ws1, __ws2);}
 wchar_t* __attribute__((__cdecl__)) wcsdup (wchar_t*);
 int __attribute__((__cdecl__)) wcsicmp (const wchar_t*, const wchar_t*);
 int __attribute__((__cdecl__)) wcsicoll (const wchar_t*, const wchar_t*);
 wchar_t* __attribute__((__cdecl__)) wcslwr (wchar_t*);
 int __attribute__((__cdecl__)) wcsnicmp (const wchar_t*, const wchar_t*, size_t);
 wchar_t* __attribute__((__cdecl__)) wcsnset (wchar_t*, wchar_t, size_t);
 wchar_t* __attribute__((__cdecl__)) wcsrev (wchar_t*);
 wchar_t* __attribute__((__cdecl__)) wcsset (wchar_t*, wchar_t);
 wchar_t* __attribute__((__cdecl__)) wcsupr (wchar_t*);
# 8 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/memory.h" 2 3
# 110 "../../mmi/inc/stdafx.h" 2
# 1 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/tchar.h" 1 3
# 233 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/tchar.h" 3
typedef char TCHAR;
typedef char _TCHAR;
# 111 "../../mmi/inc/stdafx.h" 2
# 1 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/stdio.h" 1 3
# 42 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/stdio.h" 3
# 1 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/stddef.h" 1 3





# 1 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/lib/gcc-lib/mingw32/3.3.1/include/stddef.h" 1 3 4
# 361 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/lib/gcc-lib/mingw32/3.3.1/include/stddef.h" 3 4
typedef short unsigned int wint_t;
# 7 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/stddef.h" 2 3
# 43 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/stdio.h" 2 3

# 1 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/stdarg.h" 1 3





# 1 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/lib/gcc-lib/mingw32/3.3.1/include/stdarg.h" 1 3 4
# 44 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/lib/gcc-lib/mingw32/3.3.1/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 7 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/stdarg.h" 2 3
# 45 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/stdio.h" 2 3
# 151 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/stdio.h" 3
typedef struct _iobuf
{
        char* _ptr;
        int _cnt;
        char* _base;
        int _flag;
        int _file;
        int _charbuf;
        int _bufsiz;
        char* _tmpfname;
} FILE;
# 176 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/stdio.h" 3
extern __attribute__((dllimport)) FILE _iob[];
# 191 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/stdio.h" 3
 FILE* __attribute__((__cdecl__)) fopen (const char*, const char*);
 FILE* __attribute__((__cdecl__)) freopen (const char*, const char*, FILE*);
 int __attribute__((__cdecl__)) fflush (FILE*);
 int __attribute__((__cdecl__)) fclose (FILE*);

 int __attribute__((__cdecl__)) remove (const char*);
 int __attribute__((__cdecl__)) rename (const char*, const char*);
 FILE* __attribute__((__cdecl__)) tmpfile (void);
 char* __attribute__((__cdecl__)) tmpnam (char*);
 char* __attribute__((__cdecl__)) _tempnam (const char*, const char*);


 char* __attribute__((__cdecl__)) tempnam (const char*, const char*);


 int __attribute__((__cdecl__)) setvbuf (FILE*, char*, int, size_t);

 void __attribute__((__cdecl__)) setbuf (FILE*, char*);





 int __attribute__((__cdecl__)) fprintf (FILE*, const char*, ...);
 int __attribute__((__cdecl__)) printf (const char*, ...);
 int __attribute__((__cdecl__)) sprintf (char*, const char*, ...);
 int __attribute__((__cdecl__)) _snprintf (char*, size_t, const char*, ...);
 int __attribute__((__cdecl__)) vfprintf (FILE*, const char*, __gnuc_va_list);
 int __attribute__((__cdecl__)) vprintf (const char*, __gnuc_va_list);
 int __attribute__((__cdecl__)) vsprintf (char*, const char*, __gnuc_va_list);
 int __attribute__((__cdecl__)) _vsnprintf (char*, size_t, const char*, __gnuc_va_list);


int __attribute__((__cdecl__)) snprintf(char* s, size_t n, const char* format, ...);
extern __inline__ int __attribute__((__cdecl__))
vsnprintf (char* s, size_t n, const char* format, __gnuc_va_list arg)
  { return _vsnprintf ( s, n, format, arg); }
int __attribute__((__cdecl__)) vscanf (const char * __restrict__, __gnuc_va_list);
int __attribute__((__cdecl__)) vfscanf (FILE * __restrict__, const char * __restrict__,
                     __gnuc_va_list);
int __attribute__((__cdecl__)) vsscanf (const char * __restrict__,
                     const char * __restrict__, __gnuc_va_list);






 int __attribute__((__cdecl__)) fscanf (FILE*, const char*, ...);
 int __attribute__((__cdecl__)) scanf (const char*, ...);
 int __attribute__((__cdecl__)) sscanf (const char*, const char*, ...);




 int __attribute__((__cdecl__)) fgetc (FILE*);
 char* __attribute__((__cdecl__)) fgets (char*, int, FILE*);
 int __attribute__((__cdecl__)) fputc (int, FILE*);
 int __attribute__((__cdecl__)) fputs (const char*, FILE*);
 char* __attribute__((__cdecl__)) gets (char*);
 int __attribute__((__cdecl__)) puts (const char*);
 int __attribute__((__cdecl__)) ungetc (int, FILE*);







 int __attribute__((__cdecl__)) _filbuf (FILE*);
 int __attribute__((__cdecl__)) _flsbuf (int, FILE*);



extern __inline__ int __attribute__((__cdecl__)) getc (FILE* __F)
{
  return (--__F->_cnt >= 0)
    ? (int) *__F->_ptr++
    : _filbuf (__F);
}

extern __inline__ int __attribute__((__cdecl__)) putc (int __c, FILE* __F)
{
  return (--__F->_cnt >= 0)
    ? (int)(*__F->_ptr++ = (char)__c)
    : _flsbuf (__c, __F);
}

extern __inline__ int __attribute__((__cdecl__)) getchar (void)
{
  return (--(&_iob[0])->_cnt >= 0)
    ? (int) *(&_iob[0])->_ptr++
    : _filbuf ((&_iob[0]));
}

extern __inline__ int __attribute__((__cdecl__)) putchar(int __c)
{
  return (--(&_iob[1])->_cnt >= 0)
    ? (int)(*(&_iob[1])->_ptr++ = (char)__c)
    : _flsbuf (__c, (&_iob[1]));}
# 305 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/stdio.h" 3
 size_t __attribute__((__cdecl__)) fread (void*, size_t, size_t, FILE*);
 size_t __attribute__((__cdecl__)) fwrite (const void*, size_t, size_t, FILE*);





 int __attribute__((__cdecl__)) fseek (FILE*, long, int);
 long __attribute__((__cdecl__)) ftell (FILE*);
 void __attribute__((__cdecl__)) rewind (FILE*);
# 338 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/stdio.h" 3
typedef long long fpos_t;




 int __attribute__((__cdecl__)) fgetpos (FILE*, fpos_t*);
 int __attribute__((__cdecl__)) fsetpos (FILE*, const fpos_t*);





 void __attribute__((__cdecl__)) clearerr (FILE*);
 int __attribute__((__cdecl__)) feof (FILE*);
 int __attribute__((__cdecl__)) ferror (FILE*);
 void __attribute__((__cdecl__)) perror (const char*);






 FILE* __attribute__((__cdecl__)) _popen (const char*, const char*);
 int __attribute__((__cdecl__)) _pclose (FILE*);


 FILE* __attribute__((__cdecl__)) popen (const char*, const char*);
 int __attribute__((__cdecl__)) pclose (FILE*);





 int __attribute__((__cdecl__)) _flushall (void);
 int __attribute__((__cdecl__)) _fgetchar (void);
 int __attribute__((__cdecl__)) _fputchar (int);
 FILE* __attribute__((__cdecl__)) _fdopen (int, const char*);
 int __attribute__((__cdecl__)) _fileno (FILE*);
 int __attribute__((__cdecl__)) _fcloseall(void);

 int __attribute__((__cdecl__)) _getmaxstdio(void);
 int __attribute__((__cdecl__)) _setmaxstdio(int);





 int __attribute__((__cdecl__)) fgetchar (void);
 int __attribute__((__cdecl__)) fputchar (int);
 FILE* __attribute__((__cdecl__)) fdopen (int, const char*);
 int __attribute__((__cdecl__)) fileno (FILE*);
# 400 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/stdio.h" 3
 int __attribute__((__cdecl__)) fwprintf (FILE*, const wchar_t*, ...);
 int __attribute__((__cdecl__)) wprintf (const wchar_t*, ...);
 int __attribute__((__cdecl__)) swprintf (wchar_t*, const wchar_t*, ...);
 int __attribute__((__cdecl__)) _snwprintf (wchar_t*, size_t, const wchar_t*, ...);
 int __attribute__((__cdecl__)) vfwprintf (FILE*, const wchar_t*, __gnuc_va_list);
 int __attribute__((__cdecl__)) vwprintf (const wchar_t*, __gnuc_va_list);
 int __attribute__((__cdecl__)) vswprintf (wchar_t*, const wchar_t*, __gnuc_va_list);
 int __attribute__((__cdecl__)) _vsnwprintf (wchar_t*, size_t, const wchar_t*, __gnuc_va_list);
 int __attribute__((__cdecl__)) fwscanf (FILE*, const wchar_t*, ...);
 int __attribute__((__cdecl__)) wscanf (const wchar_t*, ...);
 int __attribute__((__cdecl__)) swscanf (const wchar_t*, const wchar_t*, ...);
 wint_t __attribute__((__cdecl__)) fgetwc (FILE*);
 wint_t __attribute__((__cdecl__)) fputwc (wchar_t, FILE*);
 wint_t __attribute__((__cdecl__)) ungetwc (wchar_t, FILE*);


 wchar_t* __attribute__((__cdecl__)) fgetws (wchar_t*, int, FILE*);
 int __attribute__((__cdecl__)) fputws (const wchar_t*, FILE*);
 wint_t __attribute__((__cdecl__)) getwc (FILE*);
 wint_t __attribute__((__cdecl__)) getwchar (void);
 wchar_t* __attribute__((__cdecl__)) _getws (wchar_t*);
 wint_t __attribute__((__cdecl__)) putwc (wint_t, FILE*);
 int __attribute__((__cdecl__)) _putws (const wchar_t*);
 wint_t __attribute__((__cdecl__)) putwchar (wint_t);
 FILE* __attribute__((__cdecl__)) _wfdopen(int, wchar_t *);
 FILE* __attribute__((__cdecl__)) _wfopen (const wchar_t*, const wchar_t*);
 FILE* __attribute__((__cdecl__)) _wfreopen (const wchar_t*, const wchar_t*, FILE*);
 FILE* __attribute__((__cdecl__)) _wfsopen (const wchar_t*, const wchar_t*, int);
 wchar_t* __attribute__((__cdecl__)) _wtmpnam (wchar_t*);
 wchar_t* __attribute__((__cdecl__)) _wtempnam (const wchar_t*, const wchar_t*);
 int __attribute__((__cdecl__)) _wrename (const wchar_t*, const wchar_t*);
 int __attribute__((__cdecl__)) _wremove (const wchar_t*);
 void __attribute__((__cdecl__)) _wperror (const wchar_t*);
 FILE* __attribute__((__cdecl__)) _wpopen (const wchar_t*, const wchar_t*);



int __attribute__((__cdecl__)) snwprintf (wchar_t* s, size_t n, const wchar_t* format, ...);
extern __inline__ int __attribute__((__cdecl__))
vsnwprintf (wchar_t* s, size_t n, const wchar_t* format, __gnuc_va_list arg)
  { return _vsnwprintf ( s, n, format, arg);}
int __attribute__((__cdecl__)) vwscanf (const wchar_t * __restrict__, __gnuc_va_list);
int __attribute__((__cdecl__)) vfwscanf (FILE * __restrict__,
                       const wchar_t * __restrict__, __gnuc_va_list);
int __attribute__((__cdecl__)) vswscanf (const wchar_t * __restrict__,
                       const wchar_t * __restrict__, __gnuc_va_list);
# 454 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/stdio.h" 3
 FILE* __attribute__((__cdecl__)) wpopen (const wchar_t*, const wchar_t*);






 wint_t __attribute__((__cdecl__)) _fgetwchar (void);
 wint_t __attribute__((__cdecl__)) _fputwchar (wint_t);
 int __attribute__((__cdecl__)) _getw (FILE*);
 int __attribute__((__cdecl__)) _putw (int, FILE*);


 wint_t __attribute__((__cdecl__)) fgetwchar (void);
 wint_t __attribute__((__cdecl__)) fputwchar (wint_t);
 int __attribute__((__cdecl__)) getw (FILE*);
 int __attribute__((__cdecl__)) putw (int, FILE*);
# 112 "../../mmi/inc/stdafx.h" 2
# 938 "../../framework/interface/MMIDataType.h" 2

# 1 "inc/ResgenDataType.h" 1
# 78 "inc/ResgenDataType.h"
# 1 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/basetsd.h" 1 3
# 5 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/basetsd.h" 3
# 50 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/basetsd.h" 3
typedef int LONG32, *PLONG32;

typedef int INT32, *PINT32;

typedef unsigned int ULONG32, *PULONG32;
typedef unsigned int DWORD32, *PDWORD32;
typedef unsigned int UINT32, *PUINT32;
# 97 "d:/software/ovi_2503a_s3trc/ovi_2503a_s3trc/Tools/MinGW/include/basetsd.h" 3
typedef int INT_PTR, *PINT_PTR;
typedef unsigned int UINT_PTR, *PUINT_PTR;
typedef long LONG_PTR, *PLONG_PTR;
typedef unsigned long ULONG_PTR, *PULONG_PTR;
typedef unsigned short UHALF_PTR, *PUHALF_PTR;
typedef short HALF_PTR, *PHALF_PTR;
typedef unsigned long HANDLE_PTR;


typedef ULONG_PTR SIZE_T, *PSIZE_T;
typedef LONG_PTR SSIZE_T, *PSSIZE_T;
typedef ULONG_PTR DWORD_PTR, *PDWORD_PTR;
typedef long long LONG64, *PLONG64;
typedef long long INT64, *PINT64;
typedef unsigned long long ULONG64, *PULONG64;
typedef unsigned long long DWORD64, *PDWORD64;
typedef unsigned long long UINT64, *PUINT64;
# 79 "inc/ResgenDataType.h" 2

typedef enum {
    MMI_FALSE = 0,
    MMI_TRUE = 1
} MMI_BOOL;

typedef char S8;
typedef char *PS8;
typedef unsigned char U8;
typedef unsigned char *PU8;

typedef unsigned short pBOOL;
typedef int BOOL;
# 100 "inc/ResgenDataType.h"
typedef short int S16;
typedef short int *PS16;
typedef unsigned short int U16;
typedef unsigned short int *PU16;

typedef int S32;
typedef int *PS32;
typedef unsigned int U32;
typedef unsigned int *PU32;

typedef float FLOAT;

typedef unsigned long long U64;
typedef long long S64;
typedef void (*FuncPtrShort) (U16);
# 127 "inc/ResgenDataType.h"
typedef wchar_t WCHAR;
# 147 "inc/ResgenDataType.h"
typedef unsigned short MMI_ID_TYPE;
typedef U16 MMI_ID;
typedef U16 MMI_IMG_ID;
typedef U16 MMI_STR_ID;
typedef U16 MMI_MENU_ID;
typedef U16 MMI_TIMER_ID;
typedef U16 MMI_EVENT_ID;

typedef S32 MMI_RET;

typedef enum {
    RES_IMAGE,
    RES_MEDIA,
    RES_AUDIO,
    RES_JAVA_GAME,
    RES_FONT,
    RES_BINARY
} RESOURCE_TYPE_LIST;

typedef enum _binary_type_enum
{
    BINARY_TYPE_INVALID,
    BINARY_TYPE_VENUS_XML,
    BINARY_TYPE_TOTAL
} binary_type_enum;
# 940 "../../framework/interface/MMIDataType.h" 2





    typedef char CHAR;

    typedef CHAR mmi_app_package_char;

    typedef mmi_app_package_char mmi_app_package_name_struct[(60)];
# 1177 "../../framework/interface/MMIDataType.h"
typedef enum
{
    MMI_FRM_MEM_OSL,
    MMI_FRM_MEM_ASM,
    MMI_FRM_MEM_APP_ASM,
    MMI_FRM_MEM_SCR_ASM,
    MMI_FRM_MEM_TYPE_TOTAL
} mmi_frm_mem_type;
# 1195 "../../framework/interface/MMIDataType.h"
typedef enum _image_type_enum
{
    SYSTEM_IMAGE,
    EXT_IMAGE,
    NFB_PROGRESS_IMAGE,
    EXT_FONT
}image_type_enum;
# 1217 "../../framework/interface/MMIDataType.h"
typedef enum
{
    MMI_SIM_NONE = 0,
    MMI_SIM1 = 0x0001,
    MMI_SIM2 = 0x0002,
    MMI_SIM3 = 0x0004,
    MMI_SIM4 = 0x0008,
    MMI_SIM_END_OF_ENUM
}mmi_sim_enum;

typedef enum
{
    MMI_NETWORK_NONE = 0,
    MMI_GSM = 0x0100,
    MMI_WCDMA = 0x0200,
    MMI_NETWORK_END_OF_ENUM
} mmi_network_enum;

typedef enum
{
    MMI_NETWORK_CAPABILITY_NONE = 0,
    MMI_GPRS = 0x0010,
    MMI_EDGE = 0x0020,
    MMI_HSDPA = 0x0040,
    MMI_HSUPA = 0x0080,
    MMI_NETWORK_CAPABILITY_END_OF_ENUM
} mmi_network_capability_enum;


# 1 "../../mmi/inc/mmi_res_range_def.h" 1
# 2326 "../../mmi/inc/mmi_res_range_def.h"
# 1 "../../mmi/inc/MMI_features.h" 1
# 2327 "../../mmi/inc/mmi_res_range_def.h" 2
# 2401 "../../mmi/inc/mmi_res_range_def.h"
typedef enum { RESOURCE_BASE_FIRST_VALUE = 3000, APP_GLOBALDEFS, RESOURCE_BASE_APP_GLOBALDEFS = APP_GLOBALDEFS, RESOURCE_BASE_APP_GLOBALDEFS_END = APP_GLOBALDEFS + 299,
# 2412 "../../mmi/inc/mmi_res_range_def.h"
# 1 "../../mmi/inc/mmi_lib_res_range_def.h" 1
# 137 "../../mmi/inc/mmi_lib_res_range_def.h"
APP_WAP, RESOURCE_BASE_APP_WAP = APP_WAP, RESOURCE_BASE_APP_WAP_END = APP_WAP + 1500,







APP_MRE, RESOURCE_BASE_APP_MRE = APP_MRE, RESOURCE_BASE_APP_MRE_END = APP_MRE + 100,



APP_MRE_BG, RESOURCE_BASE_APP_MRE_BG = APP_MRE_BG, RESOURCE_BASE_APP_MRE_BG_END = APP_MRE_BG + 10,






VAPP_SNS, RESOURCE_BASE_VAPP_SNS = VAPP_SNS, RESOURCE_BASE_VAPP_SNS_END = VAPP_SNS + 200,



VAPP_SNS_PLUGIN, RESOURCE_BASE_VAPP_SNS_PLUGIN = VAPP_SNS_PLUGIN, RESOURCE_BASE_VAPP_SNS_PLUGIN_END = VAPP_SNS_PLUGIN + 5,



VAPP_SNS_BG, RESOURCE_BASE_VAPP_SNS_BG = VAPP_SNS_BG, RESOURCE_BASE_VAPP_SNS_BG_END = VAPP_SNS_BG + 5,



VCUI_SNS_UPLOAD_PIC, RESOURCE_BASE_VCUI_SNS_UPLOAD_PIC = VCUI_SNS_UPLOAD_PIC, RESOURCE_BASE_VCUI_SNS_UPLOAD_PIC_END = VCUI_SNS_UPLOAD_PIC + 20,



VCUI_SNS_SLIM_UPLOAD_PIC, RESOURCE_BASE_VCUI_SNS_SLIM_UPLOAD_PIC = VCUI_SNS_SLIM_UPLOAD_PIC, RESOURCE_BASE_VCUI_SNS_SLIM_UPLOAD_PIC_END = VCUI_SNS_SLIM_UPLOAD_PIC + 10,



VCUI_SNS_CONTACTS_PICKER, RESOURCE_BASE_VCUI_SNS_CONTACTS_PICKER = VCUI_SNS_CONTACTS_PICKER, RESOURCE_BASE_VCUI_SNS_CONTACTS_PICKER_END = VCUI_SNS_CONTACTS_PICKER + 20,



VCUI_SNS_MSG_COMPOSER, RESOURCE_BASE_VCUI_SNS_MSG_COMPOSER = VCUI_SNS_MSG_COMPOSER, RESOURCE_BASE_VCUI_SNS_MSG_COMPOSER_END = VCUI_SNS_MSG_COMPOSER + 10,



VAPP_WIDGET_SNS_COSMOS, RESOURCE_BASE_VAPP_WIDGET_SNS_COSMOS = VAPP_WIDGET_SNS_COSMOS, RESOURCE_BASE_VAPP_WIDGET_SNS_COSMOS_END = VAPP_WIDGET_SNS_COSMOS + 20,



VAPP_WIDGET_SNS_DUMMY, RESOURCE_BASE_VAPP_WIDGET_SNS_DUMMY = VAPP_WIDGET_SNS_DUMMY, RESOURCE_BASE_VAPP_WIDGET_SNS_DUMMY_END = VAPP_WIDGET_SNS_DUMMY + 10,






SRV_SNS, RESOURCE_BASE_SRV_SNS = SRV_SNS, RESOURCE_BASE_SRV_SNS_END = SRV_SNS + 16,






SRV_SSO, RESOURCE_BASE_SRV_SSO = SRV_SSO, RESOURCE_BASE_SRV_SSO_END = SRV_SSO + 8,






SRV_BACKUP_RESTORE, RESOURCE_BASE_SRV_BACKUP_RESTORE = SRV_BACKUP_RESTORE, RESOURCE_BASE_SRV_BACKUP_RESTORE_END = SRV_BACKUP_RESTORE + 100,






VAPP_GOOGLE_SEARCH, RESOURCE_BASE_VAPP_GOOGLE_SEARCH = VAPP_GOOGLE_SEARCH, RESOURCE_BASE_VAPP_GOOGLE_SEARCH_END = VAPP_GOOGLE_SEARCH + 10,
# 2413 "../../mmi/inc/mmi_res_range_def.h" 2
# 2421 "../../mmi/inc/mmi_res_range_def.h"
    FRAMEWORK_ASM, RESOURCE_BASE_FRAMEWORK_ASM = FRAMEWORK_ASM, RESOURCE_BASE_FRAMEWORK_ASM_END = FRAMEWORK_ASM + 100,
    SRV_NMGR, RESOURCE_BASE_SRV_NMGR = SRV_NMGR, RESOURCE_BASE_SRV_NMGR_END = SRV_NMGR + 10,
    SRV_STATUS_ICONS, RESOURCE_BASE_SRV_STATUS_ICONS = SRV_STATUS_ICONS, RESOURCE_BASE_SRV_STATUS_ICONS_END = SRV_STATUS_ICONS + 300,
    SRV_CONNECTS, RESOURCE_BASE_SRV_CONNECTS = SRV_CONNECTS, RESOURCE_BASE_SRV_CONNECTS_END = SRV_CONNECTS + 100,

    SRV_COMMON_SCREENS, RESOURCE_BASE_SRV_COMMON_SCREENS = SRV_COMMON_SCREENS, RESOURCE_BASE_SRV_COMMON_SCREENS_END = SRV_COMMON_SCREENS + 300,
    SRV_HELP, RESOURCE_BASE_SRV_HELP = SRV_HELP, RESOURCE_BASE_SRV_HELP_END = SRV_HELP + 100,
    SRV_CTK, RESOURCE_BASE_SRV_CTK = SRV_CTK, RESOURCE_BASE_SRV_CTK_END = SRV_CTK + 200,
    SRV_COMPOSE_RINGTONE, RESOURCE_BASE_SRV_COMPOSE_RINGTONE = SRV_COMPOSE_RINGTONE, RESOURCE_BASE_SRV_COMPOSE_RINGTONE_END = SRV_COMPOSE_RINGTONE + 100,

    SRV_NV_RAM_FILE_EXT_MELODY, RESOURCE_BASE_SRV_NV_RAM_FILE_EXT_MELODY = SRV_NV_RAM_FILE_EXT_MELODY, RESOURCE_BASE_SRV_NV_RAM_FILE_EXT_MELODY_END = SRV_NV_RAM_FILE_EXT_MELODY + 20,
    SRV_MMIAPI, RESOURCE_BASE_SRV_MMIAPI = SRV_MMIAPI, RESOURCE_BASE_SRV_MMIAPI_END = SRV_MMIAPI + 100,
    SRV_PICT_BRIDGE, RESOURCE_BASE_SRV_PICT_BRIDGE = SRV_PICT_BRIDGE, RESOURCE_BASE_SRV_PICT_BRIDGE_END = SRV_PICT_BRIDGE + 100,
    SRV_VOIP, RESOURCE_BASE_SRV_VOIP = SRV_VOIP, RESOURCE_BASE_SRV_VOIP_END = SRV_VOIP + 500,
    SRV_MONWAP, RESOURCE_BASE_SRV_MONWAP = SRV_MONWAP, RESOURCE_BASE_SRV_MONWAP_END = SRV_MONWAP + 100,
    SRV_SOFTWARE_TRACER, RESOURCE_BASE_SRV_SOFTWARE_TRACER = SRV_SOFTWARE_TRACER, RESOURCE_BASE_SRV_SOFTWARE_TRACER_END = SRV_SOFTWARE_TRACER + 100,

    SRV_GPS, RESOURCE_BASE_SRV_GPS = SRV_GPS, RESOURCE_BASE_SRV_GPS_END = SRV_GPS + 100,
# 2448 "../../mmi/inc/mmi_res_range_def.h"
    SRV_MDI, RESOURCE_BASE_SRV_MDI = SRV_MDI, RESOURCE_BASE_SRV_MDI_END = SRV_MDI + 100,

    SRV_MDI_AUDPLY, RESOURCE_BASE_SRV_MDI_AUDPLY = SRV_MDI_AUDPLY, RESOURCE_BASE_SRV_MDI_AUDPLY_END = SRV_MDI_AUDPLY + 2,
    SRV_MDI_AUD_INFO, RESOURCE_BASE_SRV_MDI_AUD_INFO = SRV_MDI_AUD_INFO, RESOURCE_BASE_SRV_MDI_AUD_INFO_END = SRV_MDI_AUD_INFO + 2,
    SRV_MDI_VDOPLY, RESOURCE_BASE_SRV_MDI_VDOPLY = SRV_MDI_VDOPLY, RESOURCE_BASE_SRV_MDI_VDOPLY_END = SRV_MDI_VDOPLY + 2,
    SRV_MDI_VDOPLY_V, RESOURCE_BASE_SRV_MDI_VDOPLY_V = SRV_MDI_VDOPLY_V, RESOURCE_BASE_SRV_MDI_VDOPLY_V_END = SRV_MDI_VDOPLY_V + 2,
    SRV_MDI_VDOPLY_A, RESOURCE_BASE_SRV_MDI_VDOPLY_A = SRV_MDI_VDOPLY_A, RESOURCE_BASE_SRV_MDI_VDOPLY_A_END = SRV_MDI_VDOPLY_A + 2,
    SRV_MDI_VDOPLY_QVGA, RESOURCE_BASE_SRV_MDI_VDOPLY_QVGA = SRV_MDI_VDOPLY_QVGA, RESOURCE_BASE_SRV_MDI_VDOPLY_QVGA_END = SRV_MDI_VDOPLY_QVGA + 2,
    SRV_MDI_VDOPLY_CIF, RESOURCE_BASE_SRV_MDI_VDOPLY_CIF = SRV_MDI_VDOPLY_CIF, RESOURCE_BASE_SRV_MDI_VDOPLY_CIF_END = SRV_MDI_VDOPLY_CIF + 2,
    SRV_MDI_VDOPLY_PREVIEW, RESOURCE_BASE_SRV_MDI_VDOPLY_PREVIEW = SRV_MDI_VDOPLY_PREVIEW, RESOURCE_BASE_SRV_MDI_VDOPLY_PREVIEW_END = SRV_MDI_VDOPLY_PREVIEW + 2,
    SRV_MDI_VDOPLY_INFO, RESOURCE_BASE_SRV_MDI_VDOPLY_INFO = SRV_MDI_VDOPLY_INFO, RESOURCE_BASE_SRV_MDI_VDOPLY_INFO_END = SRV_MDI_VDOPLY_INFO + 2,
    SRV_MDI_VDOPLY_MP4, RESOURCE_BASE_SRV_MDI_VDOPLY_MP4 = SRV_MDI_VDOPLY_MP4, RESOURCE_BASE_SRV_MDI_VDOPLY_MP4_END = SRV_MDI_VDOPLY_MP4 + 2,
    SRV_MDI_VDOPLY_SUBTITLE, RESOURCE_BASE_SRV_MDI_VDOPLY_SUBTITLE = SRV_MDI_VDOPLY_SUBTITLE, RESOURCE_BASE_SRV_MDI_VDOPLY_SUBTITLE_END = SRV_MDI_VDOPLY_SUBTITLE + 2,
    SRV_MDI_VDOPLY_QVGA_MPEG4SP, RESOURCE_BASE_SRV_MDI_VDOPLY_QVGA_MPEG4SP = SRV_MDI_VDOPLY_QVGA_MPEG4SP, RESOURCE_BASE_SRV_MDI_VDOPLY_QVGA_MPEG4SP_END = SRV_MDI_VDOPLY_QVGA_MPEG4SP + 2,
    SRV_MDI_STREAMING, RESOURCE_BASE_SRV_MDI_STREAMING = SRV_MDI_STREAMING, RESOURCE_BASE_SRV_MDI_STREAMING_END = SRV_MDI_STREAMING + 2,
    SRV_MDI_STREAMING_QVGA, RESOURCE_BASE_SRV_MDI_STREAMING_QVGA = SRV_MDI_STREAMING_QVGA, RESOURCE_BASE_SRV_MDI_STREAMING_QVGA_END = SRV_MDI_STREAMING_QVGA + 2,
    SRV_MDI_STREAMING_CIF, RESOURCE_BASE_SRV_MDI_STREAMING_CIF = SRV_MDI_STREAMING_CIF, RESOURCE_BASE_SRV_MDI_STREAMING_CIF_END = SRV_MDI_STREAMING_CIF + 2,
    SRV_MDI_VT, RESOURCE_BASE_SRV_MDI_VT = SRV_MDI_VT, RESOURCE_BASE_SRV_MDI_VT_END = SRV_MDI_VT + 10,


    SRV_PROF, RESOURCE_BASE_SRV_PROF = SRV_PROF, RESOURCE_BASE_SRV_PROF_END = SRV_PROF + 150,




    SRV_MDI_CAMERA_STANDARD, RESOURCE_BASE_SRV_MDI_CAMERA_STANDARD = SRV_MDI_CAMERA_STANDARD, RESOURCE_BASE_SRV_MDI_CAMERA_STANDARD_END = SRV_MDI_CAMERA_STANDARD + 2,
    SRV_MDI_CAMERA_FULL, RESOURCE_BASE_SRV_MDI_CAMERA_FULL = SRV_MDI_CAMERA_FULL, RESOURCE_BASE_SRV_MDI_CAMERA_FULL_END = SRV_MDI_CAMERA_FULL + 2,
    SRV_MDI_CAMERA_ONLY_CAP_LCD, RESOURCE_BASE_SRV_MDI_CAMERA_ONLY_CAP_LCD = SRV_MDI_CAMERA_ONLY_CAP_LCD, RESOURCE_BASE_SRV_MDI_CAMERA_ONLY_CAP_LCD_END = SRV_MDI_CAMERA_ONLY_CAP_LCD + 2,
    SRV_MDI_CAMERA_ONLY_CAP_LCD_DISABLE_JAIA, RESOURCE_BASE_SRV_MDI_CAMERA_ONLY_CAP_LCD_DISABLE_JAIA = SRV_MDI_CAMERA_ONLY_CAP_LCD_DISABLE_JAIA, RESOURCE_BASE_SRV_MDI_CAMERA_ONLY_CAP_LCD_DISABLE_JAIA_END = SRV_MDI_CAMERA_ONLY_CAP_LCD_DISABLE_JAIA + 2,
    SRV_MDI_CAMERA_CAP_VGA_BELOW, RESOURCE_BASE_SRV_MDI_CAMERA_CAP_VGA_BELOW = SRV_MDI_CAMERA_CAP_VGA_BELOW, RESOURCE_BASE_SRV_MDI_CAMERA_CAP_VGA_BELOW_END = SRV_MDI_CAMERA_CAP_VGA_BELOW + 2,
    SRV_MDI_CAMERA_AUTORAMA, RESOURCE_BASE_SRV_MDI_CAMERA_AUTORAMA = SRV_MDI_CAMERA_AUTORAMA, RESOURCE_BASE_SRV_MDI_CAMERA_AUTORAMA_END = SRV_MDI_CAMERA_AUTORAMA + 2,
    SRV_MDI_CAMERA_CAP_HDR, RESOURCE_BASE_SRV_MDI_CAMERA_CAP_HDR = SRV_MDI_CAMERA_CAP_HDR, RESOURCE_BASE_SRV_MDI_CAMERA_CAP_HDR_END = SRV_MDI_CAMERA_CAP_HDR + 2,
    SRV_MDI_CAMERA_CAP_MAV, RESOURCE_BASE_SRV_MDI_CAMERA_CAP_MAV = SRV_MDI_CAMERA_CAP_MAV, RESOURCE_BASE_SRV_MDI_CAMERA_CAP_MAV_END = SRV_MDI_CAMERA_CAP_MAV + 2,
    SRV_MDI_WEBCAM, RESOURCE_BASE_SRV_MDI_WEBCAM = SRV_MDI_WEBCAM, RESOURCE_BASE_SRV_MDI_WEBCAM_END = SRV_MDI_WEBCAM + 2,
    SRV_MDI_ATV_REC, RESOURCE_BASE_SRV_MDI_ATV_REC = SRV_MDI_ATV_REC, RESOURCE_BASE_SRV_MDI_ATV_REC_END = SRV_MDI_ATV_REC + 2,
    SRV_MDI_ATV, RESOURCE_BASE_SRV_MDI_ATV = SRV_MDI_ATV, RESOURCE_BASE_SRV_MDI_ATV_END = SRV_MDI_ATV + 2,
    SRV_MDI_MTV, RESOURCE_BASE_SRV_MDI_MTV = SRV_MDI_MTV, RESOURCE_BASE_SRV_MDI_MTV_END = SRV_MDI_MTV + 2,
    SRV_MDI_MBBMS_ESG, RESOURCE_BASE_SRV_MDI_MBBMS_ESG = SRV_MDI_MBBMS_ESG, RESOURCE_BASE_SRV_MDI_MBBMS_ESG_END = SRV_MDI_MBBMS_ESG + 2,
    SRV_MDI_VDOCLIP, RESOURCE_BASE_SRV_MDI_VDOCLIP = SRV_MDI_VDOCLIP, RESOURCE_BASE_SRV_MDI_VDOCLIP_END = SRV_MDI_VDOCLIP + 2,
    SRV_BOOTUP, RESOURCE_BASE_SRV_BOOTUP = SRV_BOOTUP, RESOURCE_BASE_SRV_BOOTUP_END = SRV_BOOTUP + 50,
    SRV_SIM_CTRL, RESOURCE_BASE_SRV_SIM_CTRL = SRV_SIM_CTRL, RESOURCE_BASE_SRV_SIM_CTRL_END = SRV_SIM_CTRL + 50,
    SRV_NW_INFO, RESOURCE_BASE_SRV_NW_INFO = SRV_NW_INFO, RESOURCE_BASE_SRV_NW_INFO_END = SRV_NW_INFO + 50,
    SRV_SHUTDOWN, RESOURCE_BASE_SRV_SHUTDOWN = SRV_SHUTDOWN, RESOURCE_BASE_SRV_SHUTDOWN_END = SRV_SHUTDOWN + 50,
    SRV_SECSET, RESOURCE_BASE_SRV_SECSET = SRV_SECSET, RESOURCE_BASE_SRV_SECSET_END = SRV_SECSET + 30,



    APP_PHONEBOOK, RESOURCE_BASE_APP_PHONEBOOK = APP_PHONEBOOK, RESOURCE_BASE_APP_PHONEBOOK_END = APP_PHONEBOOK + 1000,


    APP_FUNANDGAMES, RESOURCE_BASE_APP_FUNANDGAMES = APP_FUNANDGAMES, RESOURCE_BASE_APP_FUNANDGAMES_END = APP_FUNANDGAMES + 100,




    APP_SERVICES, RESOURCE_BASE_APP_SERVICES = APP_SERVICES, RESOURCE_BASE_APP_SERVICES_END = APP_SERVICES + 20,
    SRV_DTCNT, RESOURCE_BASE_SRV_DTCNT = SRV_DTCNT, RESOURCE_BASE_SRV_DTCNT_END = SRV_DTCNT + 50,





    APP_MESSAGES, RESOURCE_BASE_APP_MESSAGES = APP_MESSAGES, RESOURCE_BASE_APP_MESSAGES_END = APP_MESSAGES + 100,
    SRV_SMS, RESOURCE_BASE_SRV_SMS = SRV_SMS, RESOURCE_BASE_SRV_SMS_END = SRV_SMS + 50,
    APP_CHAT, RESOURCE_BASE_APP_CHAT = APP_CHAT, RESOURCE_BASE_APP_CHAT_END = APP_CHAT + 10,

    SRV_UNIFIEDMESSAGE, RESOURCE_BASE_SRV_UNIFIEDMESSAGE = SRV_UNIFIEDMESSAGE, RESOURCE_BASE_SRV_UNIFIEDMESSAGE_END = SRV_UNIFIEDMESSAGE + 10,

    SRV_SECURITY_SETTING, RESOURCE_BASE_SRV_SECURITY_SETTING = SRV_SECURITY_SETTING, RESOURCE_BASE_SRV_SECURITY_SETTING_END = SRV_SECURITY_SETTING + 30,
    SRV_CALLSET, RESOURCE_BASE_SRV_CALLSET = SRV_CALLSET, RESOURCE_BASE_SRV_CALLSET_END = SRV_CALLSET + 50,

    SRV_SS, RESOURCE_BASE_SRV_SS = SRV_SS, RESOURCE_BASE_SRV_SS_END = SRV_SS + 70,


    APP_CALLMANAGEMENT, RESOURCE_BASE_APP_CALLMANAGEMENT = APP_CALLMANAGEMENT, RESOURCE_BASE_APP_CALLMANAGEMENT_END = APP_CALLMANAGEMENT + 50,

    SRV_CTM, RESOURCE_BASE_SRV_CTM = SRV_CTM, RESOURCE_BASE_SRV_CTM_END = SRV_CTM + 10,
    SRV_GCALL, RESOURCE_BASE_SRV_GCALL = SRV_GCALL, RESOURCE_BASE_SRV_GCALL_END = SRV_GCALL + 200,

    APP_IDLEAPP, RESOURCE_BASE_APP_IDLEAPP = APP_IDLEAPP, RESOURCE_BASE_APP_IDLEAPP_END = APP_IDLEAPP + 750,
    APP_UIFRAMEWORK, RESOURCE_BASE_APP_UIFRAMEWORK = APP_UIFRAMEWORK, RESOURCE_BASE_APP_UIFRAMEWORK_END = APP_UIFRAMEWORK + 700,
    APP_IDLE_FANCY_HANDSET_LOCK, RESOURCE_BASE_APP_IDLE_FANCY_HANDSET_LOCK = APP_IDLE_FANCY_HANDSET_LOCK, RESOURCE_BASE_APP_IDLE_FANCY_HANDSET_LOCK_END = APP_IDLE_FANCY_HANDSET_LOCK + 50,
    APP_IDLE_HOMESCREEN, RESOURCE_BASE_APP_IDLE_HOMESCREEN = APP_IDLE_HOMESCREEN, RESOURCE_BASE_APP_IDLE_HOMESCREEN_END = APP_IDLE_HOMESCREEN + 100,
# 2548 "../../mmi/inc/mmi_res_range_def.h"
    APP_SIM_DETECTION, RESOURCE_BASE_APP_SIM_DETECTION = APP_SIM_DETECTION, RESOURCE_BASE_APP_SIM_DETECTION_END = APP_SIM_DETECTION + 10,
    SRV_SAT, RESOURCE_BASE_SRV_SAT = SRV_SAT, RESOURCE_BASE_SRV_SAT_END = SRV_SAT + 50,
    SRV_CPHS, RESOURCE_BASE_SRV_CPHS = SRV_CPHS, RESOURCE_BASE_SRV_CPHS_END = SRV_CPHS + 10,
# 2563 "../../mmi/inc/mmi_res_range_def.h"
    APP_CHARGER, RESOURCE_BASE_APP_CHARGER = APP_CHARGER, RESOURCE_BASE_APP_CHARGER_END = APP_CHARGER + 30,
    SRV_CHARBAT, RESOURCE_BASE_SRV_CHARBAT = SRV_CHARBAT, RESOURCE_BASE_SRV_CHARBAT_END = SRV_CHARBAT + 10,
    APP_CALLBARRING, RESOURCE_BASE_APP_CALLBARRING = APP_CALLBARRING, RESOURCE_BASE_APP_CALLBARRING_END = APP_CALLBARRING + 100,
    APP_NETWORKSETUP, RESOURCE_BASE_APP_NETWORKSETUP = APP_NETWORKSETUP, RESOURCE_BASE_APP_NETWORKSETUP_END = APP_NETWORKSETUP + 100,



    APP_ENGINEERMODE1, RESOURCE_BASE_APP_ENGINEERMODE1 = APP_ENGINEERMODE1, RESOURCE_BASE_APP_ENGINEERMODE1_END = APP_ENGINEERMODE1 + 1500,
    APP_ENGINEERMODE, RESOURCE_BASE_APP_ENGINEERMODE = APP_ENGINEERMODE, RESOURCE_BASE_APP_ENGINEERMODE_END = APP_ENGINEERMODE + 20,
    APP_ENGINEERMODE_APP, RESOURCE_BASE_APP_ENGINEERMODE_APP = APP_ENGINEERMODE_APP, RESOURCE_BASE_APP_ENGINEERMODE_APP_END = APP_ENGINEERMODE_APP + 20,
# 2588 "../../mmi/inc/mmi_res_range_def.h"
         APP_FACTORYMODE, RESOURCE_BASE_APP_FACTORYMODE = APP_FACTORYMODE, RESOURCE_BASE_APP_FACTORYMODE_END = APP_FACTORYMODE + 850,



    SRV_FILEMANAGER, RESOURCE_BASE_SRV_FILEMANAGER = SRV_FILEMANAGER, RESOURCE_BASE_SRV_FILEMANAGER_END = SRV_FILEMANAGER + 100,

    SRV_PNS, RESOURCE_BASE_SRV_PNS = SRV_PNS, RESOURCE_BASE_SRV_PNS_END = SRV_PNS + 30,

    APP_JAVA, RESOURCE_BASE_APP_JAVA = APP_JAVA, RESOURCE_BASE_APP_JAVA_END = APP_JAVA + 500,
    APP_EXTDEVICE, RESOURCE_BASE_APP_EXTDEVICE = APP_EXTDEVICE, RESOURCE_BASE_APP_EXTDEVICE_END = APP_EXTDEVICE + 200,
    APP_CONNECTIVITY_MAINMENU, RESOURCE_BASE_APP_CONNECTIVITY_MAINMENU = APP_CONNECTIVITY_MAINMENU, RESOURCE_BASE_APP_CONNECTIVITY_MAINMENU_END = APP_CONNECTIVITY_MAINMENU + 5,
    APP_USBSRV, RESOURCE_BASE_APP_USBSRV = APP_USBSRV, RESOURCE_BASE_APP_USBSRV_END = APP_USBSRV + 10,
    APP_MULTIMEDIA, RESOURCE_BASE_APP_MULTIMEDIA = APP_MULTIMEDIA, RESOURCE_BASE_APP_MULTIMEDIA_END = APP_MULTIMEDIA + 100,
    APP_EXTRA, RESOURCE_BASE_APP_EXTRA = APP_EXTRA, RESOURCE_BASE_APP_EXTRA_END = APP_EXTRA + 100,
    APP_DICTIONARY, RESOURCE_BASE_APP_DICTIONARY = APP_DICTIONARY, RESOURCE_BASE_APP_DICTIONARY_END = APP_DICTIONARY + 10,
    APP_PICTURE_EDITOR, RESOURCE_BASE_APP_PICTURE_EDITOR = APP_PICTURE_EDITOR, RESOURCE_BASE_APP_PICTURE_EDITOR_END = APP_PICTURE_EDITOR + 200,





    APP_MESSAGE_CLUB, RESOURCE_BASE_APP_MESSAGE_CLUB = APP_MESSAGE_CLUB, RESOURCE_BASE_APP_MESSAGE_CLUB_END = APP_MESSAGE_CLUB + 10,





    SRV_DOWNLOADAGENT, RESOURCE_BASE_SRV_DOWNLOADAGENT = SRV_DOWNLOADAGENT, RESOURCE_BASE_SRV_DOWNLOADAGENT_END = SRV_DOWNLOADAGENT + 50,

    SRV_MMS, RESOURCE_BASE_SRV_MMS = SRV_MMS, RESOURCE_BASE_SRV_MMS_END = SRV_MMS + 200,




    APP_VDOEDT, RESOURCE_BASE_APP_VDOEDT = APP_VDOEDT, RESOURCE_BASE_APP_VDOEDT_END = APP_VDOEDT + 500,


    SRV_CCA, RESOURCE_BASE_SRV_CCA = SRV_CCA, RESOURCE_BASE_SRV_CCA_END = SRV_CCA + 25,





    APP_MYFAVORITE, RESOURCE_BASE_APP_MYFAVORITE = APP_MYFAVORITE, RESOURCE_BASE_APP_MYFAVORITE_END = APP_MYFAVORITE + 100,

    SRV_UCM, RESOURCE_BASE_SRV_UCM = SRV_UCM, RESOURCE_BASE_SRV_UCM_END = SRV_UCM + 30,
    APP_MOBILE_TV_PLAYER, RESOURCE_BASE_APP_MOBILE_TV_PLAYER = APP_MOBILE_TV_PLAYER, RESOURCE_BASE_APP_MOBILE_TV_PLAYER_END = APP_MOBILE_TV_PLAYER + 500,
    APP_DTV_PLAYER, RESOURCE_BASE_APP_DTV_PLAYER = APP_DTV_PLAYER, RESOURCE_BASE_APP_DTV_PLAYER_END = APP_DTV_PLAYER + 500,
    APP_DTV_MBBMS_ESG, RESOURCE_BASE_APP_DTV_MBBMS_ESG = APP_DTV_MBBMS_ESG, RESOURCE_BASE_APP_DTV_MBBMS_ESG_END = APP_DTV_MBBMS_ESG + 5,

    APP_APPLIST, RESOURCE_BASE_APP_APPLIST = APP_APPLIST, RESOURCE_BASE_APP_APPLIST_END = APP_APPLIST + 60,
    APP_APPLIST_BARREL, RESOURCE_BASE_APP_APPLIST_BARREL = APP_APPLIST_BARREL, RESOURCE_BASE_APP_APPLIST_BARREL_END = APP_APPLIST_BARREL + 20,




    APP_VT, RESOURCE_BASE_APP_VT = APP_VT, RESOURCE_BASE_APP_VT_END = APP_VT + 1,

    APP_MMS_V01AGENT, RESOURCE_BASE_APP_MMS_V01AGENT = APP_MMS_V01AGENT, RESOURCE_BASE_APP_MMS_V01AGENT_END = APP_MMS_V01AGENT + 20,

    APP_GIS, RESOURCE_BASE_APP_GIS = APP_GIS, RESOURCE_BASE_APP_GIS_END = APP_GIS + 100,

    SRV_WAP_PROF, RESOURCE_BASE_SRV_WAP_PROF = SRV_WAP_PROF, RESOURCE_BASE_SRV_WAP_PROF_END = SRV_WAP_PROF + 18,

    APP_AVK, RESOURCE_BASE_APP_AVK = APP_AVK, RESOURCE_BASE_APP_AVK_END = APP_AVK + 400,

    APP_MRE_APPMGR, RESOURCE_BASE_APP_MRE_APPMGR = APP_MRE_APPMGR, RESOURCE_BASE_APP_MRE_APPMGR_END = APP_MRE_APPMGR + 100,
    APP_A2DP, RESOURCE_BASE_APP_A2DP = APP_A2DP, RESOURCE_BASE_APP_A2DP_END = APP_A2DP + 10,
    SRV_BTCM, RESOURCE_BASE_SRV_BTCM = SRV_BTCM, RESOURCE_BASE_SRV_BTCM_END = SRV_BTCM + 10,
    APP_FTP, RESOURCE_BASE_APP_FTP = APP_FTP, RESOURCE_BASE_APP_FTP_END = APP_FTP + 10,





    APP_TTS_TEST, RESOURCE_BASE_APP_TTS_TEST = APP_TTS_TEST, RESOURCE_BASE_APP_TTS_TEST_END = APP_TTS_TEST + 1,
    APP_BIP, RESOURCE_BASE_APP_BIP = APP_BIP, RESOURCE_BASE_APP_BIP_END = APP_BIP + 10,



    APP_UCWEB, RESOURCE_BASE_APP_UCWEB = APP_UCWEB, RESOURCE_BASE_APP_UCWEB_END = APP_UCWEB + 10,
    APP_QQIM, RESOURCE_BASE_APP_QQIM = APP_QQIM, RESOURCE_BASE_APP_QQIM_END = APP_QQIM + 300,
    APP_A8BOX, RESOURCE_BASE_APP_A8BOX = APP_A8BOX, RESOURCE_BASE_APP_A8BOX_END = APP_A8BOX + 200,

    SRV_VIRTUAL_KEYBOARD, RESOURCE_BASE_SRV_VIRTUAL_KEYBOARD = SRV_VIRTUAL_KEYBOARD, RESOURCE_BASE_SRV_VIRTUAL_KEYBOARD_END = SRV_VIRTUAL_KEYBOARD + 6000,

    SRV_VIRTUAL_KEYBOARD_MISC, RESOURCE_BASE_SRV_VIRTUAL_KEYBOARD_MISC = SRV_VIRTUAL_KEYBOARD_MISC, RESOURCE_BASE_SRV_VIRTUAL_KEYBOARD_MISC_END = SRV_VIRTUAL_KEYBOARD_MISC + 300,
    SRV_VENUS_COMPONENTS, RESOURCE_BASE_SRV_VENUS_COMPONENTS = SRV_VENUS_COMPONENTS, RESOURCE_BASE_SRV_VENUS_COMPONENTS_END = SRV_VENUS_COMPONENTS + 150,
        SRV_VENUS_COMPONENT_NORMAL_MODE_MENU, RESOURCE_BASE_SRV_VENUS_COMPONENT_NORMAL_MODE_MENU = SRV_VENUS_COMPONENT_NORMAL_MODE_MENU, RESOURCE_BASE_SRV_VENUS_COMPONENT_NORMAL_MODE_MENU_END = SRV_VENUS_COMPONENT_NORMAL_MODE_MENU + 10,
    APP_QQ_MOVIE, RESOURCE_BASE_APP_QQ_MOVIE = APP_QQ_MOVIE, RESOURCE_BASE_APP_QQ_MOVIE_END = APP_QQ_MOVIE + 100,
    CUI_TONE_SELECTOR, RESOURCE_BASE_CUI_TONE_SELECTOR = CUI_TONE_SELECTOR, RESOURCE_BASE_CUI_TONE_SELECTOR_END = CUI_TONE_SELECTOR + 20,
    SRV_VENUS_FW, RESOURCE_BASE_SRV_VENUS_FW = SRV_VENUS_FW, RESOURCE_BASE_SRV_VENUS_FW_END = SRV_VENUS_FW + 300,
    CUI_MENU, RESOURCE_BASE_CUI_MENU = CUI_MENU, RESOURCE_BASE_CUI_MENU_END = CUI_MENU + 20,
    SRV_MMI_CHARSET, RESOURCE_BASE_SRV_MMI_CHARSET = SRV_MMI_CHARSET, RESOURCE_BASE_SRV_MMI_CHARSET_END = SRV_MMI_CHARSET + 50,
    APP_PBAP, RESOURCE_BASE_APP_PBAP = APP_PBAP, RESOURCE_BASE_APP_PBAP_END = APP_PBAP + 10,
    APP_OPP, RESOURCE_BASE_APP_OPP = APP_OPP, RESOURCE_BASE_APP_OPP_END = APP_OPP + 10,
    SRV_PLST, RESOURCE_BASE_SRV_PLST = SRV_PLST, RESOURCE_BASE_SRV_PLST_END = SRV_PLST + 50,
    SRV_PLST_SLIM, RESOURCE_BASE_SRV_PLST_SLIM = SRV_PLST_SLIM, RESOURCE_BASE_SRV_PLST_SLIM_END = SRV_PLST_SLIM + 20,




    APP_MEDIAWALL, RESOURCE_BASE_APP_MEDIAWALL = APP_MEDIAWALL, RESOURCE_BASE_APP_MEDIAWALL_END = APP_MEDIAWALL + 100,
    APP_VENUS_CUBE, RESOURCE_BASE_APP_VENUS_CUBE = APP_VENUS_CUBE, RESOURCE_BASE_APP_VENUS_CUBE_END = APP_VENUS_CUBE + 100,
    APP_FONT_MANAGER, RESOURCE_BASE_APP_FONT_MANAGER = APP_FONT_MANAGER, RESOURCE_BASE_APP_FONT_MANAGER_END = APP_FONT_MANAGER + 50,
    SRV_WGTMGR, RESOURCE_BASE_SRV_WGTMGR = SRV_WGTMGR, RESOURCE_BASE_SRV_WGTMGR_END = SRV_WGTMGR + 30,
    SRV_EDITOR, RESOURCE_BASE_SRV_EDITOR = SRV_EDITOR, RESOURCE_BASE_SRV_EDITOR_END = SRV_EDITOR + 100,
    SRV_SENSOR, RESOURCE_BASE_SRV_SENSOR = SRV_SENSOR, RESOURCE_BASE_SRV_SENSOR_END = SRV_SENSOR + 10,
    IMPS_SRV, RESOURCE_BASE_IMPS_SRV = IMPS_SRV, RESOURCE_BASE_IMPS_SRV_END = IMPS_SRV + 10,
    SRV_GPIO, RESOURCE_BASE_SRV_GPIO = SRV_GPIO, RESOURCE_BASE_SRV_GPIO_END = SRV_GPIO + 30,
    APP_GPIO, RESOURCE_BASE_APP_GPIO = APP_GPIO, RESOURCE_BASE_APP_GPIO_END = APP_GPIO + 30,
    SRV_NETSET, RESOURCE_BASE_SRV_NETSET = SRV_NETSET, RESOURCE_BASE_SRV_NETSET_END = SRV_NETSET + 800,
    SRV_MODESWITCH, RESOURCE_BASE_SRV_MODESWITCH = SRV_MODESWITCH, RESOURCE_BASE_SRV_MODESWITCH_END = SRV_MODESWITCH + 10,
    SRV_PEN_CALIBRATION, RESOURCE_BASE_SRV_PEN_CALIBRATION = SRV_PEN_CALIBRATION, RESOURCE_BASE_SRV_PEN_CALIBRATION_END = SRV_PEN_CALIBRATION + 30,
    SRV_GENERAL_SETTING, RESOURCE_BASE_SRV_GENERAL_SETTING = SRV_GENERAL_SETTING, RESOURCE_BASE_SRV_GENERAL_SETTING_END = SRV_GENERAL_SETTING + 30,
    SRV_NW_USAB, RESOURCE_BASE_SRV_NW_USAB = SRV_NW_USAB, RESOURCE_BASE_SRV_NW_USAB_END = SRV_NW_USAB + 10,
    SRV_CBS, RESOURCE_BASE_SRV_CBS = SRV_CBS, RESOURCE_BASE_SRV_CBS_END = SRV_CBS + 50,
    SRV_CBM, RESOURCE_BASE_SRV_CBM = SRV_CBM, RESOURCE_BASE_SRV_CBM_END = SRV_CBM + 10,



    APP_OPERA_ADP, RESOURCE_BASE_APP_OPERA_ADP = APP_OPERA_ADP, RESOURCE_BASE_APP_OPERA_ADP_END = APP_OPERA_ADP + 20,
    APP_OPERA, RESOURCE_BASE_APP_OPERA = APP_OPERA, RESOURCE_BASE_APP_OPERA_END = APP_OPERA + 900,
    APP_OPERA_PARTIAL, RESOURCE_BASE_APP_OPERA_PARTIAL = APP_OPERA_PARTIAL, RESOURCE_BASE_APP_OPERA_PARTIAL_END = APP_OPERA_PARTIAL + 20,



    APP_IDLE, RESOURCE_BASE_APP_IDLE = APP_IDLE, RESOURCE_BASE_APP_IDLE_END = APP_IDLE + 50,
    APP_IDLE_NMGR, RESOURCE_BASE_APP_IDLE_NMGR = APP_IDLE_NMGR, RESOURCE_BASE_APP_IDLE_NMGR_END = APP_IDLE_NMGR + 20,
    APP_SCR_LOCKER, RESOURCE_BASE_APP_SCR_LOCKER = APP_SCR_LOCKER, RESOURCE_BASE_APP_SCR_LOCKER_END = APP_SCR_LOCKER + 30,



    CUI_DIALER, RESOURCE_BASE_CUI_DIALER = CUI_DIALER, RESOURCE_BASE_CUI_DIALER_END = CUI_DIALER + 20,
    SRV_NW_NAME, RESOURCE_BASE_SRV_NW_NAME = SRV_NW_NAME, RESOURCE_BASE_SRV_NW_NAME_END = SRV_NW_NAME + 50,
# 2731 "../../mmi/inc/mmi_res_range_def.h"
    SRV_NTP, RESOURCE_BASE_SRV_NTP = SRV_NTP, RESOURCE_BASE_SRV_NTP_END = SRV_NTP + 10,

    SRV_INLINE_EDITOR, RESOURCE_BASE_SRV_INLINE_EDITOR = SRV_INLINE_EDITOR, RESOURCE_BASE_SRV_INLINE_EDITOR_END = SRV_INLINE_EDITOR + 50,
    CUI_MSG_VIEWER, RESOURCE_BASE_CUI_MSG_VIEWER = CUI_MSG_VIEWER, RESOURCE_BASE_CUI_MSG_VIEWER_END = CUI_MSG_VIEWER + 10,

    APP_VENUS_SHELL_RECENT_CALLS, RESOURCE_BASE_APP_VENUS_SHELL_RECENT_CALLS = APP_VENUS_SHELL_RECENT_CALLS, RESOURCE_BASE_APP_VENUS_SHELL_RECENT_CALLS_END = APP_VENUS_SHELL_RECENT_CALLS + 35,
    APP_VENUS_SHELL_IV, RESOURCE_BASE_APP_VENUS_SHELL_IV = APP_VENUS_SHELL_IV, RESOURCE_BASE_APP_VENUS_SHELL_IV_END = APP_VENUS_SHELL_IV + 30,
    APP_VENUS_SHELL_MEDIAPLAYER, RESOURCE_BASE_APP_VENUS_SHELL_MEDIAPLAYER = APP_VENUS_SHELL_MEDIAPLAYER, RESOURCE_BASE_APP_VENUS_SHELL_MEDIAPLAYER_END = APP_VENUS_SHELL_MEDIAPLAYER + 50,
    APP_SHELLAPP_BASE, RESOURCE_BASE_APP_SHELLAPP_BASE = APP_SHELLAPP_BASE, RESOURCE_BASE_APP_SHELLAPP_BASE_END = APP_SHELLAPP_BASE + 80,
    APP_VENUS_SHELL_SETTINGS, RESOURCE_BASE_APP_VENUS_SHELL_SETTINGS = APP_VENUS_SHELL_SETTINGS, RESOURCE_BASE_APP_VENUS_SHELL_SETTINGS_END = APP_VENUS_SHELL_SETTINGS + 30,
    APP_VENUS_SHELL_MSG_VIEWER, RESOURCE_BASE_APP_VENUS_SHELL_MSG_VIEWER = APP_VENUS_SHELL_MSG_VIEWER, RESOURCE_BASE_APP_VENUS_SHELL_MSG_VIEWER_END = APP_VENUS_SHELL_MSG_VIEWER + 50,
    APP_VENUS_NOTEPAPER, RESOURCE_BASE_APP_VENUS_NOTEPAPER = APP_VENUS_NOTEPAPER, RESOURCE_BASE_APP_VENUS_NOTEPAPER_END = APP_VENUS_NOTEPAPER + 50,
    APP_VENUS_SHELL_FC, RESOURCE_BASE_APP_VENUS_SHELL_FC = APP_VENUS_SHELL_FC, RESOURCE_BASE_APP_VENUS_SHELL_FC_END = APP_VENUS_SHELL_FC + 50,
    APP_VENUS_SHELL_SCRLOCK, RESOURCE_BASE_APP_VENUS_SHELL_SCRLOCK = APP_VENUS_SHELL_SCRLOCK, RESOURCE_BASE_APP_VENUS_SHELL_SCRLOCK_END = APP_VENUS_SHELL_SCRLOCK + 10,




    APP_VENUS_HOMESCREEN, RESOURCE_BASE_APP_VENUS_HOMESCREEN = APP_VENUS_HOMESCREEN, RESOURCE_BASE_APP_VENUS_HOMESCREEN_END = APP_VENUS_HOMESCREEN + 100,
# 2824 "../../mmi/inc/mmi_res_range_def.h"
    APP_VENUS_HOMESCREEN_WG_CALENDAR, RESOURCE_BASE_APP_VENUS_HOMESCREEN_WG_CALENDAR = APP_VENUS_HOMESCREEN_WG_CALENDAR, RESOURCE_BASE_APP_VENUS_HOMESCREEN_WG_CALENDAR_END = APP_VENUS_HOMESCREEN_WG_CALENDAR + 20,
    APP_VENUS_HOMESCREEN_WG_DATE, RESOURCE_BASE_APP_VENUS_HOMESCREEN_WG_DATE = APP_VENUS_HOMESCREEN_WG_DATE, RESOURCE_BASE_APP_VENUS_HOMESCREEN_WG_DATE_END = APP_VENUS_HOMESCREEN_WG_DATE + 50,
    APP_VENUS_HOMESCREEN_WG_MEMO, RESOURCE_BASE_APP_VENUS_HOMESCREEN_WG_MEMO = APP_VENUS_HOMESCREEN_WG_MEMO, RESOURCE_BASE_APP_VENUS_HOMESCREEN_WG_MEMO_END = APP_VENUS_HOMESCREEN_WG_MEMO + 10,
    APP_VENUS_HOMESCREEN_WG_CLOCK, RESOURCE_BASE_APP_VENUS_HOMESCREEN_WG_CLOCK = APP_VENUS_HOMESCREEN_WG_CLOCK, RESOURCE_BASE_APP_VENUS_HOMESCREEN_WG_CLOCK_END = APP_VENUS_HOMESCREEN_WG_CLOCK + 200,
    APP_VENUS_HOMESCREEN_WG_PET, RESOURCE_BASE_APP_VENUS_HOMESCREEN_WG_PET = APP_VENUS_HOMESCREEN_WG_PET, RESOURCE_BASE_APP_VENUS_HOMESCREEN_WG_PET_END = APP_VENUS_HOMESCREEN_WG_PET + 50,
    APP_VENUS_HOMESCREEN_WG_SNOW, RESOURCE_BASE_APP_VENUS_HOMESCREEN_WG_SNOW = APP_VENUS_HOMESCREEN_WG_SNOW, RESOURCE_BASE_APP_VENUS_HOMESCREEN_WG_SNOW_END = APP_VENUS_HOMESCREEN_WG_SNOW + 10,
    APP_VENUS_HOMESCREEN_WG_MRE, RESOURCE_BASE_APP_VENUS_HOMESCREEN_WG_MRE = APP_VENUS_HOMESCREEN_WG_MRE, RESOURCE_BASE_APP_VENUS_HOMESCREEN_WG_MRE_END = APP_VENUS_HOMESCREEN_WG_MRE + 10,
    APP_VENUS_HOMESCREEN_WG_PROFILE, RESOURCE_BASE_APP_VENUS_HOMESCREEN_WG_PROFILE = APP_VENUS_HOMESCREEN_WG_PROFILE, RESOURCE_BASE_APP_VENUS_HOMESCREEN_WG_PROFILE_END = APP_VENUS_HOMESCREEN_WG_PROFILE + 25,
    APP_VENUS_HOMESCREEN_WG_OPERATOR_NAME, RESOURCE_BASE_APP_VENUS_HOMESCREEN_WG_OPERATOR_NAME = APP_VENUS_HOMESCREEN_WG_OPERATOR_NAME, RESOURCE_BASE_APP_VENUS_HOMESCREEN_WG_OPERATOR_NAME_END = APP_VENUS_HOMESCREEN_WG_OPERATOR_NAME + 10,
    APP_VENUS_HOMESCREEN_WG_EVENT_INBOX, RESOURCE_BASE_APP_VENUS_HOMESCREEN_WG_EVENT_INBOX = APP_VENUS_HOMESCREEN_WG_EVENT_INBOX, RESOURCE_BASE_APP_VENUS_HOMESCREEN_WG_EVENT_INBOX_END = APP_VENUS_HOMESCREEN_WG_EVENT_INBOX + 10,
    APP_VENUS_HOMESCREEN_WG_NEXT_ALARM, RESOURCE_BASE_APP_VENUS_HOMESCREEN_WG_NEXT_ALARM = APP_VENUS_HOMESCREEN_WG_NEXT_ALARM, RESOURCE_BASE_APP_VENUS_HOMESCREEN_WG_NEXT_ALARM_END = APP_VENUS_HOMESCREEN_WG_NEXT_ALARM + 20,
    APP_VENUS_HS_TODO, RESOURCE_BASE_APP_VENUS_HS_TODO = APP_VENUS_HS_TODO, RESOURCE_BASE_APP_VENUS_HS_TODO_END = APP_VENUS_HS_TODO + 50,
    APP_VENUS_HOMESCREEN_WG_AUDIOPLAYER, RESOURCE_BASE_APP_VENUS_HOMESCREEN_WG_AUDIOPLAYER = APP_VENUS_HOMESCREEN_WG_AUDIOPLAYER, RESOURCE_BASE_APP_VENUS_HOMESCREEN_WG_AUDIOPLAYER_END = APP_VENUS_HOMESCREEN_WG_AUDIOPLAYER + 30,
    APP_VENUS_HOMESCREEN_WG_FMRADIO, RESOURCE_BASE_APP_VENUS_HOMESCREEN_WG_FMRADIO = APP_VENUS_HOMESCREEN_WG_FMRADIO, RESOURCE_BASE_APP_VENUS_HOMESCREEN_WG_FMRADIO_END = APP_VENUS_HOMESCREEN_WG_FMRADIO + 30,
    APP_VENUS_HOMESCREEN_WG_PHOTO, RESOURCE_BASE_APP_VENUS_HOMESCREEN_WG_PHOTO = APP_VENUS_HOMESCREEN_WG_PHOTO, RESOURCE_BASE_APP_VENUS_HOMESCREEN_WG_PHOTO_END = APP_VENUS_HOMESCREEN_WG_PHOTO + 30,
    SRV_CALLLOG, RESOURCE_BASE_SRV_CALLLOG = SRV_CALLLOG, RESOURCE_BASE_SRV_CALLLOG_END = SRV_CALLLOG + 20,

    APP_OP11_HS32, RESOURCE_BASE_APP_OP11_HS32 = APP_OP11_HS32, RESOURCE_BASE_APP_OP11_HS32_END = APP_OP11_HS32 + 300,
    APP_VENUS_HS_WG_BKM, RESOURCE_BASE_APP_VENUS_HS_WG_BKM = APP_VENUS_HS_WG_BKM, RESOURCE_BASE_APP_VENUS_HS_WG_BKM_END = APP_VENUS_HS_WG_BKM + 20,
    APP_IMAGEFLOW, RESOURCE_BASE_APP_IMAGEFLOW = APP_IMAGEFLOW, RESOURCE_BASE_APP_IMAGEFLOW_END = APP_IMAGEFLOW + 20,
    APP_VENUS_HS_WG_BAIDU, RESOURCE_BASE_APP_VENUS_HS_WG_BAIDU = APP_VENUS_HS_WG_BAIDU, RESOURCE_BASE_APP_VENUS_HS_WG_BAIDU_END = APP_VENUS_HS_WG_BAIDU + 30,
    APP_SIM_ME_LOCK, RESOURCE_BASE_APP_SIM_ME_LOCK = APP_SIM_ME_LOCK, RESOURCE_BASE_APP_SIM_ME_LOCK_END = APP_SIM_ME_LOCK + 50,
    APP_NMC, RESOURCE_BASE_APP_NMC = APP_NMC, RESOURCE_BASE_APP_NMC_END = APP_NMC + 50,
    APP_MOBILEVIDEO, RESOURCE_BASE_APP_MOBILEVIDEO = APP_MOBILEVIDEO, RESOURCE_BASE_APP_MOBILEVIDEO_END = APP_MOBILEVIDEO + 50,
    SRV_IMGEDT, RESOURCE_BASE_SRV_IMGEDT = SRV_IMGEDT, RESOURCE_BASE_SRV_IMGEDT_END = SRV_IMGEDT + 30,


    APP_CB_MGR, RESOURCE_BASE_APP_CB_MGR = APP_CB_MGR, RESOURCE_BASE_APP_CB_MGR_END = APP_CB_MGR + 3,




    APP_APPMGR_TEST_1, RESOURCE_BASE_APP_APPMGR_TEST_1 = APP_APPMGR_TEST_1, RESOURCE_BASE_APP_APPMGR_TEST_1_END = APP_APPMGR_TEST_1 + 5,
    APP_APPMGR_TEST_2, RESOURCE_BASE_APP_APPMGR_TEST_2 = APP_APPMGR_TEST_2, RESOURCE_BASE_APP_APPMGR_TEST_2_END = APP_APPMGR_TEST_2 + 5,
    APP_APPMGR_TEST_3, RESOURCE_BASE_APP_APPMGR_TEST_3 = APP_APPMGR_TEST_3, RESOURCE_BASE_APP_APPMGR_TEST_3_END = APP_APPMGR_TEST_3 + 5,
    APP_APPMGR_TEST_4, RESOURCE_BASE_APP_APPMGR_TEST_4 = APP_APPMGR_TEST_4, RESOURCE_BASE_APP_APPMGR_TEST_4_END = APP_APPMGR_TEST_4 + 5,
    APP_AUTO_ROTATE, RESOURCE_BASE_APP_AUTO_ROTATE = APP_AUTO_ROTATE, RESOURCE_BASE_APP_AUTO_ROTATE_END = APP_AUTO_ROTATE + 10,
    FW_NVRAM_MGR, RESOURCE_BASE_FW_NVRAM_MGR = FW_NVRAM_MGR, RESOURCE_BASE_FW_NVRAM_MGR_END = FW_NVRAM_MGR + 10,
    SRV_REMINDER, RESOURCE_BASE_SRV_REMINDER = SRV_REMINDER, RESOURCE_BASE_SRV_REMINDER_END = SRV_REMINDER + 30,
    SRV_TODOLIST, RESOURCE_BASE_SRV_TODOLIST = SRV_TODOLIST, RESOURCE_BASE_SRV_TODOLIST_END = SRV_TODOLIST + 20,
    SRV_SOUNDREC, RESOURCE_BASE_SRV_SOUNDREC = SRV_SOUNDREC, RESOURCE_BASE_SRV_SOUNDREC_END = SRV_SOUNDREC + 10,



    SRV_BROWSER, RESOURCE_BASE_SRV_BROWSER = SRV_BROWSER, RESOURCE_BASE_SRV_BROWSER_END = SRV_BROWSER + 50,
    SRV_PUSH, RESOURCE_BASE_SRV_PUSH = SRV_PUSH, RESOURCE_BASE_SRV_PUSH_END = SRV_PUSH + 50,
    SRV_MDI_VDOREC, RESOURCE_BASE_SRV_MDI_VDOREC = SRV_MDI_VDOREC, RESOURCE_BASE_SRV_MDI_VDOREC_END = SRV_MDI_VDOREC + 2,
    SRV_MDI_VDOREC_CIF, RESOURCE_BASE_SRV_MDI_VDOREC_CIF = SRV_MDI_VDOREC_CIF, RESOURCE_BASE_SRV_MDI_VDOREC_CIF_END = SRV_MDI_VDOREC_CIF + 2,
    APP_SDK_TEST, RESOURCE_BASE_APP_SDK_TEST = APP_SDK_TEST, RESOURCE_BASE_APP_SDK_TEST_END = APP_SDK_TEST + 900,

    APP_SIMSPACE, RESOURCE_BASE_APP_SIMSPACE = APP_SIMSPACE, RESOURCE_BASE_APP_SIMSPACE_END = APP_SIMSPACE + 20,
    SRV_DATETIME, RESOURCE_BASE_SRV_DATETIME = SRV_DATETIME, RESOURCE_BASE_SRV_DATETIME_END = SRV_DATETIME + 10,
    CUI_SIM_SEL, RESOURCE_BASE_CUI_SIM_SEL = CUI_SIM_SEL, RESOURCE_BASE_CUI_SIM_SEL_END = CUI_SIM_SEL + 10,
    APP_DISPLAY_RESOURCE, RESOURCE_BASE_APP_DISPLAY_RESOURCE = APP_DISPLAY_RESOURCE, RESOURCE_BASE_APP_DISPLAY_RESOURCE_END = APP_DISPLAY_RESOURCE + 200,
    SRV_RESTORE, RESOURCE_BASE_SRV_RESTORE = SRV_RESTORE, RESOURCE_BASE_SRV_RESTORE_END = SRV_RESTORE + 10,
    SRV_INPUT_METHOD, RESOURCE_BASE_SRV_INPUT_METHOD = SRV_INPUT_METHOD, RESOURCE_BASE_SRV_INPUT_METHOD_END = SRV_INPUT_METHOD + 200,






    APP_139, RESOURCE_BASE_APP_139 = APP_139, RESOURCE_BASE_APP_139_END = APP_139 + 300,
    SRV_ALARM, RESOURCE_BASE_SRV_ALARM = SRV_ALARM, RESOURCE_BASE_SRV_ALARM_END = SRV_ALARM + 10,



    SRV_TETHERING, RESOURCE_BASE_SRV_TETHERING = SRV_TETHERING, RESOURCE_BASE_SRV_TETHERING_END = SRV_TETHERING + 40,
    SRV_PHB, RESOURCE_BASE_SRV_PHB = SRV_PHB, RESOURCE_BASE_SRV_PHB_END = SRV_PHB + 50,
    SRV_PUSH_SWITCH, RESOURCE_BASE_SRV_PUSH_SWITCH = SRV_PUSH_SWITCH, RESOURCE_BASE_SRV_PUSH_SWITCH_END = SRV_PUSH_SWITCH + 5,
    SRV_GDI, RESOURCE_BASE_SRV_GDI = SRV_GDI, RESOURCE_BASE_SRV_GDI_END = SRV_GDI + 128,
    SRV_NITZ, RESOURCE_BASE_SRV_NITZ = SRV_NITZ, RESOURCE_BASE_SRV_NITZ_END = SRV_NITZ + 10,
    APP_EM_MULTI_TOUCH_TEST, RESOURCE_BASE_APP_EM_MULTI_TOUCH_TEST = APP_EM_MULTI_TOUCH_TEST, RESOURCE_BASE_APP_EM_MULTI_TOUCH_TEST_END = APP_EM_MULTI_TOUCH_TEST + 10,
    APP_ALIPAY_ADP, RESOURCE_BASE_APP_ALIPAY_ADP = APP_ALIPAY_ADP, RESOURCE_BASE_APP_ALIPAY_ADP_END = APP_ALIPAY_ADP + 100,
    CUI_ALERT, RESOURCE_BASE_CUI_ALERT = CUI_ALERT, RESOURCE_BASE_CUI_ALERT_END = CUI_ALERT + 2,
    SRV_DM, RESOURCE_BASE_SRV_DM = SRV_DM, RESOURCE_BASE_SRV_DM_END = SRV_DM + 100,
    SRV_DM_SR, RESOURCE_BASE_SRV_DM_SR = SRV_DM_SR, RESOURCE_BASE_SRV_DM_SR_END = SRV_DM_SR + 10,
    SRV_DATALOCK, RESOURCE_BASE_SRV_DATALOCK = SRV_DATALOCK, RESOURCE_BASE_SRV_DATALOCK_END = SRV_DATALOCK + 10,



    SRV_CNMGR, RESOURCE_BASE_SRV_CNMGR = SRV_CNMGR, RESOURCE_BASE_SRV_CNMGR_END = SRV_CNMGR + 10,
    SRV_APPMGR, RESOURCE_BASE_SRV_APPMGR = SRV_APPMGR, RESOURCE_BASE_SRV_APPMGR_END = SRV_APPMGR + 10,



    CUI_USE_DETAIL, RESOURCE_BASE_CUI_USE_DETAIL = CUI_USE_DETAIL, RESOURCE_BASE_CUI_USE_DETAIL_END = CUI_USE_DETAIL + 50,
        APP_FONT_EFFECTS, RESOURCE_BASE_APP_FONT_EFFECTS = APP_FONT_EFFECTS, RESOURCE_BASE_APP_FONT_EFFECTS_END = APP_FONT_EFFECTS + 60,
    VAPP_VIDEO_PLAYER_CP, RESOURCE_BASE_VAPP_VIDEO_PLAYER_CP = VAPP_VIDEO_PLAYER_CP, RESOURCE_BASE_VAPP_VIDEO_PLAYER_CP_END = VAPP_VIDEO_PLAYER_CP + 10,




    SRV_MPR, RESOURCE_BASE_SRV_MPR = SRV_MPR, RESOURCE_BASE_SRV_MPR_END = SRV_MPR + 5,


    SRV_BTSCO, RESOURCE_BASE_SRV_BTSCO = SRV_BTSCO, RESOURCE_BASE_SRV_BTSCO_END = SRV_BTSCO + 3,


    SRV_NSS, RESOURCE_BASE_SRV_NSS = SRV_NSS, RESOURCE_BASE_SRV_NSS_END = SRV_NSS + 10,
# 2933 "../../mmi/inc/mmi_res_range_def.h"
    SRV_SAFE_MODE, RESOURCE_BASE_SRV_SAFE_MODE = SRV_SAFE_MODE, RESOURCE_BASE_SRV_SAFE_MODE_END = SRV_SAFE_MODE + 5,
    CORE_UCM, RESOURCE_BASE_CORE_UCM = CORE_UCM, RESOURCE_BASE_CORE_UCM_END = CORE_UCM + 30,


    SRV_AVRCP, RESOURCE_BASE_SRV_AVRCP = SRV_AVRCP, RESOURCE_BASE_SRV_AVRCP_END = SRV_AVRCP + 5,


    SRV_A2DP, RESOURCE_BASE_SRV_A2DP = SRV_A2DP, RESOURCE_BASE_SRV_A2DP_END = SRV_A2DP + 5,


        APP_TENCENT_MCARE, RESOURCE_BASE_APP_TENCENT_MCARE = APP_TENCENT_MCARE, RESOURCE_BASE_APP_TENCENT_MCARE_END = APP_TENCENT_MCARE + 30,
        APP_TENCENT_MCARE_BG, RESOURCE_BASE_APP_TENCENT_MCARE_BG = APP_TENCENT_MCARE_BG, RESOURCE_BASE_APP_TENCENT_MCARE_BG_END = APP_TENCENT_MCARE_BG + 10,


    SRV_VENUS_THEME, RESOURCE_BASE_SRV_VENUS_THEME = SRV_VENUS_THEME, RESOURCE_BASE_SRV_VENUS_THEME_END = SRV_VENUS_THEME + 3,
    APP_AM, RESOURCE_BASE_APP_AM = APP_AM, RESOURCE_BASE_APP_AM_END = APP_AM + 200,







    APP_GB_WINGUO, RESOURCE_BASE_APP_GB_WINGUO = APP_GB_WINGUO, RESOURCE_BASE_APP_GB_WINGUO_END = APP_GB_WINGUO + 300,
    APP_GB_WINGUO_NET, RESOURCE_BASE_APP_GB_WINGUO_NET = APP_GB_WINGUO_NET, RESOURCE_BASE_APP_GB_WINGUO_NET_END = APP_GB_WINGUO_NET + 10,
# 2971 "../../mmi/inc/mmi_res_range_def.h"
    SRV_FULLSCREEN_EDITOR, RESOURCE_BASE_SRV_FULLSCREEN_EDITOR = SRV_FULLSCREEN_EDITOR, RESOURCE_BASE_SRV_FULLSCREEN_EDITOR_END = SRV_FULLSCREEN_EDITOR + 10,




# 1 "../../mmi/inc/mmi_pluto_res_range_def.h" 1
# 759 "../../mmi/inc/mmi_pluto_res_range_def.h"
APP_BLUETOOTH, RESOURCE_BASE_APP_BLUETOOTH = APP_BLUETOOTH, RESOURCE_BASE_APP_BLUETOOTH_END = APP_BLUETOOTH + 450,
# 776 "../../mmi/inc/mmi_pluto_res_range_def.h"
APP_BOOTUP, RESOURCE_BASE_APP_BOOTUP = APP_BOOTUP, RESOURCE_BASE_APP_BOOTUP_END = APP_BOOTUP + 200,





APP_NW_INFO, RESOURCE_BASE_APP_NW_INFO = APP_NW_INFO, RESOURCE_BASE_APP_NW_INFO_END = APP_NW_INFO + 20,






APP_SIM_CTRL, RESOURCE_BASE_APP_SIM_CTRL = APP_SIM_CTRL, RESOURCE_BASE_APP_SIM_CTRL_END = APP_SIM_CTRL + 20,





APP_SHUTDOWN, RESOURCE_BASE_APP_SHUTDOWN = APP_SHUTDOWN, RESOURCE_BASE_APP_SHUTDOWN_END = APP_SHUTDOWN + 50,




APP_SECURITY_SETTING, RESOURCE_BASE_APP_SECURITY_SETTING = APP_SECURITY_SETTING, RESOURCE_BASE_APP_SECURITY_SETTING_END = APP_SECURITY_SETTING + 150,




CUI_VERIFY, RESOURCE_BASE_CUI_VERIFY = CUI_VERIFY, RESOURCE_BASE_CUI_VERIFY_END = CUI_VERIFY + 20,





CUI_PASSWORD, RESOURCE_BASE_CUI_PASSWORD = CUI_PASSWORD, RESOURCE_BASE_CUI_PASSWORD_END = CUI_PASSWORD + 30,






APP_CAMERA, RESOURCE_BASE_APP_CAMERA = APP_CAMERA, RESOURCE_BASE_APP_CAMERA_END = APP_CAMERA + 600,
# 829 "../../mmi/inc/mmi_pluto_res_range_def.h"
APP_IMAGEVIEWER, RESOURCE_BASE_APP_IMAGEVIEWER = APP_IMAGEVIEWER, RESOURCE_BASE_APP_IMAGEVIEWER_END = APP_IMAGEVIEWER + 300,

CUI_IMAGEVIEWER, RESOURCE_BASE_CUI_IMAGEVIEWER = CUI_IMAGEVIEWER, RESOURCE_BASE_CUI_IMAGEVIEWER_END = CUI_IMAGEVIEWER + 30,
# 841 "../../mmi/inc/mmi_pluto_res_range_def.h"
CUI_TONESELECTOR, RESOURCE_BASE_CUI_TONESELECTOR = CUI_TONESELECTOR, RESOURCE_BASE_CUI_TONESELECTOR_END = CUI_TONESELECTOR + 10,







APP_SOUNDRECORDER, RESOURCE_BASE_APP_SOUNDRECORDER = APP_SOUNDRECORDER, RESOURCE_BASE_APP_SOUNDRECORDER_END = APP_SOUNDRECORDER + 300,
# 876 "../../mmi/inc/mmi_pluto_res_range_def.h"
APP_FMRDO, RESOURCE_BASE_APP_FMRDO = APP_FMRDO, RESOURCE_BASE_APP_FMRDO_END = APP_FMRDO + 300,
# 893 "../../mmi/inc/mmi_pluto_res_range_def.h"
APP_AUDIOPLAYER, RESOURCE_BASE_APP_AUDIOPLAYER = APP_AUDIOPLAYER, RESOURCE_BASE_APP_AUDIOPLAYER_END = APP_AUDIOPLAYER + 500,



APP_SINGLE_AUDIO, RESOURCE_BASE_APP_SINGLE_AUDIO = APP_SINGLE_AUDIO, RESOURCE_BASE_APP_SINGLE_AUDIO_END = APP_SINGLE_AUDIO + 1,

APP_MEDPLY_SINGLE, RESOURCE_BASE_APP_MEDPLY_SINGLE = APP_MEDPLY_SINGLE, RESOURCE_BASE_APP_MEDPLY_SINGLE_END = APP_MEDPLY_SINGLE + (2),
# 927 "../../mmi/inc/mmi_pluto_res_range_def.h"
APP_BGSOUND, RESOURCE_BASE_APP_BGSOUND = APP_BGSOUND, RESOURCE_BASE_APP_BGSOUND_END = APP_BGSOUND + 200,






APP_WEBCAM, RESOURCE_BASE_APP_WEBCAM = APP_WEBCAM, RESOURCE_BASE_APP_WEBCAM_END = APP_WEBCAM + 10,




  APP_CAMCO, RESOURCE_BASE_APP_CAMCO = APP_CAMCO, RESOURCE_BASE_APP_CAMCO_END = APP_CAMCO + 1000,






CUI_CAMERACUI, RESOURCE_BASE_CUI_CAMERACUI = CUI_CAMERACUI, RESOURCE_BASE_CUI_CAMERACUI_END = CUI_CAMERACUI + 10,






APP_WORLDCLOCK, RESOURCE_BASE_APP_WORLDCLOCK = APP_WORLDCLOCK, RESOURCE_BASE_APP_WORLDCLOCK_END = APP_WORLDCLOCK + 200,







APP_CALLSET, RESOURCE_BASE_APP_CALLSET = APP_CALLSET, RESOURCE_BASE_APP_CALLSET_END = APP_CALLSET + 150,
# 970 "../../mmi/inc/mmi_pluto_res_range_def.h"
APP_SS, RESOURCE_BASE_APP_SS = APP_SS, RESOURCE_BASE_APP_SS_END = APP_SS + 50,







CUI_IMAGE_CLIP, RESOURCE_BASE_CUI_IMAGE_CLIP = CUI_IMAGE_CLIP, RESOURCE_BASE_CUI_IMAGE_CLIP_END = CUI_IMAGE_CLIP + 50,






APP_CTM, RESOURCE_BASE_APP_CTM = APP_CTM, RESOURCE_BASE_APP_CTM_END = APP_CTM + 20,






APP_APN_CONTROL, RESOURCE_BASE_APP_APN_CONTROL = APP_APN_CONTROL, RESOURCE_BASE_APP_APN_CONTROL_END = APP_APN_CONTROL + 50,
# 1008 "../../mmi/inc/mmi_pluto_res_range_def.h"
APP_MMI_CERTMAN, RESOURCE_BASE_APP_MMI_CERTMAN = APP_MMI_CERTMAN, RESOURCE_BASE_APP_MMI_CERTMAN_END = APP_MMI_CERTMAN + 200,
# 1032 "../../mmi/inc/mmi_pluto_res_range_def.h"
APP_DATAACCOUNT, RESOURCE_BASE_APP_DATAACCOUNT = APP_DATAACCOUNT, RESOURCE_BASE_APP_DATAACCOUNT_END = APP_DATAACCOUNT + 300,
# 1056 "../../mmi/inc/mmi_pluto_res_range_def.h"
APP_UNITCONVERTER, RESOURCE_BASE_APP_UNITCONVERTER = APP_UNITCONVERTER, RESOURCE_BASE_APP_UNITCONVERTER_END = APP_UNITCONVERTER + 100,






APP_CURRENCYCONVERTER, RESOURCE_BASE_APP_CURRENCYCONVERTER = APP_CURRENCYCONVERTER, RESOURCE_BASE_APP_CURRENCYCONVERTER_END = APP_CURRENCYCONVERTER + 50,






APP_HEALTH, RESOURCE_BASE_APP_HEALTH = APP_HEALTH, RESOURCE_BASE_APP_HEALTH_END = APP_HEALTH + 10,






APP_HEALTHMENSTRUAL, RESOURCE_BASE_APP_HEALTHMENSTRUAL = APP_HEALTHMENSTRUAL, RESOURCE_BASE_APP_HEALTHMENSTRUAL_END = APP_HEALTHMENSTRUAL + 50,






APP_HEALTHBMI, RESOURCE_BASE_APP_HEALTHBMI = APP_HEALTHBMI, RESOURCE_BASE_APP_HEALTHBMI_END = APP_HEALTHBMI + 50,







APP_UMMS_MMS, RESOURCE_BASE_APP_UMMS_MMS = APP_UMMS_MMS, RESOURCE_BASE_APP_UMMS_MMS_END = APP_UMMS_MMS + 400,
# 1128 "../../mmi/inc/mmi_pluto_res_range_def.h"
APP_CALLLOG, RESOURCE_BASE_APP_CALLLOG = APP_CALLLOG, RESOURCE_BASE_APP_CALLLOG_END = APP_CALLLOG + 130,






APP_MSPACE, RESOURCE_BASE_APP_MSPACE = APP_MSPACE, RESOURCE_BASE_APP_MSPACE_END = APP_MSPACE + 200,







APP_PROFILES, RESOURCE_BASE_APP_PROFILES = APP_PROFILES, RESOURCE_BASE_APP_PROFILES_END = APP_PROFILES + 230,






APP_FILEMANAGER, RESOURCE_BASE_APP_FILEMANAGER = APP_FILEMANAGER, RESOURCE_BASE_APP_FILEMANAGER_END = APP_FILEMANAGER + 200,






APP_FILEMANAGER_OTHER, RESOURCE_BASE_APP_FILEMANAGER_OTHER = APP_FILEMANAGER_OTHER, RESOURCE_BASE_APP_FILEMANAGER_OTHER_END = APP_FILEMANAGER_OTHER + 200,






SRV_SCREENSAVER, RESOURCE_BASE_SRV_SCREENSAVER = SRV_SCREENSAVER, RESOURCE_BASE_SRV_SCREENSAVER_END = SRV_SCREENSAVER + 100,






SRV_WALLPAPER, RESOURCE_BASE_SRV_WALLPAPER = SRV_WALLPAPER, RESOURCE_BASE_SRV_WALLPAPER_END = SRV_WALLPAPER + 100,






SRV_SPOF, RESOURCE_BASE_SRV_SPOF = SRV_SPOF, RESOURCE_BASE_SRV_SPOF_END = SRV_SPOF + 100,






SRV_PHNSET_ONOFF, RESOURCE_BASE_SRV_PHNSET_ONOFF = SRV_PHNSET_ONOFF, RESOURCE_BASE_SRV_PHNSET_ONOFF_END = SRV_PHNSET_ONOFF + 100,







SRV_FLIGHT_MODE, RESOURCE_BASE_SRV_FLIGHT_MODE = SRV_FLIGHT_MODE, RESOURCE_BASE_SRV_FLIGHT_MODE_END = SRV_FLIGHT_MODE + 100,







SRV_LANG_SETTINGS, RESOURCE_BASE_SRV_LANG_SETTINGS = SRV_LANG_SETTINGS, RESOURCE_BASE_SRV_LANG_SETTINGS_END = SRV_LANG_SETTINGS + 10,






APP_SETTINGS, RESOURCE_BASE_APP_SETTINGS = APP_SETTINGS, RESOURCE_BASE_APP_SETTINGS_END = APP_SETTINGS + 500,






APP_PHONESETUP, RESOURCE_BASE_APP_PHONESETUP = APP_PHONESETUP, RESOURCE_BASE_APP_PHONESETUP_END = APP_PHONESETUP + 200,






APP_CALIBRATION, RESOURCE_BASE_APP_CALIBRATION = APP_CALIBRATION, RESOURCE_BASE_APP_CALIBRATION_END = APP_CALIBRATION + 10,



APP_SETTING_NEW, RESOURCE_BASE_APP_SETTING_NEW = APP_SETTING_NEW, RESOURCE_BASE_APP_SETTING_NEW_END = APP_SETTING_NEW + 100,



APP_PHONESETTING_NEW, RESOURCE_BASE_APP_PHONESETTING_NEW = APP_PHONESETTING_NEW, RESOURCE_BASE_APP_PHONESETTING_NEW_END = APP_PHONESETTING_NEW + 200,






APP_RESTORE, RESOURCE_BASE_APP_RESTORE = APP_RESTORE, RESOURCE_BASE_APP_RESTORE_END = APP_RESTORE + 10,







APP_NETSET, RESOURCE_BASE_APP_NETSET = APP_NETSET, RESOURCE_BASE_APP_NETSET_END = APP_NETSET + 200,
# 1254 "../../mmi/inc/mmi_pluto_res_range_def.h"
APP_MODE_SWITCH, RESOURCE_BASE_APP_MODE_SWITCH = APP_MODE_SWITCH, RESOURCE_BASE_APP_MODE_SWITCH_END = APP_MODE_SWITCH + 200,







APP_SETTING_MENU_EFFECT, RESOURCE_BASE_APP_SETTING_MENU_EFFECT = APP_SETTING_MENU_EFFECT, RESOURCE_BASE_APP_SETTING_MENU_EFFECT_END = APP_SETTING_MENU_EFFECT + 20,






APP_SETTING_DOWNLOAD_CAL_DATA, RESOURCE_BASE_APP_SETTING_DOWNLOAD_CAL_DATA = APP_SETTING_DOWNLOAD_CAL_DATA, RESOURCE_BASE_APP_SETTING_DOWNLOAD_CAL_DATA_END = APP_SETTING_DOWNLOAD_CAL_DATA + 10,






APP_NFC, RESOURCE_BASE_APP_NFC = APP_NFC, RESOURCE_BASE_APP_NFC_END = APP_NFC + 20,







APP_SAT, RESOURCE_BASE_APP_SAT = APP_SAT, RESOURCE_BASE_APP_SAT_END = APP_SAT + 20,
# 1293 "../../mmi/inc/mmi_pluto_res_range_def.h"
APP_SERVICES_SAT, RESOURCE_BASE_APP_SERVICES_SAT = APP_SERVICES_SAT, RESOURCE_BASE_APP_SERVICES_SAT_END = APP_SERVICES_SAT + 10,
# 1314 "../../mmi/inc/mmi_pluto_res_range_def.h"
APP_DCD, RESOURCE_BASE_APP_DCD = APP_DCD, RESOURCE_BASE_APP_DCD_END = APP_DCD + 150,






APP_MOBILE_SERVICE, RESOURCE_BASE_APP_MOBILE_SERVICE = APP_MOBILE_SERVICE, RESOURCE_BASE_APP_MOBILE_SERVICE_END = APP_MOBILE_SERVICE + 100,






APP_CUSTOMER_SERVICE, RESOURCE_BASE_APP_CUSTOMER_SERVICE = APP_CUSTOMER_SERVICE, RESOURCE_BASE_APP_CUSTOMER_SERVICE_END = APP_CUSTOMER_SERVICE + 100,






APP_SETTING_VERSION, RESOURCE_BASE_APP_SETTING_VERSION = APP_SETTING_VERSION, RESOURCE_BASE_APP_SETTING_VERSION_END = APP_SETTING_VERSION + 10,






APP_PUSH_SWITCH, RESOURCE_BASE_APP_PUSH_SWITCH = APP_PUSH_SWITCH, RESOURCE_BASE_APP_PUSH_SWITCH_END = APP_PUSH_SWITCH + 10,






APP_DATA_SERVICE, RESOURCE_BASE_APP_DATA_SERVICE = APP_DATA_SERVICE, RESOURCE_BASE_APP_DATA_SERVICE_END = APP_DATA_SERVICE + 10,







APP_SHORTCUTS, RESOURCE_BASE_APP_SHORTCUTS = APP_SHORTCUTS, RESOURCE_BASE_APP_SHORTCUTS_END = APP_SHORTCUTS + 50,
# 1391 "../../mmi/inc/mmi_pluto_res_range_def.h"
APP_VENUS_HOMESCREEN_WG_MOBILE_INTERNET, RESOURCE_BASE_APP_VENUS_HOMESCREEN_WG_MOBILE_INTERNET = APP_VENUS_HOMESCREEN_WG_MOBILE_INTERNET, RESOURCE_BASE_APP_VENUS_HOMESCREEN_WG_MOBILE_INTERNET_END = APP_VENUS_HOMESCREEN_WG_MOBILE_INTERNET + 10,




APP_VENUS_HOMESCREEN_WG_WO_STORE, RESOURCE_BASE_APP_VENUS_HOMESCREEN_WG_WO_STORE = APP_VENUS_HOMESCREEN_WG_WO_STORE, RESOURCE_BASE_APP_VENUS_HOMESCREEN_WG_WO_STORE_END = APP_VENUS_HOMESCREEN_WG_WO_STORE + 10,




APP_EBOOK, RESOURCE_BASE_APP_EBOOK = APP_EBOOK, RESOURCE_BASE_APP_EBOOK_END = APP_EBOOK + 200,






APP_CALCULATOR, RESOURCE_BASE_APP_CALCULATOR = APP_CALCULATOR, RESOURCE_BASE_APP_CALCULATOR_END = APP_CALCULATOR + 50,






SRV_SYNCML, RESOURCE_BASE_SRV_SYNCML = SRV_SYNCML, RESOURCE_BASE_SRV_SYNCML_END = SRV_SYNCML + 300,




APP_SYNCML, RESOURCE_BASE_APP_SYNCML = APP_SYNCML, RESOURCE_BASE_APP_SYNCML_END = APP_SYNCML + 10,






SRV_MMI_THEME, RESOURCE_BASE_SRV_MMI_THEME = SRV_MMI_THEME, RESOURCE_BASE_SRV_MMI_THEME_END = SRV_MMI_THEME + 100,







APP_SWFLASH, RESOURCE_BASE_APP_SWFLASH = APP_SWFLASH, RESOURCE_BASE_APP_SWFLASH_END = APP_SWFLASH + 1,
APP_AVATAR, RESOURCE_BASE_APP_AVATAR = APP_AVATAR, RESOURCE_BASE_APP_AVATAR_END = APP_AVATAR + 1,





APP_CBS, RESOURCE_BASE_APP_CBS = APP_CBS, RESOURCE_BASE_APP_CBS_END = APP_CBS + 300,






APP_ALARM, RESOURCE_BASE_APP_ALARM = APP_ALARM, RESOURCE_BASE_APP_ALARM_END = APP_ALARM + 50,






APP_NITZ, RESOURCE_BASE_APP_NITZ = APP_NITZ, RESOURCE_BASE_APP_NITZ_END = APP_NITZ + 20,






APP_NTP, RESOURCE_BASE_APP_NTP = APP_NTP, RESOURCE_BASE_APP_NTP_END = APP_NTP + 20,






APP_CONNECTMANAGE, RESOURCE_BASE_APP_CONNECTMANAGE = APP_CONNECTMANAGE, RESOURCE_BASE_APP_CONNECTMANAGE_END = APP_CONNECTMANAGE + 100,




APP_ORGANIZER, RESOURCE_BASE_APP_ORGANIZER = APP_ORGANIZER, RESOURCE_BASE_APP_ORGANIZER_END = APP_ORGANIZER + 50,




APP_CALENDAR, RESOURCE_BASE_APP_CALENDAR = APP_CALENDAR, RESOURCE_BASE_APP_CALENDAR_END = APP_CALENDAR + 300,






APP_TODOLIST, RESOURCE_BASE_APP_TODOLIST = APP_TODOLIST, RESOURCE_BASE_APP_TODOLIST_END = APP_TODOLIST + 200,






APP_LUNAR_QUERY, RESOURCE_BASE_APP_LUNAR_QUERY = APP_LUNAR_QUERY, RESOURCE_BASE_APP_LUNAR_QUERY_END = APP_LUNAR_QUERY + 200,






APP_NOTE, RESOURCE_BASE_APP_NOTE = APP_NOTE, RESOURCE_BASE_APP_NOTE_END = APP_NOTE + 100,






APP_UDX, RESOURCE_BASE_APP_UDX = APP_UDX, RESOURCE_BASE_APP_UDX_END = APP_UDX + 100,






APP_DIALER, RESOURCE_BASE_APP_DIALER = APP_DIALER, RESOURCE_BASE_APP_DIALER_END = APP_DIALER + 10,






APP_BT_DIALER, RESOURCE_BASE_APP_BT_DIALER = APP_BT_DIALER, RESOURCE_BASE_APP_BT_DIALER_END = APP_BT_DIALER + 30,







SRV_VOBJECT, RESOURCE_BASE_SRV_VOBJECT = SRV_VOBJECT, RESOURCE_BASE_SRV_VOBJECT_END = SRV_VOBJECT + 50,






SRV_VCALENDAR, RESOURCE_BASE_SRV_VCALENDAR = SRV_VCALENDAR, RESOURCE_BASE_SRV_VCALENDAR_END = SRV_VCALENDAR + 50,



SRV_VCARD, RESOURCE_BASE_SRV_VCARD = SRV_VCARD, RESOURCE_BASE_SRV_VCARD_END = SRV_VCARD + 50,






SRV_VBOOKMARK, RESOURCE_BASE_SRV_VBOOKMARK = SRV_VBOOKMARK, RESOURCE_BASE_SRV_VBOOKMARK_END = SRV_VBOOKMARK + 50,






APP_AZAAN_ALARM, RESOURCE_BASE_APP_AZAAN_ALARM = APP_AZAAN_ALARM, RESOURCE_BASE_APP_AZAAN_ALARM_END = APP_AZAAN_ALARM + 100,






APP_HIJRI_CALENDAR, RESOURCE_BASE_APP_HIJRI_CALENDAR = APP_HIJRI_CALENDAR, RESOURCE_BASE_APP_HIJRI_CALENDAR_END = APP_HIJRI_CALENDAR + 150,






APP_INDICAL, RESOURCE_BASE_APP_INDICAL = APP_INDICAL, RESOURCE_BASE_APP_INDICAL_END = APP_INDICAL + 150,
# 1585 "../../mmi/inc/mmi_pluto_res_range_def.h"
APP_UCM, RESOURCE_BASE_APP_UCM = APP_UCM, RESOURCE_BASE_APP_UCM_END = APP_UCM + 200,






APP_UCMBT, RESOURCE_BASE_APP_UCMBT = APP_UCMBT, RESOURCE_BASE_APP_UCMBT_END = APP_UCMBT + 200,







CUI_BKM, RESOURCE_BASE_CUI_BKM = CUI_BKM, RESOURCE_BASE_CUI_BKM_END = CUI_BKM + 10,






APP_TETHERING, RESOURCE_BASE_APP_TETHERING = APP_TETHERING, RESOURCE_BASE_APP_TETHERING_END = APP_TETHERING + 20,




APP_REMINDER, RESOURCE_BASE_APP_REMINDER = APP_REMINDER, RESOURCE_BASE_APP_REMINDER_END = APP_REMINDER + 10,







APP_SMS, RESOURCE_BASE_APP_SMS = APP_SMS, RESOURCE_BASE_APP_SMS_END = APP_SMS + 500,
# 1637 "../../mmi/inc/mmi_pluto_res_range_def.h"
APP_VDOPLY, RESOURCE_BASE_APP_VDOPLY = APP_VDOPLY, RESOURCE_BASE_APP_VDOPLY_END = APP_VDOPLY + 500,
# 1654 "../../mmi/inc/mmi_pluto_res_range_def.h"
APP_VDOREC, RESOURCE_BASE_APP_VDOREC = APP_VDOREC, RESOURCE_BASE_APP_VDOREC_END = APP_VDOREC + 400,
# 1670 "../../mmi/inc/mmi_pluto_res_range_def.h"
APP_CSB, RESOURCE_BASE_APP_CSB = APP_CSB, RESOURCE_BASE_APP_CSB_END = APP_CSB + 100,







APP_UNIFIEDMESSAGE, RESOURCE_BASE_APP_UNIFIEDMESSAGE = APP_UNIFIEDMESSAGE, RESOURCE_BASE_APP_UNIFIEDMESSAGE_END = APP_UNIFIEDMESSAGE + 150,
# 1694 "../../mmi/inc/mmi_pluto_res_range_def.h"
APP_SEARCH_WEB, RESOURCE_BASE_APP_SEARCH_WEB = APP_SEARCH_WEB, RESOURCE_BASE_APP_SEARCH_WEB_END = APP_SEARCH_WEB + 100,






APP_MMI_WAP_PROF, RESOURCE_BASE_APP_MMI_WAP_PROF = APP_MMI_WAP_PROF, RESOURCE_BASE_APP_MMI_WAP_PROF_END = APP_MMI_WAP_PROF + 35,







APP_PHOEDT, RESOURCE_BASE_APP_PHOEDT = APP_PHOEDT, RESOURCE_BASE_APP_PHOEDT_END = APP_PHOEDT + 300,
# 1726 "../../mmi/inc/mmi_pluto_res_range_def.h"
APP_MAINMENU, RESOURCE_BASE_APP_MAINMENU = APP_MAINMENU, RESOURCE_BASE_APP_MAINMENU_END = APP_MAINMENU + 300,
# 1751 "../../mmi/inc/mmi_pluto_res_range_def.h"
APP_SOUNDEFFECT, RESOURCE_BASE_APP_SOUNDEFFECT = APP_SOUNDEFFECT, RESOURCE_BASE_APP_SOUNDEFFECT_END = APP_SOUNDEFFECT + 50,




APP_USBMMI, RESOURCE_BASE_APP_USBMMI = APP_USBMMI, RESOURCE_BASE_APP_USBMMI_END = APP_USBMMI + 30,




APP_VIEWSETTING, RESOURCE_BASE_APP_VIEWSETTING = APP_VIEWSETTING, RESOURCE_BASE_APP_VIEWSETTING_END = APP_VIEWSETTING + 10,







APP_TTS_SETTING, RESOURCE_BASE_APP_TTS_SETTING = APP_TTS_SETTING, RESOURCE_BASE_APP_TTS_SETTING_END = APP_TTS_SETTING + 10,







APP_CBM, RESOURCE_BASE_APP_CBM = APP_CBM, RESOURCE_BASE_APP_CBM_END = APP_CBM + 30,






APP_NSS, RESOURCE_BASE_APP_NSS = APP_NSS, RESOURCE_BASE_APP_NSS_END = APP_NSS + 20,






APP_DOWNLOADAGENT, RESOURCE_BASE_APP_DOWNLOADAGENT = APP_DOWNLOADAGENT, RESOURCE_BASE_APP_DOWNLOADAGENT_END = APP_DOWNLOADAGENT + 150,






MOTION_SENSOR, RESOURCE_BASE_MOTION_SENSOR = MOTION_SENSOR, RESOURCE_BASE_MOTION_SENSOR_END = MOTION_SENSOR + 10,






APP_PACKAGE_CONCURRENT, RESOURCE_BASE_APP_PACKAGE_CONCURRENT = APP_PACKAGE_CONCURRENT, RESOURCE_BASE_APP_PACKAGE_CONCURRENT_END = APP_PACKAGE_CONCURRENT + (2),


APP_VT_CALL, RESOURCE_BASE_APP_VT_CALL = APP_VT_CALL, RESOURCE_BASE_APP_VT_CALL_END = APP_VT_CALL + (2),
# 1820 "../../mmi/inc/mmi_pluto_res_range_def.h"
APP_MRE_DLS, RESOURCE_BASE_APP_MRE_DLS = APP_MRE_DLS, RESOURCE_BASE_APP_MRE_DLS_END = APP_MRE_DLS + 50,






APP_SSO, RESOURCE_BASE_APP_SSO = APP_SSO, RESOURCE_BASE_APP_SSO_END = APP_SSO + 50,
# 1836 "../../mmi/inc/mmi_pluto_res_range_def.h"
CUI_SSO, RESOURCE_BASE_CUI_SSO = CUI_SSO, RESOURCE_BASE_CUI_SSO_END = CUI_SSO + 50,
# 1852 "../../mmi/inc/mmi_pluto_res_range_def.h"
APP_SMSBTUNIFIEDMESSAGE, RESOURCE_BASE_APP_SMSBTUNIFIEDMESSAGE = APP_SMSBTUNIFIEDMESSAGE, RESOURCE_BASE_APP_SMSBTUNIFIEDMESSAGE_END = APP_SMSBTUNIFIEDMESSAGE + 50,
# 2977 "../../mmi/inc/mmi_res_range_def.h" 2
# 1 "../../../venusmmi/app/common/interface/vapp_res.h" 1
# 2978 "../../mmi/inc/mmi_res_range_def.h" 2
# 1 "../../../venusmmi/visual/cp/res/vcp_res_range.h" 1
# 2979 "../../mmi/inc/mmi_res_range_def.h" 2
APP_DEVAPP, RESOURCE_BASE_APP_DEVAPP = APP_DEVAPP, RESOURCE_BASE_APP_DEVAPP_END = APP_DEVAPP + 900, APP_DEFAULT_END, RESOURCE_BASE_APP_DEFAULT_END = APP_DEFAULT_END, RESOURCE_BASE_APP_DEFAULT_END_END = APP_DEFAULT_END + 1, END, RESOURCE_BASE_END = END, RESOURCE_BASE_END_END = END + 1 } RESOURCE_BASE_ENUM;
# 2990 "../../mmi/inc/mmi_res_range_def.h"
typedef struct
{
    char *appname;
    unsigned short min;
    unsigned short max;
    char res_path[512];
} mmi_resource_base_struct;
# 3050 "../../mmi/inc/mmi_res_range_def.h"













# 1 "../../mmi/inc/mmi_lib_res_range_def.h" 1
# 137 "../../mmi/inc/mmi_lib_res_range_def.h"
















































































# 3064 "../../mmi/inc/mmi_res_range_def.h" 2




# 1 "../../mmi/inc/mmi_pluto_res_range_def.h" 1
# 759 "../../mmi/inc/mmi_pluto_res_range_def.h"

# 776 "../../mmi/inc/mmi_pluto_res_range_def.h"











































# 829 "../../mmi/inc/mmi_pluto_res_range_def.h"



# 841 "../../mmi/inc/mmi_pluto_res_range_def.h"









# 876 "../../mmi/inc/mmi_pluto_res_range_def.h"

# 893 "../../mmi/inc/mmi_pluto_res_range_def.h"







# 927 "../../mmi/inc/mmi_pluto_res_range_def.h"












 






















# 970 "../../mmi/inc/mmi_pluto_res_range_def.h"























# 1008 "../../mmi/inc/mmi_pluto_res_range_def.h"

# 1032 "../../mmi/inc/mmi_pluto_res_range_def.h"

# 1056 "../../mmi/inc/mmi_pluto_res_range_def.h"





































# 1128 "../../mmi/inc/mmi_pluto_res_range_def.h"






















































































































# 1254 "../../mmi/inc/mmi_pluto_res_range_def.h"































# 1293 "../../mmi/inc/mmi_pluto_res_range_def.h"

# 1314 "../../mmi/inc/mmi_pluto_res_range_def.h"












































# 1391 "../../mmi/inc/mmi_pluto_res_range_def.h"



















































































































































































# 1585 "../../mmi/inc/mmi_pluto_res_range_def.h"




































# 1637 "../../mmi/inc/mmi_pluto_res_range_def.h"

# 1654 "../../mmi/inc/mmi_pluto_res_range_def.h"

# 1670 "../../mmi/inc/mmi_pluto_res_range_def.h"









# 1694 "../../mmi/inc/mmi_pluto_res_range_def.h"
















# 1726 "../../mmi/inc/mmi_pluto_res_range_def.h"

# 1751 "../../mmi/inc/mmi_pluto_res_range_def.h"


























































# 1820 "../../mmi/inc/mmi_pluto_res_range_def.h"








# 1836 "../../mmi/inc/mmi_pluto_res_range_def.h"

# 1852 "../../mmi/inc/mmi_pluto_res_range_def.h"

# 3069 "../../mmi/inc/mmi_res_range_def.h" 2




# 1 "../../../venusmmi/app/common/interface/vapp_res.h" 1
# 3074 "../../mmi/inc/mmi_res_range_def.h" 2
# 1 "../../../venusmmi/visual/cp/res/vcp_res_range.h" 1
# 3075 "../../mmi/inc/mmi_res_range_def.h" 2























# 3112 "../../mmi/inc/mmi_res_range_def.h"

# 3128 "../../mmi/inc/mmi_res_range_def.h"





























# 3181 "../../mmi/inc/mmi_res_range_def.h"















# 3230 "../../mmi/inc/mmi_res_range_def.h"








# 3254 "../../mmi/inc/mmi_res_range_def.h"

# 3266 "../../mmi/inc/mmi_res_range_def.h"









# 3283 "../../mmi/inc/mmi_res_range_def.h"
























# 3323 "../../mmi/inc/mmi_res_range_def.h"







































# 3370 "../../mmi/inc/mmi_res_range_def.h"
























# 3408 "../../mmi/inc/mmi_res_range_def.h"









# 3425 "../../mmi/inc/mmi_res_range_def.h"

# 3450 "../../mmi/inc/mmi_res_range_def.h"























# 3483 "../../mmi/inc/mmi_res_range_def.h"

# 3492 "../../mmi/inc/mmi_res_range_def.h"









# 3537 "../../mmi/inc/mmi_res_range_def.h"







































































































# 3669 "../../mmi/inc/mmi_res_range_def.h"

# 3681 "../../mmi/inc/mmi_res_range_def.h"
















# 3713 "../../mmi/inc/mmi_res_range_def.h"










# 3735 "../../mmi/inc/mmi_res_range_def.h"















































































































































































































































# 3987 "../../mmi/inc/mmi_res_range_def.h"

# 4001 "../../mmi/inc/mmi_res_range_def.h"









# 4018 "../../mmi/inc/mmi_res_range_def.h"
















































# 4074 "../../mmi/inc/mmi_res_range_def.h"








# 4092 "../../mmi/inc/mmi_res_range_def.h"

# 4126 "../../mmi/inc/mmi_res_range_def.h"























# 4164 "../../mmi/inc/mmi_res_range_def.h"















   

































































































# 4285 "../../mmi/inc/mmi_res_range_def.h"





























# 4376 "../../mmi/inc/mmi_res_range_def.h"






































# 4422 "../../mmi/inc/mmi_res_range_def.h"

# 4431 "../../mmi/inc/mmi_res_range_def.h"

















# 4464 "../../mmi/inc/mmi_res_range_def.h"

# 4484 "../../mmi/inc/mmi_res_range_def.h"

# 4505 "../../mmi/inc/mmi_res_range_def.h"

# 4516 "../../mmi/inc/mmi_res_range_def.h"



















































# 4582 "../../mmi/inc/mmi_res_range_def.h"






















# 4620 "../../mmi/inc/mmi_res_range_def.h"

# 4647 "../../mmi/inc/mmi_res_range_def.h"









# 4669 "../../mmi/inc/mmi_res_range_def.h"

























































# 4905 "../../mmi/inc/mmi_res_range_def.h"









































































































# 5026 "../../mmi/inc/mmi_res_range_def.h"



















































# 5099 "../../mmi/inc/mmi_res_range_def.h"






















# 5129 "../../mmi/inc/mmi_res_range_def.h"















# 5159 "../../mmi/inc/mmi_res_range_def.h"

# 5168 "../../mmi/inc/mmi_res_range_def.h"








# 5184 "../../mmi/inc/mmi_res_range_def.h"









# 5205 "../../mmi/inc/mmi_res_range_def.h"

# 5221 "../../mmi/inc/mmi_res_range_def.h"






































































# 5316 "../../mmi/inc/mmi_res_range_def.h"















# 5347 "../../mmi/inc/mmi_res_range_def.h"

# 5365 "../../mmi/inc/mmi_res_range_def.h"

# 5374 "../../mmi/inc/mmi_res_range_def.h"

# 5383 "../../mmi/inc/mmi_res_range_def.h"









# 5400 "../../mmi/inc/mmi_res_range_def.h"

# 5421 "../../mmi/inc/mmi_res_range_def.h"

# 5436 "../../mmi/inc/mmi_res_range_def.h"




































# 5489 "../../mmi/inc/mmi_res_range_def.h"


# 5529 "../../mmi/inc/mmi_res_range_def.h"






# 1247 "../../framework/interface/MMIDataType.h" 2
# 3 "temp/res/vcp_normal_mode_menu.c" 2
# 1 "../customerinc/CustResDef.h" 1
# 195 "../customerinc/CustResDef.h"
# 1 "../../mmi/inc/MMI_features.h" 1
# 196 "../customerinc/CustResDef.h" 2
# 4 "temp/res/vcp_normal_mode_menu.c" 2
# 1 "../../mmi/inc/CustDataProts.h" 1
# 223 "../../mmi/inc/CustDataProts.h"
typedef enum
{
    HIDE,
    SHOW
} HIDESHOW;
# 239 "../../mmi/inc/CustDataProts.h"
typedef enum
{
    DEFAULT,
    DISP_LIST,
    DISP_MATRIX,
    DISP_CIRCULAR_3D,
    DISP_PAGE,
    DISP_ANI_BG_LIST,
    DISP_MATRIX_EMS,
    DISP_ROTATE,
    DISP_MOTION,
    DISP_LIST_MATRIX,
    DISP_MATRIX_PAGE,
    MMI_RG_MENU_TYPE_ORIGINAL,
    MMI_RG_MENU_TYPE_APP_MAIN,
    MMI_RG_MENU_TYPE_APP_SUB,
    MMI_RG_MENU_TYPE_OPTION,
    DISP_FIXED_GRID
} DISPATTRIBUTE;

typedef enum
{
    AUTO_TYPE,
    FORCE_ABM,
    FORCE_AB2,
    FORCE_BMP,
    FORCE_ABM_SEQUENCE
} RESGEN_IMAGE_FORCETYPE;

typedef enum
{
    AUTO_ADO_TYPE,
    FORCE_ADO_MIDI
} RESGEN_AUDIO_FORCETYPE;





typedef void (*FuncPtr) (void);

extern void SetString(U16 StrId, S8 *String, S8 *enum_value);
extern void SetImage(U16 ImageId, S8 *ImgFileName, S8 *enum_value);
extern void SetImageWithBufferForceType(U16 nImgId, S8 *filename, S8 *enum_value, BOOL imgFlag, S32 froce_type);
extern void SetImageWithBuffer(U16 nImgId, S8 *pBuffName, S8 *enum_value, BOOL imgFlag);
extern void SetImageQWithBufferForceType(U16 nImgId, S8 *filename, S8 *enum_value, BOOL imgFlag, S32 froce_type, S32 quality);
extern void SetImageQWithBuffer(U16 nImgId, S8 *pBuffName, S8 *enum_value, BOOL imgFlag, S32 quality);
extern void SetAudioWithBufferForceType(U16 nAdoId, S8 *filename, S8 *enum_value, BOOL adoFlag, S32 froce_type);
extern void SetAudioWithBuffer(U16 nAdoId, S8 *filename, S8 *enum_value, BOOL adoFlag);
extern void SetBinaryWithBuffer(U16 res_id, S8 *filename, S8 *enum_value, binary_type_enum binary_type_flag);
extern void SetFontWithBuffer(U16 nFontId, S8 *filename, S8 *enum_value, BOOL fontFlag);
extern void SetMenuItem(U16 arg1, ...);

extern void SetMenuHiliteHandler(U16 MenuID, S8 *MenuIDEnum, S8 *FuncName);
extern void SetMenuHintHandler(U16 MenuID, S8 *MenuIDEnum, S8 *FuncName);
extern MMI_BOOL g_is_log;

extern void AddApp(U32 nId, S8 *pName, U16 nMinId, U16 nMaxId);
extern void SetNFBImage(S8 *filename);
# 314 "../../mmi/inc/CustDataProts.h"
extern void MtkResgenTrace(char *fmt,...);
# 489 "../../mmi/inc/CustDataProts.h"
# 1 "offlineresgenerator/inc/OfflineResPopCAPI.h" 1
# 109 "offlineresgenerator/inc/OfflineResPopCAPI.h"
    void ConvertToResFileName(char * resFileName, char * path, char * immediateFileName, int sizeLimit);
# 126 "offlineresgenerator/inc/OfflineResPopCAPI.h"
    void OfflineIdModelInit(char * fileName);
    void OfflineIdModelDeinit();
# 136 "offlineresgenerator/inc/OfflineResPopCAPI.h"
    void StringAdaptorStartOfflinePopulation(char* fileName);

    void StringAdaptorStopOfflinePopulation();
    void StringAdaptorSetString(int stringId, char* stringContent,char * appId, char* desc, char * stringEnumName, char* fileName, int noCompiling);
# 155 "offlineresgenerator/inc/OfflineResPopCAPI.h"
    void ImageAdaptorStartOfflinePopulation(char* fileName);

    void ImageAdaptorStopOfflinePopulation();
    void ImageAdaptorSetImage(int imageId, char* imageFilePath, char * appId, char* desc, char * stringEnumName, char* resFilePath, int noCompiling, int forceType, int isMultipleBin, int isENFB);
    void ImageAdaptorSetImageWithQuality(int imageId, char* imageFilePath, char * appId, char* desc, char * stringEnumName, char* resFilePath, int noCompiling, int forceType, int isMultipleBin, int isENFB, int quality, int compression);
    void ImageAdaptorSetImageAutoId(char* imageFilePath, char * appId, char* desc, char * stringEnumName, char* resFilePath, int noCompiling, int forceType, int isMultipleBin, int isENFB);
    void ImageAdaptorSetImageAutoIdWithQuality(char* imageFilePath, char * appId, char* desc, char * stringEnumName, char* resFilePath, int noCompiling, int forceType, int isMultipleBin, int isENFB, int quality, int compression);
# 232 "offlineresgenerator/inc/OfflineResPopCAPI.h"
    void AudioAdaptorStartOfflinePopulation(char* fileName);


    void AudioAdaptorStopOfflinePopulation();

    void AudioAdaptorSetAudio(int imageId, char* audioFilePath, char * appId, char* desc, char * stringEnumName, char* resFilePath, int noCompiling, int forceType, int isMultipleBin);
# 259 "offlineresgenerator/inc/OfflineResPopCAPI.h"
    void BinaryAdaptorStartOfflinePopulation(char* fileName);


    void BinaryAdaptorStopOfflinePopulation();

    void BinaryAdaptorSetBinary(int binaryId, char* binaryFilePath, char * appId, char* desc, char * stringEnumName, char* resFilePath, int noCompiling, int binaryType);
# 490 "../../mmi/inc/CustDataProts.h" 2
# 5 "temp/res/vcp_normal_mode_menu.c" 2

<?xml version="1.0" encoding="UTF-8"?>
<APP id="SRV_VENUS_COMPONENT_NORMAL_MODE_MENU">
# 18 "temp/res/vcp_normal_mode_menu.c"
</APP>
