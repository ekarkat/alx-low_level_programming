#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * Return: i dont know
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *dogy;

	dogy = d;
	dogy->name = name;
	dogy->owner = owner;
	dogy->age = age;
}
