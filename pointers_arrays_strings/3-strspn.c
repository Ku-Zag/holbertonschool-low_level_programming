#include "main.h"
/**
 * _strspn - emtry
 * @s: string
 * @accepy: accpet
 * Description: _strspn
 * Return: unsig. char
 */
unsigned int _strspn(char *s, char *accept)
{
	char *p = accept;
	unsigned int l = 0;

	while (*s)
	{
		accept = p;

		while  (*accept)
		{
			if (*s == *accept)
			{
				l++;
				break;
			}
			accept++;
		}

		if (*accept == 0)
			break;
		s++;
	}
	return (l);

}
