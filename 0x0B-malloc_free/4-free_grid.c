#include "main.h"
#include <stdlib.h>

/**
  * free_grid - the function frees an array
  * @grid: the array
  * @height: integer value
  *
  * Return: returns the pointer to the freed grid
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
