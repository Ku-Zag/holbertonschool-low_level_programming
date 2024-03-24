#include "variadic_functions.h"
#include <stdarg.h>
/**
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int number;
	va_list args;

	va_start(args, n);

	if (seperator == NULL)
		*seperator = '\0';
	for (i = 0; i < n; i++)
	{
		number = va_arg(args, int);
		printf("%d%s", number, *seperator);
	}
	va_end(args);
	printf("\n");
}
