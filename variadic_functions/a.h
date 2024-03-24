#ifndef A_H
#define A_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
void p_all(const char * const format, ...);
typedef struct a
{
	char *type;
	void (*f)(args);
}all_types;
void p_int(va_list args);
void p_char(va_list args);
void p_flt(va_list args);
void p_str(va_list args);
#endif
