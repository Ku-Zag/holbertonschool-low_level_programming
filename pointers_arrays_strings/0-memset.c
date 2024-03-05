#include "main.h"
/**
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l = 0;
	char *ptr = s;
	
	while (l < n)
	{
		ptr[l] = b;
		l++;
	}
	return (ptr);
}
