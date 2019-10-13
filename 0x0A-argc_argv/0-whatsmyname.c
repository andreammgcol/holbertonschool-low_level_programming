#include <stdio.h>
#include <stdlib.h>
#define UNUSED(argc) (void)(argc)

/**
* main - entry point
* @argc: int
* @argv: char
* Description: program that prints its name
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	UNUSED(argc);

		printf("%s\n", *argv);

	return (0);
}
