#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*free_grid - free a 2 dimensional grid previously created
*@width: check the width
*@height: check the height
*Return: void
*/
void free_grid(int **grid, int height)
{
	int i;
	int **grid;

	if (grid == NULL)
		return (NULL);
	if (
