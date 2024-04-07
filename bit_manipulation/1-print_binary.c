#include "main.h"
/**
 * print_binary - prints bin
 * @n: inetg
 * Description: bin
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 0, test = 32768;
	if (n > test)
		return (NULL);
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (test)
	{
		if (i == 1 && (n & test) == 0)
			_putchar('0');
		else if ((n & test) != 0)
		{
			_putchar('1');
			i = 1;
		}
		test >>= 1;
	}
}
