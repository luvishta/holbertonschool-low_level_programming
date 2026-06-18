#include "main.h"
/**
  * clear_bit - sets the value of a bit to 0
  *@n: number to pointer
  *@index: check index
  * Return: 1 if it worked, or -1 if an error occurred
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~((unsigned long int )1 << index);

		return (1);
}
