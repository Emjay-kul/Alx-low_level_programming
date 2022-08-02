#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that frees the grid created
 *
 * @grid: the grid
 *
 * @height: height
 *
 * Return: frees the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
