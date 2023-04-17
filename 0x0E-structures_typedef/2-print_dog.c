#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print dog information
 * @d : the dog struct
 */

void print_dog(struct dog *d)
{
	struct dog *doggy;

	doggy = malloc(sizeof(struct dog));
	doggy = d;
	if (doggy == NULL)
		return;
	if (doggy->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", doggy->name);

	if (doggy->age <= 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", doggy->age);

	if (doggy->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", doggy->owner);
}
