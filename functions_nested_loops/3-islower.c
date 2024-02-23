#include "main.h"

/**
 * _islower - Entry point
 *
 * Return: Always 0 (Success)
 * 
 */

int _islower(int c)
{
	char a;
	int value;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (c == a)
		{
			value = 1;
		}
		else 
		{
			value = 0;
		}
	}
	return(value);
}
