#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point
* @argc: int argument count
* @argv: char argument
* Description: program that multiplies two numbers
* Return: 1 if the program does not receive two arguments. 0 otherwise
*/

int main(int argc, char *argv[])
{
	int mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	return (0);
}
