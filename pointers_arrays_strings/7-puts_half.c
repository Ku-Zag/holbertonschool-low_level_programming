#include "main.h"
/**
 * puts_half - entry
 * @s: string
 * Description: puts_half puts half
 */
void puts_half(char *s)
{
	int n;
	int l = 0;

	while (s[l] != 0)
		l++;

	if (l % 2 == 1)
	{
		n = (l + 1) / 2;
		while (n < l)
		{
			_putchar(s[n]);
			n++;
		}
	}
	else
	{
		n = l / 2;
		while (n < l)
		{
			_putchar(s[n]);
			n++;
		}
	}
	_putchar('\n');
}
