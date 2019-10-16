#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* *str_concat - that concatenates two strings
* @s1: variable 1 type char
* @s2: variable 2 type char
* Return: pointer
*/

char *str_concat(char *s1, char *s2)
{
	int tams1 = 0, tams2 = 0, i = 0, j = 0, size = 0;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
	}
	tams1 = i;

	while (s2[j] != '\0')
	{
		j++;
	}
	tams2 = j;
	size = tams1 + tams2;

	s3 = malloc(size * sizeof(char));
	i = 0, j = 0;

	if (s3 == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
	s3[i] = s1[i];
	i++;
	}
	while (s2[j] != '\0')
	{
	s3[i + j] = s2[j];
	j++;
	}
	s3[i + j] = '\0';
	return (s3);
}
