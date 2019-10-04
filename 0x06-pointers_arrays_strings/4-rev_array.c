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
int i, j, k;

	j = 0;
	k = n - 1;
	for (i = 0; i < n / 2; i++)
	{
	j = a[k];
	a[k] = a[i];
	a[i] = j;
	k--;
	}
}
