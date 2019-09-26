#include <stdio.h>
#include "holberton.h"
/**
*more_numbers - this prints the numbers, from 0 to 14 ten times
*Return:
*/
void more_numbers(void)
{
int n, m;
n  = 0;
while (n < 10)
{
m  = 0;
while (m < 15)
{
if (m > 9)
_putchar(m / 10 + '0');
_putchar(m % 10 + '0');
m++;
}
n++;
_putchar('\n');
}
return;
}
