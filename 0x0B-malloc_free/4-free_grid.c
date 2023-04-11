#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2d array
 *
 * @grid: 2d of  grid
 *
 * @height: height dimension of the mmemory grid
 *
 * Description: frees for all  memory of grid
 *
 * Return: nothing for now
 *
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}


