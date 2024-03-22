#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry
 * @argc: arg c
 * @argv: string
 * Description: gives argment
 * Return: integer
 */
int main (int argc, char *argv[])
{
	int op_checker(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op_checker = get_op_func(argv[2]);

	if (op_checker == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", op_checker(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
