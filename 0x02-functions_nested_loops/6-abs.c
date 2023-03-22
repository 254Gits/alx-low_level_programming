#include "main.h"

/**
 * _abs - Entry point.
 *
 *@c : variable
 * Return: 0
 *
 */

int _abs(int c)
{
	if (c == 0)
	{
		if (c < 0)
		{
			return (c);
		}
		return (c);
	}
	else
	{
		return (c * -1);
	}
}
