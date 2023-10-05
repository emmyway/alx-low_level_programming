#include "main.h"

/**
 * free_grid- fxn frees a 2D array allocated by malloc
 * @grid: the 2D array to be freed
 * @height: this represent the row of the array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
