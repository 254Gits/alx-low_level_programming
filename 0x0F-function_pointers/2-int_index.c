#include "function_pointers.h"

/**
 *int_index - entry point
 *@array: storage of string
 *@size:size of function
 *@cmp:pointer to function
 *
 *Return: haystack
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!cmp && !array)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}

