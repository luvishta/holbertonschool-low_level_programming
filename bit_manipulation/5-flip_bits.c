#include "main.h"

/**
 * flip_bits - Returns the number of bits and to change one number into another
 * @n: First num.
 * @m: Second num.
 * Return: Number of bits that differs.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;
	int i;

	for (i = 0; diff != 0; i++)
	{
		if (diff & 1)
			count++;

		diff >>= 1;
	}

	return (count);
}
