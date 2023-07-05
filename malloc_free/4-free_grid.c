#include "main.h"

/**
 * free_grid - libera una rejilla
 * @grid: int
 * @height: int
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
