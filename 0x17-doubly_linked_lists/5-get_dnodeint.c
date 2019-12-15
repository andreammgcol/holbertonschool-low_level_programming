#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* *get_dnodeint_at_index - that prints all the elements of a dlistint_t list
* @head: variable pointer
* @index: index int
* Return: the nth node of a dlistint_t linked list.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;
	dlistint_t *i;

	for (i = head; i != NULL; i = i->next)
	{
		if (x == index)
			return (i);
		x++;
	}

	return (NULL);
}

