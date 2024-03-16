#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - entry
 * @grid: 2d array
 * @height: coulms of 2d
 * Description: free function
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
	{
		free((int *)grid[i++]);
	}
	free(grid);
}
