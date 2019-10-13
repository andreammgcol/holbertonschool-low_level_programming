#include <stdio.h>
/**
* main - entry point
* @argc: int argument count
* @argv: char argument
* Description: program that prints its name, followed by a new line
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
