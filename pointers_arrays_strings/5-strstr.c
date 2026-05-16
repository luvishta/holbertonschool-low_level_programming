#include "main.h"
/**
* _strstr - locates a substring
* @haystack: string to find it
* @needle: substring to search for
* Return: pointer to the start of the substring or null if not found
*/
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;

		}

		if (needle[j] == '\0')
			return (&haystack[i]);
	}

	return (0);
}
