#include "main.h"
/**
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest, *str = src;
	int l = 0, sl = 0;

	while (*src)
	{
		sl++;
		src++;
	}
	src++;

	if (n > sl)
		n = sl;

	src = str;

	while (l < n)
	{
		*dest = *src;
		l++;
		dest++;
		src++;
	}
	return (ptr);
}
