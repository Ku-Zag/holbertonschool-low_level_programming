#include "main.h"
/**
 * puts2 - entru
 * @s - string
 * Description: puts2 puts eoc
 */
void puts2(char *s)
{
	int l = 0;
	
	while (s[l] != 0)
	{
		if (l % 2 == 0)
			_putchar(s[l]);
		l++;
	}
	_putchar('\n');
}
