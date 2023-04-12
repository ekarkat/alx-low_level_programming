#include <stdlib.h>
#include "main.h"

/*
 * free_grid - free grid for the previous maatrix
 * @grid : previous matrix
 * height : the height
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
