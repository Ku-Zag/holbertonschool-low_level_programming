#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - entr
 * @separator: separates
 * @n: num of args
 * Description: print all agruments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int number;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(args, int);
		if (separator == NULL)
		{
			printf("%d", number);
			continue;
		}
		if (i != n - 1)
			printf("%d%s", number, separator);
		else
			printf("%d", number);
	}
	va_end(args);
	printf("\n");
}
