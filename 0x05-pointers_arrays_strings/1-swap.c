#include <stdio.h>
#include "holberton.h"
/**
* swap_int - function that swaps the values of two integers
* @a: variable 1
* @b: variable 2
* Return:
*/
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
