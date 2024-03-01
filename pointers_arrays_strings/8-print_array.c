#include "main.h"
#include <stdio.h>
/**
 * print_array - entry
 * @a: array
 * @n: integre
 * Description: print_array prrints array
 */
void print_array(int *a, int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		printf("%d", a[l]);
		if (l != n - 1)
			printf(", ");
	}
	printf("\n");
}
