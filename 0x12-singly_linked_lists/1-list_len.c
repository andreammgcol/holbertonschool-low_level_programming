#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* list_len - that returns the number of elements in a linked list
* @h: variable pointer
* Return: the number of elements
*/

size_t list_len(const list_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		h = h->next;
		number++;
	}
	return (number);
}

