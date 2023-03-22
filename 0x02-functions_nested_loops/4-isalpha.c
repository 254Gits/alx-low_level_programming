#include "main.h"

/**
 * _islower - Entry point.
 *
 *@c : variable
 * description : check for lowercase and uppercase
 *
 * Return: int
 *
 */

int _isalpha(int c)
{
	if (c > 65)
	{
		if (c < 90)
		{
			return (1);
		}
		if (c >= 97)
		{
			if (c <= 122)
			{
				return (1);
			}
			return (1);
		}
		return (1);
	}
	else
	{
		return (0);
	}
}
