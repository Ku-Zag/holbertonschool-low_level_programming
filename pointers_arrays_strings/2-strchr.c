#include "main.h"
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
	return (s);
}
