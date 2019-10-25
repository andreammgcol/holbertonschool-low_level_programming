#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 * @n: variable unsigned int
 *
 * Return: the sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list argum;
	int sum = 0;
	unsigned int i;

	va_start(argum, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(argum, int);
	}
	va_end(argum);

	return (sum);
}
