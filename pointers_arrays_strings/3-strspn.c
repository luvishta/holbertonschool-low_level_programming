#include "main.h"
/**
* _strspn - gets the length of the prefix substring
*@s: string to find
*@accept: accepts the bytes
* Return: number of matches bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	int match;

	for (i = 0; s[i] != '\0'; i++)
	{
		match = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match = 1;
			}
		}
		if (match == 0)
			return(i);
	
	}
return(i);
}
