#include "ax_printf.h"
#define AX_PRINTF_MAX_BUF 1024
#include <stdio.h>
#include <stdarg.h>
void ax_printf(const char* color,const char* fmt,...)
{
   char buf[AX_PRINTF_MAX_BUF];
   va_list args;
   int ret;
   ret=snprintf(buf,AX_PRINTF_MAX_BUF,"%s%s%s",color,fmt,AX_COLOR_RESET);
   if(ret>AX_PRINTF_MAX_BUF)
   {
   	printf("%s printf buf is full!%s\n",AX_LIGHT_RED,AX_COLOR_RESET);
   }
   va_start(args, buf);
   vprintf(buf, args);
   va_end(args);
}