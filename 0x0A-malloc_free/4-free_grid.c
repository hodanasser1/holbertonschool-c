#include "holberton.h"

/**
 * free_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (height < 0)
	{
		return;
	}
	for (i = height - 1; i >= 0 && grid != NULL && grid[i] != NULL; i--)
	{
		free(grid[i]);
	}
	free(grid);
}

