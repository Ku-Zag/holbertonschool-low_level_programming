#include "main.h"
#include <stdlib.h>
/**
 * array_range - entry
 * @min: min value
 * @max: max value
 * Description: ranges from min to max
 * Return: int array
 */
int *array_range(int min, int max)
{
	int *all;
	int l = 0, i = 0;
	
	if (min > max)
		return (NULL);

	l = max - min + 1;
	all = malloc(sizeof(int) * (l + 1));

	if (all == NULL)
		return (NULL);
	while (min <= max)
	{
		*(all + i) = min;
		min++;
		i++;
	}
	return (all);
}
