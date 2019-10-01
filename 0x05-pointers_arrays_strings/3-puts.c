#include "holberton.h"
/**
* _puts - that prints a string
* @str: variable pointer
* Return:
*/
void _puts(char *str)
{
	int p = 0;

	while (str[p] != '\0')
	{
	_putchar(str[p]);
	p++;
	}
	_putchar('\n');
}
