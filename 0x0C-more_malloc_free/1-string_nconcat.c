#include <stdlib.h>
#include "holberton.h"
/**
* *string_nconcat - that concatenates two strings
* @s1: variable 1 type char
* @s2: variable 2 type char
* @n: variable unsigned int
* Return: pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s3;
unsigned int len1 = 0, len2 = 0, i, j, k = 0;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
while (s1[len1] != '\0')
{
	len1++;
}
while (s2[len2] != '\0')
{
	len2++;
}
k = len1 + len2 + 1;
s3 = malloc(sizeof(char) * k);
if (s3 == NULL)
	return (NULL);

for (i = 0; s1[i] != '\0'; i++)
{
	s3[i] = s1[i];
}

for (j = 0; s2[j] != '\0'; j++)
{
	if (n >= len2)
		s3[i + j] = s2[j];
	else
	{
		if (j <= n)
			s3[i + j] = s2[j];
	}
}
s3[i + j] = '\0';
return (s3);
}
