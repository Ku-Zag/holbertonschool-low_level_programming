#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - entry
 * @str: string
 * Description: _strdup duplicates string
 * Return: char
 */
char *_strdup(char *str)
{
	char *ptr;
	int i = 0;
	int l = 0;

	if (str == NULL || str == 0)
		return (NULL);

	while (str[l] != 0)
		l++;

	ptr = malloc(sizeof(char) * (l + 1));

	if (ptr == NULL)
		return (NULL);
	while (i < l)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
