#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - that frees dogs
 * @d: variable pointer
 * Return:
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
