#include "a.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
void p_all(const char * const format, ...)
{
	all_types types[] = {
		{"i", p_int},
		{"f", p_flt},
		{"c", p_char},
		{"str", p_str}
	};
	va_list args;
	int i, j = 0;
	char *orta;

	va_start(args, format);
	while (format && format[i])
	{
		while(types[j])
		{
			if (*types[j].type == format[i])
			{
				types[j].f(args);
				printf("%s", orta);
			}
			j++;
		}
		j = 0;
		i++;

	}
	va_end(args);
	printf("\n");
}
void p_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
void p_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
void p_flt(va_list args)
{
	printf("%f", va_arg(args, double));
}
void p_str(va_list args)
{
	char *s = va_arg(args, char *);
	if (s == NULL)
		printf("NILL");
		return;
	printf("%s", s);

}
