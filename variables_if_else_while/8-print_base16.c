#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowercase;
	char numbers;

	for (numbers = '0'; numbers <= '9'; numbers++)
	{
		putchar(numbers);
	}

	for (lowercase = 'a'; lowercase <= 'f'; lowercase++)
	{
		putchar(lowercase);
	}

	putchar('\n');
	return (0);
}
