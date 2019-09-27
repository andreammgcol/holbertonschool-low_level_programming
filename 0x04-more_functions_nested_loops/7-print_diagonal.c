#include <stdio.h>
#include "holberton.h"
/**
*print_diagonal - that draws a diagonal line on the terminal
*@n: is the number of times the character \ should be printed
*Return:
*/
void print_diagonal(int n)
{
int i, sp, j;
if (n<=0)
{
_putchar('\n');
}	
for (i = 1; i <= n; i++)
{
sp = i - 1;
for (j = 1; j <= sp; j++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
