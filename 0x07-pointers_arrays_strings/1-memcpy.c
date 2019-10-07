#include <stdio.h>
#include "holberton.h"
/**
* *_memcpy - that copies memory area
* @dest: variable 1
* @src: variable 2
* @n: bytes
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
