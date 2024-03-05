#include "main.h"
/**
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0;
	unsigned int n = 0;

	while (*s)
	{
		
		while  (*accept)
		{
			if (*s == *accept)
			{
				l++;
				break;
			}
			accept++;
		}
		accept++;
	}
	return (l);

}
