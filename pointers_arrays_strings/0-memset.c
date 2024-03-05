#include "main.h"
/**
 * _memset - entry
 * @s: strrig
 * @b: char
 * @n: integer
 * Description: _memset do what memset() does
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l = 0;
	char *ptr = s;

	while (l < n)
	{
		ptr[l] = b;
		l++;
	}
	return (ptr);
}
