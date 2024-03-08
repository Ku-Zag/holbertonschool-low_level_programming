#include "main.h"
/**
 */
int is_prime_number(int n)
{
	if (n = 0)
}

int find_prime(int l, int n)
{
	if (l == n )
		return (0);

	else if (n % l == 0)
		return (1);

	return (find_prime(l + 1, n));

}
