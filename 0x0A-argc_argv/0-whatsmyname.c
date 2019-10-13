#include <stdio.h>
/**
* main - that prints its name
* @argc: int argument count
* @argv: char argument
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
