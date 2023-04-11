#include <stdlib.h>
#include "main.h"

/**
 * *create_array -  creates an array of chars
 * and initializes it with a specific char
 * @size : the size of the array
 * @c : the character to fill the array with
 * Return: a pointer to the array or null
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	i = 0;
	ar = malloc(size);
	if (size == 0)
		return(NULL);
	if (ar == NULL)
		return (NULL);
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
