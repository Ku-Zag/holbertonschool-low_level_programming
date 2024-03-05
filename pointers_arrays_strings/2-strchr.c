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
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == '\0')
		s = NULL;

	return (s);
}
