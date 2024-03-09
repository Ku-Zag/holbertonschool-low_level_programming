#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		while(i < argc)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
