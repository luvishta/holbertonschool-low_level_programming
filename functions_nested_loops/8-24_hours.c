#include "main.h"

/**
 * jack_bauer - prints every minutes of the day from 00:00 to 
 */
void jack_bauer(void);
#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int a, m;

	for (a = 0; a < 24; a++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
