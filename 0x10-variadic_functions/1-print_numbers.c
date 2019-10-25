#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @n: variable unsigned int
 * @separator: variable pointer
 *
 * Return:
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d%s", va_arg(numbers, int), separator);
		}
		else
		{
			printf("%d", va_arg(numbers, int));
		}

	}
	printf("\n");
	va_end(numbers);

}
