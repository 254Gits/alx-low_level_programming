#include "main.h"

/**
 *_pow_recursion - implementation of puts
 *@x: interger
 *@y:second integer
 *
 *
 *
 *Return: newline once recursion is complete
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
