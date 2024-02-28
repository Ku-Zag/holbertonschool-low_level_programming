#include "main.h"
/**
 * print_diogonal - entry
 * @n: integer
 * Description: print_diogonal prints diognal
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
