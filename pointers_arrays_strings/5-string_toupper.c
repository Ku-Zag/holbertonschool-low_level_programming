#include "main.h"
/**
 * string_touper - entry
 * @c: char
 * Description: string_toupper
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
