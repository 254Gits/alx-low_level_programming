#include <stdio.h>
#include <stdlib.h>

/**
  **alloc_grid - entry point
  *
  * @width: width interger
  * @height: height interger
  *
  * Return: NULL
  */

int **alloc_grid(int width, int height)
{
	int **p;
	int j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	p = malloc(height * sizeof(int *));

	if (p == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < height; j++)
	{
		p[j] = malloc(width * sizeof(int *));
		if (p[j] == NULL)
		{
			if (j >= 0)
			{
				free(p[j]);
				j--;
			}
			free(p);
			return (NULL);
		}
	}
	return (p);
}
