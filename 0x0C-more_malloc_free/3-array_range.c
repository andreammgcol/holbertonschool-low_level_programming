#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - that creates an array of integers
 * @min: variable 1
 * @max: variable 2
 * Return: a pointer
 */

int *array_range(int min, int max)
{
	int *p, i;
	int total;

	if (min > max)
		return (NULL);

	total = max - min;
	p = malloc(sizeof(int) * (total + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i <= total; i++)
	{
		p[i] = min++;
	}
	return (p);
}

