#include "main.h"
/**
 * print_diagonal - entry
 * @n: integer
 * Description: print_diagonal prints diognal
 * Return: void
 */
void print_diagonal(int n)
{
	int a;
	int s;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (s = 0; s < a; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
