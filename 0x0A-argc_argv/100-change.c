#include <stdio.h>
#include <stdlib.h>
/**
* main - entry point that prints the minimum number of coins
* @argc: int argument count
* @argv: char argument
* Return: 0
*/
int main(int argc, char *argv[])
{
int cents, ncoins = 0, balance = 0;

if (argc < 2)
{
	printf("Error\n");
}
else
{
	cents = atoi(argv[1]);
	balance = cents;
	while (balance > 0)
	{
		if (balance >= 25)
		{
			balance = balance - 25;
			ncoins++;
		}
		else if (balance >= 10 && balance < 25)
		{
			balance = balance - 10;
			ncoins++;
		}
		else if (balance >= 5 && balance < 10)
		{
			balance = balance - 5;
			ncoins++;
		}
		else if (balance >= 2 && balance < 5)
		{
			balance = balance - 2;
			ncoins++;
		}
		else if (balance == 1)
		{
			balance = balance - 1;
			ncoins++;
		}
	}
	printf("%d\n", ncoins);
}
	return (0);
}
