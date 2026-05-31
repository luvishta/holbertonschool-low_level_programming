#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - calculates the sum of all arguments that will be provided
 * @n: number of arguments passed to the function
 * Return: total sum of the arguments, or 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list values;
	unsigned int i;
	int result = 0;

	if (n == 0)
		return (0);

	va_start(values, n);

	for (i = 0; i < n; i++)
		result += va_arg(values, int);

	va_end(values);

	return (result);
}
