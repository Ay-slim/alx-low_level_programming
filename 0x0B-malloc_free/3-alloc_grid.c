#include <stdlib.h>

/**
 * alloc_grid - Return a pointer to a 2 dimensional array of integers
 * @width: Width
 * @height: Height
 * Return: Null if failure. Pointer to 2D array.
*/

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid;
	int len = width * height;

	if (len <= 0)
		return (NULL);
	grid = (int **)malloc(height * sizeof(int *));
	if (!grid)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (!grid[i])
		{
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
