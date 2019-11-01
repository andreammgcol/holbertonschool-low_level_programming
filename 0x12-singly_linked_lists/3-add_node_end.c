#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* *add_node_end - that adds a new node at the end of a list_t list
* @head: variable pointer to pointer
* @str: variable pointer
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *temp = *head;
	int cont = 0;

	while (str[cont] != '\0')
	{
		cont++;
	}

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = cont;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = node;
	return (*head);
}

