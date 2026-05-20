#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strdup- returns a pointer to a new string which is a duplicate of the string
* @str:check the string
* Return: a pointer to a new string or ,in success return pointed to dup, null
*/
char *_strdup(char *str)
{
	char *duplicate;
	int i;
	int length = 0;

	if (str == 0)
		return (NULL);

	while (str[length] != '\0')
		length++;

	duplicate = malloc(sizeof(char) * length + 1);

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= length ; i++)

		duplicate[i] = str[i];

	return (duplicate);
	free(duplicate);
}






