#include "main.h"
/**
 * _memcpy - entry
 * @dest: destination
 * @src: source
 * @n: intger
 * Description: _memcpy = memcpy
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int l = 0;
	char *pd = dest;

	while (l < n)
	{
		pd[l] = src[l];
		l++;
	}
	return (pd);
}
