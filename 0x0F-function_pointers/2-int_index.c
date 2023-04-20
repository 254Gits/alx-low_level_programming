#include <stddef.h>
#include "function_pointers.h"
/**
 *int_index - entry point
 *
 *@array:character pointer
 *@size: interger
 * @cmp: functions pointer
 *
 *
 *
 *Return: Nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int search = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
	{
		return (-1);
	}
	while (search < size)
	{
		if (cmp(array[search]) != 0)
		{
			return (search);
		}
		search++;
	}
	return (-1);
}
