#include <stdio.h>
#include "holberton.h"

/**
* *_strchr - that locates a character in a string
* @s: variable pointer
* @c: variable char
* Return: string
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
		s = s + 2;
		return (s);
		}
		i++;
	}
	return (s = 0);
}
