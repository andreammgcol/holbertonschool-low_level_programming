#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* *add_dnodeint - that adds a new node at the beginning of a list
* @head: variable pointer to pointer
* @n: value
* Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = NULL;
	newNode->prev = NULL;
	newNode->n = n;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}

	newNode->next = *head;
	(*head)->prev = newNode;
	*head = newNode;

	return (*head);
}

