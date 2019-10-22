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
	dog_t *new_dog;
	int len1, len2;

	if (name == NULL || owner == NULL)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
		if (new_dog == NULL)
			return (NULL);

	len1 = _strlen(name);
	len2 = _strlen(owner);

	new_dog->name = malloc(sizeof(char) * len1 + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(sizeof(char) * len2 + 2);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->name = _strncpy(new_dog->name, name, len1 + 1);
	new_dog->name = _strncpy(new_dog->owner, owner, len2 + 1);
	new_dog->age = age;

	return (new_dog);
}
