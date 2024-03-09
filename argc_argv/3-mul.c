#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry
 * @argc: argc
 * @argv: argv
 * Description: main
 * Return: integere
 */
int main(int argc, char *argv[])
{
	int result = 1;
	int l = 1;
	int num = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		while (l < argc)
		{
			num = atoi(argv[l]);
			result *= num;
			l++;
		}
		printf("%d\n", result);
		return (0);
	}
}
