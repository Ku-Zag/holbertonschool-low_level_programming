#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - entry
 * @width: witdh of 2d array
 * @height: height of 2d array
 * Description: gives 2d array
 * Return: 2d array
 */
int **alloc_grid(int width, int height)
{
	int w_loc = 0;
	int h_loc = 0;
	int **d;

	if (width <= 0 || height <= 0)
		return (NULL);
	d = (int**)malloc(sizeof(int *) * height);

	if (d == NULL)
	{
		return (NULL);
	}
	for (; h_loc < height; h_loc++)
	{
		d[h_loc] = (int *)malloc(sizeof(int) * width);

		if (d[h_loc] == NULL)
			return (NULL);
	}
	for (h_loc = 0; h_loc < height; h_loc++)
	{
		for (; w_loc < width; w_loc++)
		{
			d[h_loc][w_loc] = 0;
		}
	}
	return (d);
}
