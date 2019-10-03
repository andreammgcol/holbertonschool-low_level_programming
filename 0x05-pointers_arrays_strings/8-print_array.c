#include <stdio.h>
#include "holberton.h"

/**
* print_array - that prints n elements of an array of integers
* @a: variable pointer
* @n: variable elements
* Return:
*/

void print_array(int *a, int n)
{
	int cont = 0;

	for (cont = 0; cont < n; cont++)
	{
	if (cont == (n - 1))
	{
	printf("%d", a[cont]);
	}

	else
	{
	printf("%d, ", a[cont]);
	}
	}
	printf("\n");
}
