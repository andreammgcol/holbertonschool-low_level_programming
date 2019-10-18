#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* *malloc_checked - that allocates memory using malloc
* @b: unsigned int
* Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	void *tmp;

	tmp = malloc(b * sizeof(unsigned int));
	if (tmp == NULL)
	{
		free(tmp);
		exit(98);
	}
	return (tmp);
}

