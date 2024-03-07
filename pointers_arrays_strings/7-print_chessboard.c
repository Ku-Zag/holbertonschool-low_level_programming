#include "main.h"
/**
 * print_chessboard - enrty
 * @a: string
 * Description: print_chessboard
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int l = 0;
	int n;

	while (l < 8)
	{
		n = 0;
		while (n < 8)
		{
			_putchar(a[l][n]);
			n++;
		}
		l++;
		_putchar('\n');
	}
}
