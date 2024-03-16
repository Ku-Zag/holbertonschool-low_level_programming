#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - entru
 * @b: memory size
 * Description: allocates unsigned memory
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
