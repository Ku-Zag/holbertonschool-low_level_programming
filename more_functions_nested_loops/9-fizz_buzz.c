#include <stdio.h>
/**
 * main - entry
 * Description: main Fizz Buzz
 * Return: void
 */
int main(void)
{
	int n;

	for (n = 1; n <=100; n++)
	{
		if (n != 100)
		{
			if (n % 3 == 0 && n % 5 == 0)
			{
				printf("FizzBuzz ");
				continue;
			}
			if (n % 3 == 0)
				printf("Fizz ");
			else if (n % 5 == 0)
				printf("Buzz ");
			else
				printf("%d ", n);
		}
		else
			printf("FizzBuzz");
	}
	putchar('\n');
	return (0);
}
