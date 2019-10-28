#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
void print_int(va_list args);
void print_char(va_list args);
void print_string(va_list args);
void print_double(va_list args);
/**
 * print_int - that prints integers
 * @args: va_list
 */
void print_int(va_list args)
{
	int i;

	i = va_arg(args, int);
	printf("%d", i);
}

/**
 * print_char - that prints characters
 * @args: va_list
 */
void print_char(va_list args)
{
	int c;

	c = va_arg(args, int);
	printf("%c", c);
}

/**
 * print_string - that prints strings
 * @args: va_list
 */
void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		printf("(nil)");
	if (str != NULL)
		printf("%s", str);
}

/**
 * print_double - that prints float
 * @args: va_list
 */
void print_double(va_list args)
{
	double d;

	d = va_arg(args, double);
	printf("%f", d);
}

/**
 * print_all - that prints anything
 * @format: variable const char *
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *comma = "";
	char *comma2 = ", ";
	int x = 0;

	va_start(args, format);

	while (format[x] != '\0')
	{
		printf("%s", comma);
		switch (format[x])
		{
			case 'i':
				print_int(args);
				break;
			case 'c':
				print_char(args);
				break;
			case 's':
				print_string(args);
				break;
			case 'f':
				print_double(args);
				break;
			case 'e':
				++x;
				comma = "";
				continue;
			default:
			break;
		}
		comma = comma2;
		++x;
	}
	printf("\n");
	va_end(args);
}

