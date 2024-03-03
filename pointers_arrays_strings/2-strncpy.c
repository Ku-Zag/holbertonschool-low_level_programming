#include "main.h"

/**
 * _strncpy - entry
 * @dest: des
 * @src: source
 * @n: integer
 * Description: _strncpy hate
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return dest;
}
