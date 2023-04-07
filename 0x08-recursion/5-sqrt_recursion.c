#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion- entry point
 * @x:pointer to int
 * @y: int pointer
 *
 * Return: nothing
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);
	if (n == 1)
		return (1);

	return (_sqrt_recursion(n, 1, n)); 
}
