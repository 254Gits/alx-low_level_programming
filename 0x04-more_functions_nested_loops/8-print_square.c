#include "main.h"

/**
 * print_square- Entry point.
 *
 * @size: variable for square size determinant
 *
 *
 */

void print_square(int size)
{
	int s, i;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (s = 0; s < size; s++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar (35);
			}
		_putchar ('\n');
		}
	}
}
