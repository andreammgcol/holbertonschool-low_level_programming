#include "holberton.h"
/**
 * print_last_digit - that prints the last digit of a number.
 * @b: digit to be printed
 * Return: the value of the last digit.
 */
int print_last_digit(int b)
{
b = b % 10;
if (b < 0)
{
b = b * -1;
}
_putchar('0' + b);
return (b);
}
