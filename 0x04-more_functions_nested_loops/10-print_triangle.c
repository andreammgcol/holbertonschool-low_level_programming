#include <stdio.h>
#include "holberton.h"
/**
*print_triangle - that prints a triangle
*@size: is the size of the triangle
*Return:
*/
void print_triangle(int size)
{
int i, j, k, sp;
if (size <= 0)
{
_putchar('\n');
}
for (i = 1; i <= size; i++)
{
sp = size - i;
for (j = 1; j <= sp; j++)
{
_putchar(32);
}
for (k = 1; k <= i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
