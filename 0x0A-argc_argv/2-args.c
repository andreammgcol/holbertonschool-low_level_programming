#include <stdio.h>
/**
* main - entry point
* @argc: int argument count
* @argv: char argument
* Description: program that prints all arguments it receives
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
