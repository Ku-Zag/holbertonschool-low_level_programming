#include "main.h"
/**
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, power = 1, len = 0;

	if (b == NULL)
		return (0);
	while (b[len])
		len++;
	while (len)
	{
		if (b[len - 1] != '1' && b[len - 1] != '0')
			return (0);
		if (b[len - 1] == '1')
			i += power;
		power *= 2;
		len--;
	}
	return (i);
}
