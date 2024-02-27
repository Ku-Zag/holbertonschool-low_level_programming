#include "main.h"
/**
 * _isdigit - entry
 * @c: value
 * Description - _isdigit returns 1 if char is digit, 0 otherwise
 * Return: value
 */
int _isdigit(int c)
{
	int n;
	int value = 0;

	for (n = '0'; n <= '9'; n++)
	{
		if (c == n)
		{
			value = 1;
		}
	}
	return (value);
}
