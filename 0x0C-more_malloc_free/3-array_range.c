#include <stdlib.h>
#include "main.h"

/**
 *array_range- implementation of strlen function
 *@min: int placeholder
 *@max: max int placeholder
 *
 *
 *Return: nothing
 */

int *array_range(int min, int max)
{
	int i = 0, size, *x;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	x = malloc(size * sizeof(int));

	if (x == NULL)

	{
		return (NULL);
	}

	while (i < size)
	{
		x[i] = min + i;
		i++;
	}
	return (x);
}
