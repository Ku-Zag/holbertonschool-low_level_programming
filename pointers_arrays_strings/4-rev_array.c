#include "main.h"
/**
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
		n--;
		l++;
	}
}
