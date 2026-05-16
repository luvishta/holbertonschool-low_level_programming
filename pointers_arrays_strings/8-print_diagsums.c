#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: pointer to matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int row;
	int column;
	int total1 = 0;
	int total2 = 0;

	for (i = 0; i < size; i++)
	{
		row = i;
		column = i;
		total1 += a[row * size + column];

		row = i;
		column = size - i - 1;
		total2 += a[row * size + column];
	}

	printf("%d, %d\n", total1, total2);
}
