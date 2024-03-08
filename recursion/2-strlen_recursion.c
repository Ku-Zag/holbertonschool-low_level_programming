#include "main.h"
/**
 * _strlen_recursion - entry
 * @s: string
 * Description: _strlen_recursion helps 
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);

	return (1 +_strlen_recursion(s + 1));
}
