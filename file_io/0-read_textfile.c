#include "main.h"
/**
 * read_textfile - reads file
 * @filename: name of file
 * @letters: letters of text
 * Description: bytes of buffer
 * Return: file desdcriptor
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int o, r, w;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);
	o = open(filename, O_RDONLY);

	if (o < 0)
	{
		free(buffer);
		return (0);
	}
	r = read(o, buffer, letters);

	if (r < 0)
	{
		free(buffer);
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, r);
	free(buffer);
	close(o);

	if (w < 0)
		return (0);
	return ((ssize_t)w);
}
