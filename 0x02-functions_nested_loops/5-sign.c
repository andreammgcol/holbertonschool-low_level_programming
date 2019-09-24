#include "holberton.h"
/**
 * print_sign - that checks the sign of a number.
 * @n: number to be checked
 * Return: Return: 1 if the number is > 0, -1 if the number is < 0. 0 otherwise
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
