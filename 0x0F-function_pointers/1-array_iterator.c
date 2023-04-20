#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 *array_iterator - entry point
 *
 *@array:intergr pointer
 *@size: size of function
 *@action: function pointer
 *
 *
 *
 *Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != 0 || size != 0)
	{
		for (; size-- > 0; array++)
		{
			action(*array);
		}
	}
}
