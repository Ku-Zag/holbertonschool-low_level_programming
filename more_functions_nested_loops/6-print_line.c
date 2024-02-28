#include "main.h"
/**
 * print_line - entry
 * @n: integer
 * Description: print_line prints n line
 * Return: void
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
