#include "main.h"
/**
*leet - encodes a string into 1337
*@s: string to be modified
*Return: pointer to string
*/
char *leet(char *s)
{
	char a[11]  = "aAeEoOtTlL";
	char b[11] = "4433007711";
	int i;
	int j;


	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				(s[i] = b[j]);
			}
		}
	}
	return (s);
}



