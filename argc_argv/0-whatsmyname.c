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
	if (argc > 1)
		printf("%s\n", argv[1]);
	else
		printf("%s\n", argv[0]);

	return (0);
}
