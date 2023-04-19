#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator -  executes a function given as a parameter
 * @array : array
 * @size : the size of the array
 * @action : the funcion
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size <= 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
