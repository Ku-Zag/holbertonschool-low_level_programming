#include "main.h"
/**
 * _strncat - entry
 * @dest: destionation
 * @src: soruce
 * Description: _strncat 
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int l = 0;

	while (*ptr != 0)
		ptr++;

	while (*src != 0 && l < n)
	{
		*ptr = *src;
		l++;
		src++;
		ptr++;
	}
	*ptr = '\0';
	return (dest);
}
