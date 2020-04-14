#include "search_algos.h"

/**
 * linear_search - that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located, otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (value == '\0' || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
		return (i);
	}
	return (-1);
}

