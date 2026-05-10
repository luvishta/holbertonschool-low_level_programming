#include "main.h"
#include "string.h"
/**
* puts_half - prints the second half of a string
* @str: string to print
*/
void puts_half(char *str)
{
int length;
int a;
int begin;
for (a = 0; str[a] != '\0'; a++)
length++;
if (length % 2 == 0)
begin = length / 2;
else
begin = (length + 1) / 2;
for (a = begin; str[a] != '\0'; a++)
_putchar(str[a]);
_putchar('\n');
}
