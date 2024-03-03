#include "main.h"
/**
 * leet - entry
 * @c: char
 * Description: leet is 1337
 * Return: char
 */
char *leet(char *c)
{
	int origin[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int change[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i = 0;
	int l;

	while (c[i])
	{
		l = 0;

		while (l < 10)
		{
			if (c[i] == origin[l])
				c[i] = change[l];
			l++;
		}
		i++;
	}
	return (c);
}
