#ifndef ANDREA_H
#define ANDREA_H

/**
 * struct dog - Define a new type with Django
 * @name: char
 * @age: float
 * @owner: char
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
