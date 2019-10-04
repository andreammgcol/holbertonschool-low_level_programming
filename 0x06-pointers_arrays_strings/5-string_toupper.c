#include <stdio.h>
#include "holberton.h"
/**
* *string_toupper - that changes all lowercase letters of a string to uppercase
* @s: variable of a string
* Return: s
*/
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	if (s[i] >= 'a' && s[i] <= 'z')
	{
	s[i] = s[i] - 32;
	}
	}
	return (s);
}
