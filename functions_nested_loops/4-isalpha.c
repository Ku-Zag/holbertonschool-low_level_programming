#include "main.h"

/**
 * _islower - Entry point
 * @c: An input character
 * Return: Always 0 (Success)
 *
 */

int _isalpha(int c)
{
	char a;
	char b;
	int value = 0;

	for (a = 'a', b = 'A'; a <= 'z' && b <= 'Z'; a++, b++)
	{
		if (a == c || b == c)
		{
			value = 1;
		}
	}

	return (value);
}
