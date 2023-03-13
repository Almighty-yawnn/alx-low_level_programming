#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Function that frees 2 dimensional grid
 * @grid: address of grid
 * @height: height of the grid
 * Return: Always
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

