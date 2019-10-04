#include <stdio.h>
#include "holberton.h"
/**
* *_strcat - that concatenates two strings
* @dest: variable 1
* @src: variable 2
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int m = 0;
	int l = 0;

	while (dest[m] != '\0')
	{
	m++;
	}

	while (src[l] != '\0')
	{
	dest[m + l] = src[l];
	l++;
	}
	dest[m + l] = '\0';
	return (dest);
}
