#include <stdio.h>
#include <stdlib.h>

/**
  *free_grid - entry point
  *
  * @grid: grid double pointer
  * @height: height interger
  *
  * Return: NULL
  */
void free_grid(int **grid, int height)
{
	int i = height - 1;

	while (i >= 0)
	{
		free(grid[i]);
		i--;
	}
	free(grid);
}
