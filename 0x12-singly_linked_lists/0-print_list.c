#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_list - that prints all the elements of a list
*@h: variable pointer get list to print
*Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		count++;
	}
	return (count);
}

