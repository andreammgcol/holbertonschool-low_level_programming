#include <stdio.h>
#include "holberton.h"
/**
*print_most_numbers - this prints the numbers, from 0 to 9
*Return:
*/
void print_most_numbers(void)
{
int n = 0;
while (n < 10)
{
if (n != 2 && n != 4)
{
_putchar(n + '0');
}
n++;
}
_putchar('\n');
}
