#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* *add_node - that adds a new node at the beginning of a list_t list
* @head: variable pointer to pointer
* @str: variable pointer
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	new_node->len = strlen(str);
	new_node->str = strdup(str);
	*head = new_node;

	return (*head);
}

