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
			print_number(n);
			_putchar(',');
			_putchar(' ');
			n--;
		}
		else
		{
			print_number(n);
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	print_number(98);
	_putchar('\n');
}
