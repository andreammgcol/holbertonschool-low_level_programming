#include <stdio.h>
#include "holberton.h"
/**
* *_strpbrk - that searches a string for any of a set of bytes
* @s: variable pointer
* @accept: variable pointer
* Return: string
*/

char *_strpbrk(char *s, char *accept)
{

	int i, j;

	for (i = 0; s[i] != '\0' ; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
		if (s[i] == accept[j])
			{
			s = s + i;
			return (s);
			}
		}
	}
	s = 0;
	return (s);
}
