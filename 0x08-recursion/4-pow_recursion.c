#include <stdio.h>
#include "holberton.h"

/**
* _pow_recursion - that returns the value of x raised to the power of y
* @x: variable type int
* @y: variable type int
* Return: function
*/

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		return ((x * _pow_recursion(x, y - 1)));
	}
	else
	{
	return (1 * _pow_recursion(x, -y));
}
}
