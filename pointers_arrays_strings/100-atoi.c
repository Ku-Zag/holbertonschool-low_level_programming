#include <stdio.h>

/**
 * _atoi - a function that converts string to integer
 * @s: An input string
 * Description: _atoi at oi
 * Return: integer from conversion
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int number = 0;
	char non_digit = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			non_digit = 1;
			number = number * 10 + *s - '0';
		}

		else if (non_digit)
			break;
		s++;
	}

	if (sign < 0)
		number = (-number);

	return (number);
}
