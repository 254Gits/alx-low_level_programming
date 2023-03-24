#include "main.h"

/**
 * more_numbers- Entry point.
 *
 *description -printing intergers
 *
 *
 */

void more_numbers(void)
{
	int j;
	int c;

	for (j = 0; j < 10; j++)
	{
		for (c = 0; c < 15; c++)
		{
			if (c > 9)
			{
				_putchar ((c / 10) + 48);
			}
			_putchar ((c % 10) + 48);
		}
		_putchar ('\n');
	}
}
