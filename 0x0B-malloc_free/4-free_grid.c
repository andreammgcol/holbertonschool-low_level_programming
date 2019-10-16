#include <stdlib.h>
#include "holberton.h"

/**
* free_grid - that frees a 2 dimensional grid
* @grid: variable 1 integer
* @height: variable 2 integer
* Return: pointer
*/

void free_grid(int **grid, int height)
{
int i;

	for (i = 0; i <= height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
