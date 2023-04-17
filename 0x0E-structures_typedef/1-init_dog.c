#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: struct name
 * @name: dog name
 * @age: dog age
 * @owner : dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *dogy;

	dogy = malloc(sizeof(struct dog));

	if (dogy == NULL)
		exit(1);
	dogy = d;
	dogy->name = name;
	dogy->owner = owner;
	dogy->age = age;
}
