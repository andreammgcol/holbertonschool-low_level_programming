#include <stdio.h>

/**
* main - entry point
* @argc: int
* @argv: char
* Description: program that prints its name
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	int i;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
