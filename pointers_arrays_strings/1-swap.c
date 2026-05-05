#include <stdio.h>
/**
*swap_int - swap the values of two integers
*@a: check integer
*@b: check integer
* Return: Always 0
*/
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;

}
