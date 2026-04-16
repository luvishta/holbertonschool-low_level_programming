#include "main.h"

/**
 * print_to_98 - prints numbers from n to 98
 * @n: starting number
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 98)
		{
			if (n >= 100)
				_putchar((n / 100) + '0');
			if (n >= 10)
				_putchar(((n / 10) % 10) + '0');
			if (n < 10 && n > -10)
				_putchar(n + '0');
			else
				_putchar((n % 10 < 0 ? -(n % 10) : n % 10) + '0');

			_putchar(',');
			_putchar(' ');
			n--;
		}
		else
		{
			if (n <= -100)
				_putchar('-'), _putchar((-n / 100) + '0');
			if (n <= -10)
				_putchar('-'), _putchar(((-n) / 10 % 10) + '0');
			if (n > -10 && n < 10)
				_putchar(n + '0');
			else if (n >= 10)
				_putchar(((n / 10) % 10) + '0');
			_putchar((n % 10 < 0 ? -(n % 10) : n % 10) + '0');

			_putchar(',');
			_putchar(' ');
			n++;
		}
	}

	/* print 98 */
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
