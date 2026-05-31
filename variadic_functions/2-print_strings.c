#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints all strings passed to it
 * @separator: string placed between each string
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *s;

	va_start(list, n);

	i = 0;
	while (i < n)
	{
		s = va_arg(list, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (separator && i != n - 1)
			printf("%s", separator);

		i++;
	}

	printf("\n");
	va_end(list);
}
