#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_array - creates an array of chars,initialise it with a specific char
* @c: check for characters in the array
* @size : check the size
* Return: null or a pointer to an array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
