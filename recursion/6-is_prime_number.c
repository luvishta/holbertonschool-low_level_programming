#include "main.h"

/**
 * prime - checks for prime number
 * @n:check the number
 * @i:check the divisor
 * Return: 1 if prime, 0 otherwise
 */
int prime(int n, int i)
{
	if (i == n)
	{
		return (1);
	}

	if (n % i == 0)
		return (0);

	return (prime(n, i + 1));

}

/**
 * is_prime_number - returns 1 if n is prime
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (prime(n, 2));
}
