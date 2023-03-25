#include "main.h"
#include <stdio.h>

/**
 * print_number- Entry point.
 *
 * @o: printable integer
 *
 *description -printing intergers
 *
 *
 */

void print_number(int o)
{
	unsigned int f = o;

	if (o < 0)
	{
		o *= -1;
		f = o;
		_putchar ('-');
	}
	f /= 10;

	if (f != 0)
		print_number(f);
	_putchar ((unsigned int) o % 10 + '0');
}
