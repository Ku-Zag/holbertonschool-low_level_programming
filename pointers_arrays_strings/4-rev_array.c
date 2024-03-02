#include "main.h"
/**
 * reverse_array - entry
 * @a: array
 * @n: lenght of arraay
 * Description: reverse_array
 */
void reverse_array(int *a, int n)
{
	int l = 0;
	int r = n - 1;
	int i;

	while (l < r)
	{
		i = a[l];
		a[l] = a[r];
		a[r] = i;
		r--;
		l++;
	}
}
