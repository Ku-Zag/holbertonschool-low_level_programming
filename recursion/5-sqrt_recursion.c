#include "main.h"
/**
 * find_sqrt - entry
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
/**
 * _sqrt_recursion - continue
 * @n: integer
 * Description: find squrare root
 * Return: integrer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_sqrt(1, n));
}
