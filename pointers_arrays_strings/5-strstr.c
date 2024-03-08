#include "main.h"
#include <stdio.h>
/**
 */
char *_strstr(char *haystack, char *needle)
{
	char *ph = haystack;
	char *pn = needle;

	while (*haystack)
	{
		needle = pn;
		haystack = ph;

		while (*needle != 0 && *haystack == *needle)
		{
			needle++;
			haystack++;
		}

		if (*needle == 0)
			return (ph);
		ph++;
	}
	return (NULL);
}
