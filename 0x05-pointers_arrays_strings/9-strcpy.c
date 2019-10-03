#include <stdio.h>
#include "holberton.h"
/**
* *_strcpy - that copies the string pointed
* @dest: variable 1
* @src: variable 2
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
	return (dest);
}
