#include "holberton.h"
/**
* rev_string -  that reverses a string
* @s: variable pointer
* Return:
*/
void rev_string(char *s)
{
int tam = 0;
int j = 0;
int i;
int x;
char m[] = "          ";

while (s[tam] != '\0')
{
tam++;
}

for (i = tam - 1; i >= 0; i--)
{
m[j] = s[i];
j++;
}

for (x = 0; x < tam; x++)
{
s[x] = m[x];
}
s[tam] = '\0';
}
