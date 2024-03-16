#include "main.h"
#include <stdlib.h>
/**
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int l1 = 0, l2 = 0, l3 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1] != 0)
		l1++;
	while (s2[l2] != 0)
		l2++;
	if (n >= l2)
		n = l2;
	s3 = malloc(sizeof(char) * (l1 + n + 1));

	if (s3 == NULL)
		return (NULL);
	while (*s1)
	{
		s3[l3] = *s1;
		l3++;
		s1++;
	}

	return (s3);
}

