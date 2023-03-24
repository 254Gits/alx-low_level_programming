#include "main.h"

/**
 * print_most_numbers- Entry point.
 *
 *description :printing intergers leaving out 2 and 4
 *
 */
void print_most_numbers(void)
{
	int c = 0;

	while (c < 10)
	{
		if (c != 2 && c != 4)
		{
			_putchar ('0' + c);
		}
		c++;
	}
	_putchar ('\n');
}
