#include "main.h"
/**
 * _strcmp - entry
 * @s1: s1
 * @s2: s2
 * Description: _strcmp compares
 * Return: interge
 */
int _strcmp(char *s1, char *s2)
{
	int differ;

	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	differ = *s1 - *s2;
	return (differ);
}
