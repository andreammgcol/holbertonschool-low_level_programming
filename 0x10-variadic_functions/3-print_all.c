#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

void imp_char(va_list imp)
{
	printf("%c", va_arg(imp, char));
}

void imp_int(va_list imp)
{
	printf("%d", va_arg(imp, char));
}

void imp_float(va_list imp)
{
	printf("%f", (float)va_arg(imp, double));
}

void *imp_char(va_list imp)
{
	/*if (s == NULL)
	{
		printf("nil");
	}*/
	printf("%c", (char)va_arg(imp, string));
}

ft ar[] = {
{"s", imp_char},
{"i", imp_int},
{"f", imp_float},
{"s", *imp_char}	
};

void print_all(const char * const format, ...)
{
	int cont1 = 0, cont2 = 0;

	va_list imp;
	va_start(imp, format);

	while (cont1 <= format)
	{
		while (cont2 <= 3)
		{
			if (ar[cont2].s == format[cont1])
			{
				return (ar[cont2].f);	
			}
			cont2++;
		}
		cont1++;
	}

}
