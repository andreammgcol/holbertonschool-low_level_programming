#include <stdlib.h>
#include "holberton.h"

/**
* **strtow - that splits a string into words
* @str: variable pointer
* Return: pointer
*/

char **strtow(char *str)
{
char **ar;
int i, j, count = 0, tam, k = 0, l;

	if (str == NULL || str[0] == '\0')
	return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		count++;
	}
	if (count == 0)
		return (NULL);
	ar = malloc(((count + 1) * sizeof(char *)));
	if (ar == NULL)
		return (NULL);
	for (i = 0; str[i] !=  '\0' && k < count; i++)
	{
		if (str[i] != ' ')
		{
			tam = 0;
			j = i;
			while (str[j] != ' ' && str[j] != '\0')
				j++, tam++;
			ar[k] = malloc((tam + 1) * sizeof(char));
			if (ar[k] == NULL)
			{
				for (k = k - 1; k >= 0; k++)
					free(ar[k]);
					free(ar);
					return (NULL);
			}
			for (l = 0; l < tam; l++, i++)
				ar[k][l] = str[i];
				ar[k++][l] = '\0';
		}
	}
	ar[k] = NULL;
	return (ar);
	}
