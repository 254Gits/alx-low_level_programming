#include <stddef.h>
/**
 *array_iterator - entry point
 *@array: array pointer
 *@size:size of the array
 *@action: function pointer
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size)
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}

