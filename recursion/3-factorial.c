#include "main.h"
/**
 * factorial - entry
 * @n: integegr
 * Description: find factorial
 * Return: Integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
