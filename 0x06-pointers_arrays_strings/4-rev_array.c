#include <stdio.h>
#include "holberton.h"
/**
* reverse_array - that reverses the content of an array of integers
* @a: variable 1
* @n: number of elements
* Return:
*/
void reverse_array(int *a, int n)
{
	int tempo[n];
	int i;
	int j = 0;

	for (i = n - 1; i >= 0; i--)
	{
	tempo[j] = a[i];
	j++;
	}

	for (j = 0; j < n; j++)
	{
	a[j] = tempo[j];
}
