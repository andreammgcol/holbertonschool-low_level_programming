#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* set_bit - that sets the value of a bit to 1 at a given index
* @*n: pointer
* @index: the index
* Description: that sets the value of a bit to 1
* Return: 1 if it worked, or -1 if an error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int set;

	if (index > 64)
		return (-1);

	set = 1 << index;
	*n = *n | set;
	return (1);
}

