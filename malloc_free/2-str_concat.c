#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenates two strings
* @s1: first string
* @s2: second string
* Return: pointer to new string, or NULL
*/
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int length1 = 0;
	int length2 = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (length1 = 0; s1[length1] != '\0'; length1++)

		for (length2 = 0; s2[length2] != '\0'; length2++)

			concat = malloc(sizeof(char) * (length1 + length2 + 1));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		concat[i] = s1[i];

	for (j = 0; j < length2; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);
	free(concat);
}
