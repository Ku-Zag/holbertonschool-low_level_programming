#include "main.h"
#include <stdio.h>
/**
 * _strchr - entry
 * @s: string
 * @c: char
 * Description: _strchr strchr()
 * Return: char
 */
char *_strchr(char *s, char c)
{
	while (*s != 0)
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (c == '\0')
		return (s);

	else
		return (NULL);
}
