#include "main.h"
/**
 */
void print_binary(unsigned long int n)
{
	unsigned int i = 0, test = 35768;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (test)
	{
		if (i == 1 && (n & test) == 0)
			_putchar('0');
		else if ((n & test) == 1)
		{
			_putchar('1');
			i = 1;
		}
		test >>= 1;
	}
}
