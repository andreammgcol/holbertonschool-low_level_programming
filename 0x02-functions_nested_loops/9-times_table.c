#include "holberton.h"
/**
 * times_table - prints the 9 times table
 * Return:
*/
void times_table(void)
{
int i, j, count;
int start, end;
int mult = 0;
start = 0, end = 9;
for (i = start; i <= end; i++)
{
count = i;
for (j = 0; j <= 9; j++)
{
mult = count *j;
if (mult <= 9)
{
_putchar(' ');
_putchar(' ');
_putchar(mult + '0');
}
else
{
_putchar(' ');
_putchar(mult / 10 + '0');
_putchar(mult % 10 + '0');
}
if (j != 9)
{
_putchar(',');
}
}
_putchar('\n');
}
}
