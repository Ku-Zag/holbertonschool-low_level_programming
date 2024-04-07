#include "main.h"
/**
 */
int main (int argc, char *argv[])
{
	int f01, f02, fc;
	char *buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n")
		exit(97));
	}
	f01 = open(argv[1], O_RDONLY);

	if (f01 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f02 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNCAT, 0664);

	if (f02 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while 

}
