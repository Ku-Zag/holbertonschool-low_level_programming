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
	int i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
