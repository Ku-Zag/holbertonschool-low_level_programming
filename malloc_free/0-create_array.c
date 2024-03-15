#include "main.h"
#include <stdlib.h>
/**
 * create_array - entry
 * @size: size of array
 * @c: certain char
 * Description: creates array
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
