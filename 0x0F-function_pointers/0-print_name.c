#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* print_name - that prints a name
* @name: variable char
* @f: pointer a function
* Return:
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
