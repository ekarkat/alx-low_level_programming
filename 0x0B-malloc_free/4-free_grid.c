#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Free previous made matrix
 * @grid: The maatrix
 * @height: The height
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
