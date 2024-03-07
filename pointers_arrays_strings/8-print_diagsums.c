#include "main.h"
#include <stdio.h>
/**
 * print_diagrams - entry
 * @a: matrix
 * @size: size of matrix
 * Description: print_diagrams
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int l = 0;
	int n = 0;
	long long int sum1 = 0;
	long long int sum2 = 0;

	while (l < size && n < size)
	{
		sum1 += a[l * size + n];
		n++;
		l++;
		sum2 += a[l * size - n];
	}
	printf("%lld, %lld\n", sum1, sum2);
}
