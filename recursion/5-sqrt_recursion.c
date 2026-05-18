#include "main.h"

/**
*_find_sqrt - find the natural square root
*@i: - guess
*@n:number
*Return: sqaure root or -1
*/
int _find_sqrt(int n, int i)
{
	if (i *i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (_find_sqrt(n, i + 1));
}

/**
*_sqrt_recursion - find square root of a num
*@n: number of the square root
*Return:the square root or -1
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_find_sqrt(n, 0));
}
