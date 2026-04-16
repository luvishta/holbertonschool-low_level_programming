#include "main.h"

/**
 * times_table - prints 9 times table starting from 0
 */
void times_table(void)
{
	int i, j, res;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			res = i * j;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}

			if (res < 10)
			{
				if (j != 0)
					_putchar(' ');
				_putchar(res + '0');
			}
			else
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
