#include "main.h"
/**
 */
int create_file(const char *filename, char *text_content)
{
	int fo, fw, i = 0;

	if (filename == NULL)
		return (-1);
	fo = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fo < 0)
		return (-1);
	while (text_content && *(text_content + i))
		i++;
	fw = write(fo, text_content, i);
	close(fo);

	if (fw < 0)
		return (-1);
	return (1);
}
