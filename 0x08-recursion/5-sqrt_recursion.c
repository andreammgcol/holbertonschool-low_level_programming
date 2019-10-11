#include <stdio.h>
#include "holberton.h"

/**
* sqrt_internal - function to allow use of another variable
* @n: variable type int
* @l: variable type int
* Return: n natural square root of a number. -1 otherwise
*/

int sqrt_internal(int n, int l)
{
	if (n < 0)
		return (-1);

	if (l * l == n)
	{
		return (l);
	}
	else if (l != n)
	{
		return (sqrt_internal(n, l + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - that returns natural square root of a number
 * @n: variable int
 * Return: n natural square root of a number. -1 otherwise
 */

int _sqrt_recursion(int n)
{
	return (sqrt_internal(n, 0));
}
