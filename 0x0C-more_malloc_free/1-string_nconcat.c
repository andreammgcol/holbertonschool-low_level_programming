#include <stdlib.h>
#include "holberton.h"
/**
* *string_nconcat - that concatenates two strings
* @s1: variable 1 type char
* @s2: variable 2 type char
* @n: variable unsigned int
* Return: pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i = 0, j = 0, len, k, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (n >= j)
	{
		k = i + j + 1;
		n = j;
		s3 = malloc(sizeof(char) * k);
	}
	else
	{
		k = i + n + 1;
		s3 = malloc(sizeof(char) * k);
	}
	if (s3 == NULL)
		return (NULL);
	for (len = 0; len < i; len++)
		s3[len] = s1[len];
	l = len;
	for (len = 0; len < n; len++)
	{
		s3[l] = s2[len];
		l++;
	}
	s3[l] = '\0';
	return (s3);
}

