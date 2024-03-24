#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_int - entr
 * @args: argument
 * Description: prints
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_float - entr
 * @args: argument
 * Description: prints
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_char - entr
 * @args: argument
 * Description: prints
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_string - entr
 * @args: argument
 * Description: prints
 */
void print_string(va_list args)
{
	char *s;

	s = va_arg(args, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
/**
 * print_all - entr
 * @format: types of args
 * Description: prints
 */
void print_all(const char * const format, ...)
{
	types list[] = {
		{"i", print_int},
		{"f", print_float},
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};
	va_list args;
	int i = 0;
	int j = 0;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		while (list[j].type)
		{
			if (*list[j].type == format[i])
			{
				printf("%s", separator);
				list[j].f(args);
				separator = ", ";
			}
			j++;
		}
		j = 0;
		i++;
	}
	va_end(args);
	printf("\n");
}
