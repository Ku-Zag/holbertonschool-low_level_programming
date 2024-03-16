#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * malloc_checked - entru
 * @b: memory size
 * Description: allocates unsigned memory
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		return(NULL);
	return (ptr);
}
