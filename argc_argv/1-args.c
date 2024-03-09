#include <stdio.h>
/**
 * main - entry
 * @argc: argc
 * @argv: argv
 * Description: main
 * Return: integere
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
