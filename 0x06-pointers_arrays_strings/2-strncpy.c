#include <stdio.h>
#include "holberton.h"
/**
* *_strncpy - that copies a string
* @dest: variable 1
* @src: variable 2
* @n: variable bytes
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
