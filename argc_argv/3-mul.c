#include "stdio.h"
#include "stdlib.h"
/**
* main - should give result of the multiplication
*@argc: - the number of command line
*@argv:- the number  array containing the command
*Return:Always 0
*/
int main(int argc, char *argv[])
{
	int a = 0;
	int b = 0;

		if (argc != 3)
		{
			printf("Error\n");
			return (1);
		}

		printf("%d\n",atoi(argv[a]) * atoi(argv[b]));
		return (0);
}
