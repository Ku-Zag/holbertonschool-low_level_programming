#include "main.h"
/**
 * _strlen - entry
 * @s: string
 * Description: _strlen
 * Return: length n
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n] != 0)
		n++;
	return (n);
}
