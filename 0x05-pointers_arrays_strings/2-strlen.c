#include "holberton.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: variable pointer
 * Return: cont
 */
int _strlen(char *s)
{
	int cont = 0;

	while (s[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}
