#include <stdlib.h>
#include "main.h"
/**
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int l1 = 0;
	int l2 = 0;
	int l3 = 0;
	if (s1 == NULL)
		*s1 = 0;
	if (s2 == NULL)
		*s2 = 0;
	while (s1[l1] != 0)
		l1++;
	while (s2[l2] != 0)
		l2++;
	s3 = malloc(sizeof(char) * (l1 + l2 + 1));

	if (s3 == NULL)
		return (NULL);
	while (*s1 != 0)
	{
		s3[l3] = *s1;
		s1++;
		l3++;
	}

	while (*s2 != 0)
	{
		s3[l3] = *s2;
		l3++;
		s2++;
	}
	s3[l3] = '\0';
	return (s3);

}	
