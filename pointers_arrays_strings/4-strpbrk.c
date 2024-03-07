#include "main.h"
/**
 * _strpbrk - entry
 * @s: string
 * @accept: accpet
 * Description: _strpbrk
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	char *p = accept;
	char *ps = s;

	while (*s)
	{
		accept = p;

		if (*s >= 'a' && *s <= 'z')
		{
			while(*accept)
			{
				if (*s == *accept)
				{
					return (s);
					break;
				}
				accept++;
			}

		}
		s++;
	}
	return(ps);
}
