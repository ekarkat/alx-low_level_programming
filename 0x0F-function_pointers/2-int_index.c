#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - search for an integer
 * @array : array to start searching within
 * @size : the size of the array
 * @cmp : the function
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	
	if (array == NULL || cmp == NULL)
		return(-1);
	if (size <= 0)
		return(-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
				return(i);
	}
	return(-1);
}
