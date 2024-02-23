#include "main.h"

/**
 * _islower - Entry point
 * @c: An input character
 * Return: Always 0 (Success)
 *
 */

int _islower(int c)
{
	char a;
	int value = 0;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == c)
		{
			value = 1;
		}
	}

	return (value);
}
