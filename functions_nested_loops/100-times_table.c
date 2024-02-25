#include "main.h"
/**
 *
 *
 *
 *
 */

void print_times_table(int n)
{
	n = 5;
	int a;
	int b;
	int c;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			b = 0;

			for (b = 0; b <= n; b++)
			{
				c = a * b;
				
				if (c < 10)
				{
					if(b != 0)
						_putchar(' ');
					_putchar(c + '0');

					if (b == n)
                                            continue;

					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else 
				{
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');

					if (b == n)
                                            continue;

					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}

}
