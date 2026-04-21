#include "main.h"

/**
 * _atoi - convert string to integer safely
 * @s: input string
 *
 * Return: integer value
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int started = 0;
	int digit;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			digit = s[i] - '0';

			/* SAFE: prevent overflow before multiplying */
			if (result > (2147483647 - digit) / 10)
			{
				if (sign == 1)
					return (2147483647);
				return (-2147483648);
			}

			result = result * 10 + digit;

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}

		i++;
	}

	if (started == 0)
		return (0);

	return (result * sign);
}
