#include "main.h"
/**
 * _puts - enrty
 * @str: string
 * Description: _puts puts puts
 * Return: void
 */
void _puts(char *str)
{
	int n = 0;

	while (str[n] != 0)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
