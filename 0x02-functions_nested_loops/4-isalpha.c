#include "holberton.h"
/**
 * _isalpha - that checks for lowercase or uppercase character.
 * @c: character to be checked
 * Return: Return: 1 if the character is lowercase or uppercase. 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
