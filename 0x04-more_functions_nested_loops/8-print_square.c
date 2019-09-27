#include <stdio.h>
#include "holberton.h"
/**
*print_square - that prints a square
*@size: is the size of the square
*Return:
*/
void print_square(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
}
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
