#include "main.h"
/**
 * string_toupper - entry
 * @c: char
 * Description: string_toupper changes lower to upper
 * Return: char
 */
char *string_toupper(char *c)
{
	char *p = c;

	while (*c)
	{
		if (*c >= 'a' && *c <= 'z')
			*c = *c - ('a' - 'A');
		c++;
	}
	return (p);
}
