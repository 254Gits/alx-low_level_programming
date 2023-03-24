#include "main.h"

/**
 * _isdigit - Entry point.
 *
 *@c: first integer
 *
 *
 * Return: 1 for number and 0 for anything else
 *
 */

int _isdigit(int c)
{
	for(c = 0; c < 9; c++)
	{
		if ( c >= 0 && c <= 9)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
