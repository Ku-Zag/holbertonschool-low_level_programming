#include "main.h"
/**
 * print_square - entry
 * @size: integer
 * Description: print_diagon prints diognal
 * Return: void
 */
void print_square(int size)
{
        int l;
        int w;

        if (size > 0)
        {
                for (l = 0; l < size; l++)
                {
                        for (w = 0; w < size; w++)
                        {
				_putchar('#');
			}
			_putchar('\n');
                }
        }
        else
        {
                _putchar('\n');
        }
}
