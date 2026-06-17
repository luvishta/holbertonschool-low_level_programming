#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @n: number to check
 * @index: bit position (starting from 0)
 *
 * Return: 0 or 1, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	for (i = 0; i < index; i++)
		n >>= 1;

	return (n & 1);
}
