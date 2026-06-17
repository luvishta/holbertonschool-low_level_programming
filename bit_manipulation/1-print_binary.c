#include "main.h"

/**
 * print_binary_helper - use for recursive helper
 * @n: number to put
 */
void print_binary_helper(unsigned long int n)
{
	if (n == 0)
		return;

	print_binary_helper(n >> 1);
	putchar((n & 1) + '0');
}

/**
 * print_binary - prints binary representation of the number
 * @n: number to put
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		putchar('0');
		return;
	}

	print_binary_helper(n);
}
