#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"


void imp_char()
{
	printf("%c",c);
}

void imp_int()
{
	printf("%d",i);
}

void imp_float()
{
	printf("%f",f);
}

void *imp_char()
{
	/*if (s == NULL)
	{
		printf("nil");
	}*/
	printf("%c",s);
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
	char st;

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

st = va_arg(imp, const);

}
