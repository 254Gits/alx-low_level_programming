#include "main.h"

/**
 * times_table - Entry point.
 *
 *
 *
 */

void times_table(void)
{
	int n, m;

	for (n = 0; n <= 9; n++)
	{
		_putchar ('0');
		for (m = 1; m <= 9; m++)
		{
			_putchar (',');
			_putchar ('0' + (n * m) / 10);
			_putchar ('0' + (n * m) % 10);
		}
		_putchar ('\n');
	}
}
