#include "main.h"
/**
*_strpbrk - searches a string for any of a set of bytes
*@s: search for strings
*@accept: look for set of bytes
*Return: pointer to same bytes or null
*/
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; accept[j] != '\0'; j++)
	{
		if (s[i] == accept[j])
		{
			return (&s[i]);
		}
	}
}
return (0);
}
