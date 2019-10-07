#include <stdio.h>
#include "holberton.h"

/**
* _strspn - that gets the length of a prefix substring
* @s: variable pointer 1
* @accept: variable pointer 2
* Return: cont
*/

unsigned int _strspn(char *s, char *accept)
{

int i, j, cont = 0;

	for (i = 0; s[i] != '\0' ; i++)
	{
	if (cont != i)
	break;

		for (j = 0; s[j] != '\0'; j++)
		{
		if (s[i] == accept[j])
			{
			cont++;
			}
		}
	}
	return (cont);
}
