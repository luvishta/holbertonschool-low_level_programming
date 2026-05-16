#include "main.h"
/**
* print_chessboard - prints the chessboard
* @a: chessboard array
*/
void print_chessboard(char (*a)[8])
{
	int i, j;
	char *row;

	for (i = 0; i < 8; i++)
	{
		row = a[i];

		for (j = 0; j < 8; j++)
		{
			_putchar(row[j]);
		}

		_putchar('\n');
	}
}
