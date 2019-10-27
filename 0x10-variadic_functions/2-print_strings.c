#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - that prints strings
 * @n: variable unsigned int
 * @separator: variable pointer
 *
 * Return:
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	const char *tmp;

	va_start(str, n);

	if (separator == NULL)
		separator = "";

	for (i = 1; i <= n; i++)
	{
		tmp = va_arg(str, char *);

		if (tmp == NULL)
		{
			printf("(nil)");
		}
		else if (i < n)
		{
			printf("%s%s", tmp, separator);
		}
		else
		{
			printf("%s", tmp);
		}
	}
	printf("\n");
	va_end(str);
}

