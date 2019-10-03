#include "holberton.h"
/**
* puts_half - that prints half of a string
* @str: variable pointer
* Return:
*/
void puts_half(char *str)
{
int n;
for (n = 0; str[n] != '\0'; n++)
{
if (n % 2 != 0)
_putchar(str[n]);
}
_putchar('\n');
}
