#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - a function that returns a pointer to a 2
 * dimensional array of integers.
 * @width : width
 * @height : the height
 * Return: return pointer or null
 */

int **alloc_grid(int width, int height)
{
	int **matrix, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = malloc(sizeof(int*) * height);

	if (matrix == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(sizeof(int) * width);
		for (j = 0; j < width; j++)
			matrix[i][j] = 0;
	}
	return (matrix);
}
