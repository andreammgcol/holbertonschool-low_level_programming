#include <stdio.h>
#include "holberton.h"

/**
* *leet - that encodes a string into 1337
* @s: variable string
* Return: char
*/

char *leet(char *s)
{
	int i, j;
	char alpha[] = "oOlLeEaAtT";
	char replace[] = "0011334477";
	char letter;

	i = 0;
	while (s[i] != '\0')
	{
		letter = s[i];
		j = 0;
		while (alpha[j] != '\0')
		{
		if (letter == alpha[j])
		{
			letter = replace[j];
			s[i] = letter;
		}
			j++;
		}
		i++;
	}
	return (s);
}
