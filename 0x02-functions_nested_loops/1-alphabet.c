#include "holberton.h"
/**
 *print_alphabet - function that prints the alphabet, in lowercase.
 *
 *Return:
 */
void print_alphabet(void)
{
int alp;
for (alp = 'a'; alp <= 'z'; alp++)
{
_putchar(alp);
}
_putchar('\n');
return;
}
