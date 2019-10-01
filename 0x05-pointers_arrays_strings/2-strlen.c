#include "holberton.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: variable pointer
 * Return: cont
 */
int _strlen(char *s)
{
	int cont;

	for (cont = 0; s[cont] != '\0'; cont++)
	{
		cont++;
		s++;
	}
	return (cont);
}
