#include "main.h"
/**
 * _sqrt_recursion - entru
 * find_sqrt - find sqrt
 * @l: multip
 * @n: integer
 * Description: sqrt ffinder
 * Return: integer
 */
int find_sqrt(int l, int n);

int find_sqrt(int l, int n)
{
	if (l > n)
		return (-1);

	else if (n == l * l)
		return (l);

	return (find_sqrt(l + 1, n));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_sqrt(1, n));
}
