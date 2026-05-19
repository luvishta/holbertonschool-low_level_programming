#include <stdlib.h>
#include "stdio.h"
/**
* main - should give result of the multiplication
*@argc: - the number of command line
*@argv:- the number  array containing the command
*Return:Always 0
*/
int main(int argc, char *argv[])
{
	int test1, test2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	test1 = atoi(argv[1]);
	test2 = atoi(argv[2]);
	result = test1 * test2;

	printf("%d\n", result);

	return (0);
}
