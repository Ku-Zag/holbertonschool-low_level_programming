#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: interger
 * Description: find last digit
 * Return: last digit
 *
 */

int print_last_digit(int n)
{
	int ld;

	if (n >= 0)
	{
		ld = n % 10;
	}
	else if (n < 0)
	{
		ld = n % 10;
		ld = -ld;
	}
	_putchar(ld + '0');
	return (ld);
}
