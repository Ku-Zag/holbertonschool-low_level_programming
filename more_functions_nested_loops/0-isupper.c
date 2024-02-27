#include "main.h"
/**
 * -isupper - enrty
 * @c: character
 * Description: _isupper returns 1 if uppercase, if not 0
 * Return: 0
 */
int _isupper(int c)
{
	char upper;
	int value = 0;

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		if (upper == c)
		{
			value = 1;
		}
	}
	return (value);
}
