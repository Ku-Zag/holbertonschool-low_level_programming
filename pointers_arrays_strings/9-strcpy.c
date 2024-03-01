#include "main.h"
/**
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int i = 0;
	char *c = dest;

	while (src[l] != 0)
		l++;

	while (i < l)
	{
		dest[i] = src[i];
		i++;
	}
	*dest = '\0';
	return (c);
}
