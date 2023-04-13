#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memorry using malloc
 * @b : integer
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
