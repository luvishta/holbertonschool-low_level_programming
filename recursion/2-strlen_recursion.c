#include "main.h"
/**
* _strlen_recursion - returns the length of a string
* @s: string to measure
*
* Return: length of the string
*/
int _strlen_recursion(char *s)
{
	int count;

	if (s[0] == '\0')
		return (0);

	count = _strlen_recursion(s + 1);

	return (1 + count);
}
