#include "holberton.h"

/**
* *_strchr - that locates a character in a string
* @s: variable pointer
* @c: variable char
* Return: string
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
