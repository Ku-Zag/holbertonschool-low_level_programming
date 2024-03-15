#include "main.h"
/**
 */
char *_strdup(char *str)
{
	char *ptr;
	int i = 0;
	int l = 0;

	l = strlen(str);
	ptr = malloc(sizeof(char) * l);
	
	if (l == 0);
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	while (i < l)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
