#include <stdio.h>
#include "holberton.h"
/**
* print_diagsums - prints the sum of the two diagonals of a square matrix
* @a: variable pointer 1
* @size: variable int
* Return:
*/

void print_diagsums(int *a, int size)
{
	int i, j;
	int sumx = 0;
	int sumy = 0;

	for (i = 0; i < size; i++)
	{
		sumx = sumx + a[(size + 1) * i];
	}
	for (j = 0; j < size; j++)
	{
		sumy = sumy + a[(size - 1) * (j + 1)];
	}

	printf("%d, %d\n", sumx, sumy);
}
