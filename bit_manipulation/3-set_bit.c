#include "main.h"

/**
 * set_bit - set bit to 1
 * @n: inet
 * @index: indec
 * Return: bit
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(n) * 8)
	{
		*n = *n | (1 << index);
		return (1);
	}

	return (-1);
}