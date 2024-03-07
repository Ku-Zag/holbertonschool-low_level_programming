#include "main.h"
#include <stdio.h>
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

	while (*s)
	{
		accept = p;

		if (*s >= 'a' && *s <= 'z')
		{
			while (*accept)
			{
				if (*s == *accept)
				{
					return (s);
				}
				accept++;
			}

		}
		s++;
	}
	return (NULL);
}
