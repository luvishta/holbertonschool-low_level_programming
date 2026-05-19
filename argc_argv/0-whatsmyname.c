#include <stdio.h>
/**
* main - prints its name, followed by a new line.
*@argc: - the number of command line
*@argv:- the number  array containing the command
*Return:Always 0
*/
int main(int argc, char **argv)
{
	while (argc--)
	printf("%s\n", argv[0]);

	return (0);
}

