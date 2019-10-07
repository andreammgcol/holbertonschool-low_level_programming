#include <stdio.h>
#include "holberton.h"

/**
* *rot13 - that encodes a string using rot13
* @s: variable string
* Return: char
*/

char *rot13(char *s)
{
	int i, j;

	char alpha[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
			'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
			'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g',
			'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
			's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	char replace[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
			'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
			'J', 'K', 'L', 'M', 'n', 'o', 'p', 'q', 'r', 's', 't',
			'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e',
			'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};

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
				j = 52;
			}
			j++;
		}
		i++;
	}
	return (s);
}
