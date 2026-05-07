#include <unistd.h>
/**
* _putchar - writes a character
* @c: character to print
:w*
* Return: 1 if success, -1 if error
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
