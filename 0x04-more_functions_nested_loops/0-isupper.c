#include "main.h"

/**
 * _isupper - Entry point.
 *
 *@c: first integer
 *
 *
 * Return: 0
 *
 */

int _isupper(int c)
{
	if (c == 65)
	{
		return (1);
	}
	if (c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
