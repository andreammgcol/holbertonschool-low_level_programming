#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - my program in C
* @argc: int argument count
* @argv: char pointer
*
* Return: 0
*/

int main(int argc, char *argv[])
{
	char *op;
	char op2;
	int a, b, res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = argv[2];
	op2 = *argv[2];
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((op2 != 43 && op2 != 45 && op2 != 37
	 && op2 != 47 && op2 != 42) || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((op2 == 47 || op2 == 37) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = (*get_op_func(op))(a, b);

	printf("%d\n", res);


	return (0);
}
