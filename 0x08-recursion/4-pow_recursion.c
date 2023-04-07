#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion- entry point
 * @x:pointer to int
 * @y: int pointer
 *
 * Return: nothing
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y <= 1)
	{
		return (1);
	}
	if (x < y)
	{
		_putchar (x*(y));
		_pow_recursion ( x + 1);
	}
}
