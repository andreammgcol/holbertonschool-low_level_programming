#include <stdio.h>
#include "holberton.h"
/**
* *_memset - that fills memory with a constant byte
* @s: variable string
* @b: variable char
* @n: bytes
* Return: string
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
