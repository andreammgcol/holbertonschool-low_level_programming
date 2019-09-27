#include <stdio.h>
#include "holberton.h"
/**
*print_line -  that draws a straight line in the terminal
*@n: is the number of times the character _ should be printed
*Return:
*/
void print_line(int n)
{
int i;
for (i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar ('\n');
}
