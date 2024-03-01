#include "main.h"
/**
 * rev_string - entry
 * @s: string
 * Description: rev_string revs string
 */
void rev_string(char *s)
{
	char c;
	int n = 0, l = 0;

	while (s[l] != 0)
		l++;
	while (n < l)
	{
		c = s[n];
		s[n] = s[l - 1];
		s[l - 1] = c;
		n++;
		l--;
	}
}
