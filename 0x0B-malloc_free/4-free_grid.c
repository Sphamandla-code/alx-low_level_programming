#include "main.h"

/**
 * free_grid - free 2d grid
 * @grid: data
 * @height: hei
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
