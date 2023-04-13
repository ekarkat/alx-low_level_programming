#include "main.h"
#include <stdlib.h>

/**
 * _calloc - calloc using malloc
 * @nmemb: array member
 * @size: size of each member
 * Return: return pointer init to 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *space;

	if (nmemb == 0 || size == 0)
		return (NULL);

	space = malloc(nmemb * size);

	if (space == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		space[i] = 0;
	return (space);
}
