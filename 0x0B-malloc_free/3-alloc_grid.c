#include <stdlib.h>
#include "holberton.h"

/**
* **alloc_grid - hat returns a pointer to a 2 dimensional array of integers
* @width: variable 1 integer
* @height: variable 2 integer
* Return: pointer
*/

int **alloc_grid(int width, int height)
{
	int **ar, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar = malloc(height * sizeof(int *));
	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(int));
		if (ar == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(ar[j]);
			}
			free(ar);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}
	}
return (ar);
}
