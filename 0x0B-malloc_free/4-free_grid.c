#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees grid
 *
 * @grid: grid to free
 * @height: height of grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int count;

	for (count = 0; count < height; count++)
		free(grid[count]);
	free(grid);
}
