#include <stdio.h>
#include <stdarg.h>
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

	va_start(str, n);

	if (separator == NULL)
		separator = "";

	for (i = 1; i <= n; i++)
	{
		if (i == '\0')
		{
			printf("(nil)");
		}

		else if (i < n)
		{
			printf("%s%s", va_arg(str, char *), separator);
		}

		else
		{
			printf("%s", va_arg(str, char *));
		}

	}
	printf("\n");
	va_end(str);
}
