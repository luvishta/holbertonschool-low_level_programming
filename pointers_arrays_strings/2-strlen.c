#include <stdio.h>
#include <string.h>
/**
*_strlen - returns the length of a string
*@s:measuring of string
*
* Return:length of string
*/
int _strlen(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}
return (length);
}
