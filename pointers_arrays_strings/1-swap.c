#include "main.h"
/**
 * swap_int - entry
 * @a: inetrger
 * @b: integre
 * Description: swap_ int swaps values of a and b
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
