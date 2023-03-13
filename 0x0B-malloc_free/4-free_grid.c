#include <stdlib.h>

/**
 * free_grid - Free the 2d grid
 * @grid: Grid
 * @height: Height
 * Return: Nothig
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
