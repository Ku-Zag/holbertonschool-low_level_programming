#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entru
 * @argc: argument
 * @argv: string
 * Description: argc argv
 * Return: inteher
 */
int main(int argc, char *argv[])
{
	int l = 0;
	int i = 1;
	int sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		while(i < argc)
		{
			while (argv[i][l])
			{
				if (!(isdigit(argv[i][l])))
				{
					printf("Error\n");
					return (1);
				}
				l++;
			}
			sum += atoi(argv[i]);
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
