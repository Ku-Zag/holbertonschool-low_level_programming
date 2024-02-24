#include "main.h"

/**
 * print_sign - Entry point
 * @n: parameter
 * Description: funtion prints sign of number
 * Return: 0
 */

int print_sign(int n)
{
	int value = 0;

	if (n > 0)
	{
		_putchar('+');
		value = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		value = -1;
	}
	else
	{
		_putchar('0');
	}
	return (value);
}
