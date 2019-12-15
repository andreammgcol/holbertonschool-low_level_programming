#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* delete_dnodeint_at_index - that deletes the node at index
* @head: variable pointer to pointer
* @index: index to delete
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int x = 0;
	dlistint_t *i, *currentNode, *sigNode, *prevNode;

	if (*head == NULL)
		return (-1);
	for (i = *head; i != NULL; i = i->next)
	{
		if (x == index)
		{
			currentNode = i;
			sigNode = currentNode->next;
			prevNode = currentNode->prev;
			if (currentNode->prev == NULL && currentNode->next != NULL)
			{
				sigNode->prev = NULL;
				*head = sigNode;
			}
			else if (currentNode->next == NULL && currentNode->prev != NULL)
			{
				prevNode->next = NULL;
				*head = prevNode;
			}
			else
			{
				if (currentNode->next != NULL && currentNode->prev != NULL)
				{
					sigNode->prev = prevNode;
					prevNode->next = sigNode;
				}
				else
				{
					currentNode = NULL;
					*head = NULL;
				}
			}
			free(currentNode);
		}
		x++;
	}
	return (1);
}

