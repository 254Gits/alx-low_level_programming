#include "main.h"
#include <stdlib.h>

/**
 *create_array- entry point
 *@size: supposed size
 *@c: character c
 *
 *Return: haystack
 */

char *create_array(unsigned int size, char c)
{
	char *luck;
	unsigned int k;

	if (size == 0)
	{
		return (NULL);
	}

	luck = malloc(sizeof(char) * size);
	{
		if (luck == NULL)
		{
			return (NULL);
		}

		for (k = 0; k <= size; k++)
		{
			luck[k] = c;
		}
	}
	return (luck);
}
