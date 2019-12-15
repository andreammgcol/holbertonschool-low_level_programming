#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*dlistint_len - that returns the number of elements
*@h: variable pointer get list to print
*Return: the number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t res = 0;
	const dlistint_t *i;

	for (i = h; i != NULL; i = i->next)
	{
		res++;
	}
	return (res);
}

