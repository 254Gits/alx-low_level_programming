#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_grid- entry point
 *@grid : freed function
 *@height: height place holder
 *
 *
 *Return: nothhing
 */

void free_grid(int **grid, int height)
{
	int j;

	if (grid != NULL)
	{
		for (j = 0; j < height; j++)
		{
			free(grid[j]);
		}
		free(grid);
	}
}
