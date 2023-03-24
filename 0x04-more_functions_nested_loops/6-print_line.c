#include "main.h"

/**
 * print_line- Entry point.
 *
 * @n : interger
 *
 *description -printing lines
 *
 */

void print_line(int n)
{
	int l;

		if (n <= 0)
		{
			_putchar ('\n');
		}
		else
		{
			for (l = 0; l < n; l++)
			{
				_putchar ('_');
			}
			_putchar ('\n');
		}
}
