#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 *
 * @width: width input
 *
 * @height: height input to let me great
 *
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **tet;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	tet = malloc(sizeof(int *) * height);

	if (tet == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		tet[x] = malloc(sizeof(int) * width);

		if (tet[x] == NULL)
		{
			for (; x >= 0; x--)
				free(tet[x]);

			free(tet);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			tet[x][y] = 0;
	}

	return (tet);
}


