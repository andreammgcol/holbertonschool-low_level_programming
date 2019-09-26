#include <stdio.h>
#include "holberton.h"
/**
*_isdigit - this checks for a digit.
*@c: the digit to be checked
*Return: 1 if is a digit. 0 otherwise
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
