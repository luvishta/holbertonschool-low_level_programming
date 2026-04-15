#include <stdio.h>

/**
 * main - prints base 16 numbers in lowercase
 * Return: 0
 */
int main(void)
{
	int n = 0;
	char c = 'a';

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
