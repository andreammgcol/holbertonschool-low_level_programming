#include "holberton.h"
/**
* _puts_recursion - that prints a string
* @s: variable pointer 1
* Return:
*/

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
