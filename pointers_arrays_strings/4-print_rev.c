#include "main.h"
#include "string.h"
/**
*print_rev - prints string in rev followed by a new line
*@s: check the strings
*/
void print_rev(char *s)
{
int length;

for (length = 0; s[length] != '\0'; length++)
{
/*checks for end */
}
for (length--; length >= 0; length--)
{
_putchar(s[length]);
}
_putchar('\n');
}
