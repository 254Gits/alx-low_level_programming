#include "main.h"

/**
 *_isupper - Entry point.
 *
 *@c: first integer
 *
 *
 *Return: 1 for upper and 0 for anything else
 *
 */
int _isupper(int c)
{
	if (c <= 'z' && c >= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
