#include "main.h"
/**
 * print_triangle - entry
 * @size: size
 * Description: print_triangle 
 * Return: void
 */
void print_triangle(int size)
{
	int a;
	int b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 1; b < size - a; b++)
				_putchar(' ');

			for (b = 0; b <= a; b++)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
