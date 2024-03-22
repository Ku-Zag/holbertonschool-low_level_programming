#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action[i] = array[i];
}
