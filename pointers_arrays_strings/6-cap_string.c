#include "main.h"
/**
 * cap_string - entry
 * @c: char
 * Description: cap_string caps
 * Return: char
 */
char *cap_string(char *c)
{
	char *p = c;  

	while (*c)
	{
		if (*c >= 'a' && *c <= 'z' && (*(c - 1) == ' ' || *(c - 1) == '\n' || *(c - 1) == '\t' || *(c - 1) == '.'))
		{
			*c = *c - ('a' - 'A');
		}
		c++;
	}
	return (p);
}
