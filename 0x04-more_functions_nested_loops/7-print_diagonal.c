#include "main.h"

/**
 * print_numbers- Entry point.
 *
 *description -printing intergers
 *
 */

void print_diagonal(int n)
{
	int d;
	int x;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (d =0; d < n; d++)
		{
			for (x = 0; x < d; x++)
			{
				_putchar(' ');
			}
			_putchar ('\\');
			_putchar ('\n');
		}
	}
}	
