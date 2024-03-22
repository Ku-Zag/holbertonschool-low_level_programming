#include "main.h"
#include <stdlib.h>
/**
 * _calloc - entry
 * @nmemb: elements
 * @size: size of each
 * Description: calloc
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i = 0;

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
