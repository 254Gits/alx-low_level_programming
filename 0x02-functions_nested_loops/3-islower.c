#include "main.h"

/**
 * _islower - Entry point.
 *
 *@c : variable
 * description : check if it is lowercase
 *
 * Return: int
 *
 */

int _islower(int c)
{
	if (c <= 122)
	{
		return (1);
	}
	else if (c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
