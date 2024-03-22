#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - entry
 * @size: size of array
 * @array: array
 * @cmp: ptr to func
 * Description: compares integer and prints first matchi's index in array
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	if (i == size)
		return (-1);
	return (0);
}
