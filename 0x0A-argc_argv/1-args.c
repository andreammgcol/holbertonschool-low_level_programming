#include <stdio.h>
/**
* main - that prints its name
* @argc: int argument count
* @argv: char argument
* Return: 0
*/

int main(int argc, char __attribute__((__unused__)) **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
