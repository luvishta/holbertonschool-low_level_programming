#include "main.h"
/**
* _puts - prints a string followed by a new line
* @str: string to print
*/
void _puts(char *str)
{
int a = 0;

for (a = 0; str[a] != 0; a++)
{
_putchar(str[a]);
}

_putchar('\n');
}
