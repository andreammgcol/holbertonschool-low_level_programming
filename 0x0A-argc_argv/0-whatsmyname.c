#include <stdio.h>
/**
* main - that prints its name
* @argc: int argument count
* @argv: char argument
* Return: 0
*/

int main(int argc, char *argv[])
{
	printf("%s \n", argv[argc - 1]);
	return (0);
}
