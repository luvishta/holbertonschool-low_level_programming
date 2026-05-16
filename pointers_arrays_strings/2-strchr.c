#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: find string
 * @c: character to search
 *
 * Return: pointer to first occurrence of c, or let it be null
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] == c)
		{
			return (&s[a]);
		}
		a++;
	}

	if (c == '\0')

	{
		return (&s[a]);
	}
	return (0);
}
