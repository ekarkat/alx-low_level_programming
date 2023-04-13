#include "main.h"
#include <stdlib.h>

/**
 * array_range - array of integers
 * @min : min
 * @max : max
 * Return: array pointer;
 */
int *array_range(int min, int max)
{
	int *ln, i;

	if (max < min)
		return (NULL);
	ln = malloc(sizeof(int) * (max - min + 1));
	if (ln == NULL)
		return (NULL);
	for (i = 0; i <= max - min; i++)
		ln[i] = min + i;
	return (ln);
}
