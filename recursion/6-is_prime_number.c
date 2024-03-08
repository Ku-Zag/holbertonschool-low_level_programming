#include "main.h"
/**
 */
int find_prime(int l, int n);

int is_prime_number(int n)
{
	if (n == 1)
	       return (0);

	return (find_prime(2, n));
}

int find_prime(int l, int n)
{
	if (n % l != 0)
		return (1);

	else if (n % l == 0)
		return (0);

	return (find_prime(l + 1, n));

}
