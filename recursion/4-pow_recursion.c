#include "main.h"
/**
 * _pow_recursion - entry
 * @x: value
 * @y: power
 * Decription: x^y
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
