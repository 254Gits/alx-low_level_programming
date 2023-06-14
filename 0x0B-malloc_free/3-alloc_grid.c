#include <stddef.h>
#include <stdlib.h>

/**
 *alloc_grid- entry point
 *@width: width place holder
 *@height: height place holder
 *
 *
 *Return: NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j;

	if (height == 0 || width == 0)
	{
		return (NULL);
	}
	else
	{
		int **grid = (int **)malloc(height * sizeof(int *));

		if (grid == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < height; i++)
		{
			grid[i] = (int *)malloc(width * sizeof(int));
			if (grid[i] == NULL)
			{
				for (j = 0; j < i; j++)
				{
					free(grid[j]);
				}
				free(grid);

				return (NULL);
			}
		}

		return (grid);
	}
}
