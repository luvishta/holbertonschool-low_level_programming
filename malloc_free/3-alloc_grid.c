#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers.
*@width: check the width
*@height: check the height
*Return: a pointer to 2D array and null if width or height <= 0
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0)
	{
		return (NULL);
	}

	if (height <= 0)
	{
		return (NULL);
	}

		grid = malloc((sizeof(int *) * height));
		if (grid == NULL)
			return (NULL);

		for (i = 0; i < height; i++)
		{
			grid[i] = malloc((sizeof(int) * width));

			if (grid[i] == NULL)
			{
			return (NULL);
			}
			for (j = 0; j < width; j++)
				grid[i][j] = 0;
		}

	return (grid);
	free(grid);
}
