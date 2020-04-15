#include "search_algos.h"

/**
 * rec_binary_search - recursion function to find a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: pointer to the first element of the array
 * @index: index to start
 * @size: number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located, otherwise -1
 */

int rec_binary_search(int *array, size_t index, size_t size, int value)
{
	size_t middle, i;
	char *separator;

	if (index >= size)
		return (-1);

	middle = index + (size - index - 1) / 2;
	printf("Searching in array:");
	separator = " ";
	for (i = index; i < size; i++)
	{
		printf("%s%d", separator, array[i]);
		separator = ", ";
	}
	printf("\n");

	if (array[middle] == value)
		return (middle);
	if (array[middle] > value)
		return (rec_binary_search(array, index, middle, value));
	return (rec_binary_search(array, middle + 1, size, value));
}

/**
 * binary_search - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located, otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t index = 0, middle;

	if (value == '\0' || array == NULL)
		return (-1);

	else
	{
		middle = size / 2;

		if (array[middle] == value)
			return (middle);

		return (rec_binary_search(array, index, size, value));
	}

}

