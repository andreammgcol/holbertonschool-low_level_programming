#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* int_index - that searches for an integer
* @array: variable pointer
* @size: size of array
* @cmp: pointer a function
* Return: the index of the first element for which the cmp
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		i = 0;
		while (i < size)
		{
			if (cmp(array[i]))
			{
			return (i);
			}
			i++;
		}
	}
	return (-1);
}
