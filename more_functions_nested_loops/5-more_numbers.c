#include "main.h"
/**
 * more_numbers - entry
 * Description: more_numbers prints 0 to 14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int n;
	int l;

	for (l = 0; l <= 9; l++)
	{
		for (n = 0; n <= 14; n++)
		{

			if (n > 10)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
