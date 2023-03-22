#include "main.h"

/**
 * print_sign - Entry point.
 *
 *@n: variable
 * description : check if n is greater than zero
 *
 * Return: 0
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
}
