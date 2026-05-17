#include "main.h"
/**
* _sqrt_recursion - returns natural square root of a number
* @n: number
* Return: square root or -1
*/
int _sqrt_recursion(int n)
{
	int result;

	if (n < 0)
		return (-1);

	result = 0;

	if (result * result == n)
		return (result);

	result = _sqrt_recursion(n - 1);

	if (result != -1)
		return (result);

	return (-1);
}
