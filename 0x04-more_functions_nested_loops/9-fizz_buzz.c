#include <stdio.h>
/**
*main - This program that prints the numbers from 1 to 100.
*For multiples of three print Fizz
*and for the multiples of five print Buzz
*For numbers which are multiples of both three and five print FizzBuzz
*Return: 0
*/
int main(void)
{
int n;
for (n = 1; n <= 99; n++)
{
if (n % 3 == 0 && n % 5 == 0)
{
printf("FizzBuzz ");
}
else if (n % 3 == 0)
{
printf("Fizz ");
}
else if (n % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", n);
}
}
printf("Buzz");
printf("\n");
return (0);
}
