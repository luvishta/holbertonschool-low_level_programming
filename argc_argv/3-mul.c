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
		if (argc != 3)
		{
			printf("Error\n");
			return (1);
		}

		printf("%d\n", atoi(argv[4]) * atoi(argv[5]));
		return (0);
}
