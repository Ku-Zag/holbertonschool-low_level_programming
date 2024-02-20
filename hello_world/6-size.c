#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	pritnf("Size of a char: %lu byte(s)\n", sizeof(char));
	pritnf("Size of a int: %lu byte(s)\n", sizeof(int));
	pritnf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	pritnf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	pritnf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
