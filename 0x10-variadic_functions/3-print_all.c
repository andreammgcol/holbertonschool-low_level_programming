#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - that prints anything
 * @format: variable const char *
 *
 * Return:
 */

void print_all(const char * const format, ...)
{
	va_list args;
	va_start(args, fmt);
	char* comma = "";
	char* comma2 = ", ";
	int i, c;
	double d;
	char *str;

	while (*fmt != '\0')
	{
		printf("%s", comma);
		switch(*fmt)
		{
		case 'i':
			i = va_arg(args, int);
			printf("%d", i);
			break;
		case 'c':
			i = va_arg(args, int);
			printf("%c", i);
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
			{
				printf("(nil)");
			}
			if (str != NULL)
			{
				while(*str)
				{
					putchar(*str);
					str++;
				}
			}
			break;
		case 'f':
			d = va_arg(args, double);
			printf("%f", d);
			break;
		case 'e':
			++fmt;
			comma = "";
			continue;
		default:
			break;
		}
		comma = comma2;
		++fmt;
	}
	printf("\n");
	va_end(args);
}

