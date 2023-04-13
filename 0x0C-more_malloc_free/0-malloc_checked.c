#include "main.h"
#include <stdlib.h>

/*
 * malloc_checker - allocate memorry using malloc
 * @b : integer
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(int) * b);

	if (ptr == NULL)
	{
		free(ptr);
		return (98);
	}
	return (ptr);
}
