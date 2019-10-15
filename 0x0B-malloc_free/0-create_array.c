#include <stdio.h>
#include <stdlib.h>
/**
* main - entry point that prints the minimum number of coins
* @size: unsigned int
* @c: variable type char
* Return: pointer
*/

char *create_array(unsigned int size, char c)
{
	unsigned int cont;
	char *ptr = NULL;


	ptr = (char *) malloc(size * sizeof(char));

	if (size == 0 || ptr == NULL)
	{
	return (NULL);
	}
	for (cont = 0; cont < size; cont++)
	{
	ptr[cont] = c;
	}
	return (ptr);
}
