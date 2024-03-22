#include "function_pointers.h"
/**
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(i+1) == array[i])
			return (i);
	}
	if (i == size)
		return (-1);
	return (0);
}