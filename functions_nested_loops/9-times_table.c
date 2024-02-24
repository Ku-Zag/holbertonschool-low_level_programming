#include "main.h"

/**
 *
 *
 *
 *
 */

void times_table(void)
{
	int a = 0;
	int b = 0;
	int c;

	while (a <= 9)
	{
		b = 0;
		while(b <= 9)
		{
			c = a * b;

			if (c < 10)
			{
				_putchar(c + '0');
				if (b != 9)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				}
				else if (4 < c && c < 10)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
				if ( b != 9)
				{
				_putchar(',');
				_putchar(' ');
				}
			}
			b++;
		}
		_putchar('\n');
		a++;
	}	
}

