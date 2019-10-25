#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* *get_op_func - contain the function that selects the correct function
* @s: variable pointer
*
* Return: NULL
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	int i = 0;

	while (i <= 4)
	{
		if (ops[i].op[0] == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
