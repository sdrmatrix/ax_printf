#ifndef XPRINTF_H
#define XPRINTF_H

#define AX_BLACK 	"\033[30m"
#define AX_RED   	"\033[31m"
#define AX_GREEN   "\033[32m"
#define AX_YELLOW  "\033[33m"
#define AX_BLUE   	"\033[34m"
#define AX_SKYBLUE "\033[35m"
#define AX_WHITE   "\033[36m"

#define AX_LIGHT_BLACK   "\033[1;30m"
#define AX_LIGHT_RED     "\033[1;31m"
#define AX_LIGHT_GREEN   "\033[1;32m"
#define AX_LIGHT_YELLOW  "\033[1;33m"
#define AX_LIGHT_BLUE    "\033[1;34m"
#define AX_LIGHT_SKYBLUE "\033[1;35m"
#define AX_LIGHT_WHITE   "\033[1;36m"
#define AX_COLOR_RESET   "\033[0m"
void ax_printf(const char* color,const char* fmt,...);

#endif