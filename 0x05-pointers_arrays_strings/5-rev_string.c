#include "holberton.h"
/**
* rev_string -  that reverses a string
* @s: variable pointer
* Return:
*/

void rev_string(char *s)
{
	int tam = 0;
	int i;
	char temp;

	while (s[tam] != '\0')
	{
		tam++;
	}

	for (i = 0; i < tam; i++)
	{
		temp = s[i];
		s[i] = s[tam - 1];
		s[tam - 1] = temp;
		tam--;
	}
}
