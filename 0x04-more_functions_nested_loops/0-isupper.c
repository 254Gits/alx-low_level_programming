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
	if (c <= 'Z')
	{
		if (c >= 'A')
		{
			return (1);
		}
		return (1);
	}
	else
	{
		return (0);
	}
}
