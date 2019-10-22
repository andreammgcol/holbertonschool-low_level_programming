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
* *_strcpy - that copies the string pointed
* @dest: variable 1
* @src: variable 2
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
	dest[i] = '\0';
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

	new_dog->name = malloc(len1 + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(len2 + 2);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->name = _strcpy(new_dog->name, name);
	new_dog->name = _strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}
