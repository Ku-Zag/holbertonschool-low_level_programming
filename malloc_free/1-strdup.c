#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 */
char *_strdup(char *str)
{
	char *ptr;
	int i = 0;
	int l = 0;

	if (str == NULL || str == 0)
		return (NULL);

	while (str[l] != 0)
		l++;

	ptr = malloc(sizeof(char) * (l + 1));

	if (ptr == NULL)
		return (0);
	if (l == 0)
		return (NULL);
	while (i < l)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
