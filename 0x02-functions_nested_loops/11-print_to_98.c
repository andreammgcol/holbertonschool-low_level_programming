#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 -  that prints all natural numbers from n to 98
 * @n: natural numbers
 * Return: 0
 */
void print_to_98(int n)
{
if (n < 98)
{
for (; n <= 98; n++)
{
printf("%d", n);
if (n != 98)
printf(", ");
}
printf("\n");
}
else if (n > 98)
{
for (; n >= 98; n--)
{
printf("%d", n);
if (n != 98)
printf(", ");
}
printf("\n");
}
else
{
printf("%d", n);
printf("\n");
}
return (0);
}
