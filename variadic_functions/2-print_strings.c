#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - entry
 * @separator: separaates
 * @n: n of a
 * Description: pritns all strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *word;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		word = va_arg(args, char *);

		if (word == NULL)
		{
			printf("(nil)");
			continue;
		}
		if (separator == NULL)
		{
			printf("%s", word);
			continue;
		}
		if (i != n - 1)
			printf("%s%s", word, separator);
		else
			printf("%s", word);
	}
	va_end(args);
	printf("\n");
}
