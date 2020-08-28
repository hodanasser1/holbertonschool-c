#include "holberton.h"

/**
 * alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0;
	int j = 0;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	grid = (int **)malloc(sizeof(int *) * height);
	for (i = 0; i < height && grid != NULL; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		for (j = 0; j < height && grid != NULL; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
