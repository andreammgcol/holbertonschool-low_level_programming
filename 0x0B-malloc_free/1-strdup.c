#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* *_strdup - that returns a pointer to a newly allocated space in memory
* @str: variable type char
* Return: pointer
*/

char *_strdup(char *str)
{
	char *ptr;
	int i = 0, j;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
	i++;
	}
	i++;
	ptr = malloc(i * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
	ptr[j] = str[j];
	}
	return (ptr);
}
