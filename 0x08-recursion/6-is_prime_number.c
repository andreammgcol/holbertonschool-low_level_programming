#include <stdio.h>
#include "holberton.h"

/**
* internal_prime - function calculate if a integer is a prime number
* @num: variable type int
* @i: variable type int
* Return: int
*/

int internal_prime(int num, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else
	{
		if (num % i  == 0)
		{
			return (0);
		}
		else
		{
			return (internal_prime(num, i - 1));
		}
	}
}

/**
 * is_prime_number - function evaluate if a integer is a prime number
 * @n: variable int
 * Return: 1 if a number is prime.. 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (internal_prime(n, n / 2));
	}
}
