#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the memory allocate for the grid
 * created by alloc_grid
 * @grid: grid to free
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int k;

	if (grid == NULL || height == 0)
		return;
	for (k = 0; k < height; k++)
		free(grid[k]);
	free(grid);
}
