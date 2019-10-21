#include <stdio.h>
#include "dog.h"

/**
 * print_dog - that prints a struct dog
 * @d: pointer
 *
 * Return:
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (*d).name != NULL ? (*d). name : "(nil)");
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner ? (*d).owner : "(nil)");
	}
}
