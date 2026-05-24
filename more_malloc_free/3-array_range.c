#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: check the smallest value
 * @max: check the biggest value
 * Return: pointer to the new array, or return NULL
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}

	size = (max + 1) - min;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
