#include "holberton.h"
/**
 * print_rev - that prints a string, in reverse
 * @s: variable pointer
 * Return:
 */
void print_rev(char *s)
{
int tam = 0;
int i;

while (s[tam] != '\0')
{
tam++;
}
for (i = tam - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
