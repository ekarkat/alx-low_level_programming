#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create new dog
 * @name : dog name
 * @age : dog age
 * @owner : dog owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t doffy;
	doffy.name = name;
	doffy.age = age;
	doffy.owner = owner;
}
