#include "stdio.h"
/**
* main - should print a number, followed by a new line
*@argc: - the number of command line
*@argv:- the number  array containing the command
*Return:Always 0
*/
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
