#include "holberton.h"
/**
 * print_alphabet_x10 - function that prints 10 times the alphabet
 *
 * Return:
 */
void print_alphabet_x10(void);
{
int j = 0;
while (j < 10)
{
int a;
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
j++;
}
return;
}
