#include "main.h"
/**
 * _strcat - entry
 * @dest: destioantion
 * @src: source
 * Description: _strcat appends from source to destionation
 * Return: char string
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != 0)
		ptr++;

	while (*src != 0)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
