#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: variable pointer
 * Return: cont
 */
int _strlen(char *s)
{
	int cont = 0;

	while (s[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}

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

/**
 * *new_dog - that creates a new dog
 * @name: char
 * @age: float
 * @owner: char
 * Return: new pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int len1, len2;

	if (name == NULL || owner == NULL)
		return (NULL);
	ptr = malloc(sizeof(dog_t));
		if (ptr == NULL)
			return (NULL);

	len1 = _strlen(name);
	len2 = _strlen(owner);

	ptr->name = malloc(sizeof(char) * (len1 + 1));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->owner = malloc(sizeof(char) * (len2 + 1));
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	ptr->name = _strncpy(ptr->name, name, len1 + 1);
	ptr->name = _strncpy(ptr->owner, owner, len2 + 1);
	ptr->age = age;

	return (ptr);
}
