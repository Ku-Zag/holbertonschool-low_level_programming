#include "main.h"
/**
 * is_prime_number - entry
 * @n: integr
 * Description: display 1 if if prime otherwise 0
 * Return: integre
 */
int find_prime(int l, int n);

int is_prime_number(int n)
{
	if (n == 1)
	       return (0);

	return (find_prime(2, n));
}
/**
 * find_prime - cont
 * @l: divisor
 * @n: integr
 * Description: returns 1 if prime otherwise 0
 * Return: intgr
 */
int find_prime(int l, int n)
{
	if (n == l)
		return (1);

	else if (n % l == 0)
		return (0);

	return (find_prime(l + 1, n));

}
