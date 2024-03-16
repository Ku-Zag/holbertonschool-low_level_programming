#include "main.h"
#include <stdlib.h>
/**
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int l1 = 0, i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	while (i < size * nmemb)
	{
		*(ptr + i) = 0;
		i++;
	}
	return (ptr);
}

