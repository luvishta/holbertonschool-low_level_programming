#include "main.h"
#include "string.h"
/**
* rev_string - reverse the string
*@s: check the string
*/
void rev_string(char *s)
{
int length = 0;
int i = 0;
char temp;

while (s[length] != '\0')
{
length++;
}
length--;
while (i < length)
{
temp = s[i];
s[i] = s[length];
s[length] = temp;

i++;
length--;
}
}
