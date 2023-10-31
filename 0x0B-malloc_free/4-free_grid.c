#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional grid.
 * @grid: fir parameter passed to the function.
 * @height: height of the array.
 * Return: Nothing.
*/

void free_grid(int **grid, int height)
{
	while (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height])
			height--;
		}
		free(grid);
	}
}
