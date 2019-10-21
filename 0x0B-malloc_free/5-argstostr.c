#include <stdlib.h>
#include "holberton.h"

/**
* *argstostr - that concatenates all the arguments of your program
* @ac: variable int
* @av: variable pointer
* Return: pointer
*/

char *argstostr(int ac, char **av)
{
	int i, j, length = 0, tmp = 0;
	char *str;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			length++;
		}
	}
	str = malloc(length * sizeof(char) + ac + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++, tmp++)
		{
			str[tmp] = av[i][j];
		}
		str[tmp] = '\n';
		tmp++;
	}
	str[tmp] = '\0';
	return (str);
}
