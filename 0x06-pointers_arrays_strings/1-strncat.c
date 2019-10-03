#include <stdio.h>
#include "holberton.h"
/**
* *_strncat - that concatenates two strings
* @dest: variable 1
* @src: variable 2
* @n: variable bytes
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
	i++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
	dest[i + j] = src[j];
	}
	return (dest);
}
