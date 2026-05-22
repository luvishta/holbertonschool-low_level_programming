#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatenates two strings
* @s1: first string
* @s2: second string
* @n: check the number
* Return: pointer to new memory allocated
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
	{
	unsigned int i, j;
	unsigned int length1 = 0;
	unsigned int length2 = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	for (length1 = 0; s1[length1] != '\0'; length1++)
	{
	}
	for (length2 = 0; s2[length2] != '\0'; length2++)
	{
	}
	if (n >= length2)
		n = length2;

	concat = malloc(sizeof(char) * (length1 + n + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
	{
		concat[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		concat[i + j] = s2[j];
	}
	concat[i + j] = '\0';

	return (concat);
	free(concat);
}
