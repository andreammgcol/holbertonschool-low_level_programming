#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_list - function that frees a list_t list
* @head: variable pointer
* Return:
*/

void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
	return;

	while (head->next != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}

	free(head->next);
	free(head->str);
	free(head);
}
