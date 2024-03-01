#include "main.h"
/**
 * print_rev - entry
 * @s: string
 * Description: print_rev prints reversed
 */
void print_rev(char *s)
{
	int n;
	int l = 0;

	while (s[l] != 0)
		l++;
	n = l - 1;
	while (s[n] != 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
