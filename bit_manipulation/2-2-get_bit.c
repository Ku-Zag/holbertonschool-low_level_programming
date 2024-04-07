#include "main.h"
/**
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > sizeof(n) * 8)
	{
		return (-1);
	}

	i <<= index;

	if (n & i)
		return (1);
	else
		return (0);
}
