#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point
* @argc: int argument count
* @argv: char argument
* Description: program that adds positive numbers
* Return: 1 if the number contains symbols. 0 otherwise
*/

int main(int argc, char *argv[])
{
	int sum, i, j;
	char *a;

	for (i = 1; i < argc; i++)
	{
		a = argv[i];

		for (j = 0; a[j]; j++)
		{
			if (a[j] < 48 || a[j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}

	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
