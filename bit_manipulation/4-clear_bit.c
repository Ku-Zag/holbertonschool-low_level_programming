#include "main.h"

/**
 * clear_bit - clear bit
 * @n: int
 * @index: index
 * Return: bit
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

		if (index < sizeof(n) * 8)
		{
			*n = (*n & ~mask);
			return (1);
		}

		return (-1);
}
