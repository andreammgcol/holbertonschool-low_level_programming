#include "holberton.h"
/**
* puts_half - that prints half of a string
* @str: variable pointer
* Return:
*/
void puts_half(char *str)
{
	int cont;

	for (cont = 0; str[cont] != '\0'; cont++)
	{
	}
	cont++;
	cont = cont / 2;

	while (str[cont] != '\0')
	{
	_putchar(str[cont]);
	cont++;
	}
	_putchar('\n');
}
