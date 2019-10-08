#include "holberton.h"
/**
* *_strstr - function that locates a substring
* @haystack: variable pointer 1
* @needle: variable pointer 2
* Return: substring
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j, k = 0, counter = 0;
	int worldLength = 0;

	while (needle[k] != '\0')
	{
		worldLength++;
		k++;
	}

	for (i = 0; haystack[i] != '\0' ; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				counter++;
				i++;
			}
		}

		if (worldLength == counter)
		{
			haystack = haystack + (i - worldLength);
			return (haystack);
		}
		else
		{
			counter = 0;
		}
	}
	return ('\0');
}
