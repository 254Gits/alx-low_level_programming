#include "main.h"

/**
 *is_prime_number - placeholder of n
 *
 *_check - holder
 *@n: interger
 *
 *
 *Return :something 
 *
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_check(n, n - 1));
}

int _check(int n, int y)
{
	if (y == 1)
	{
		return (1);
	}

	if (n % y == 0)
	{
		return (0);
	}

	return (_check(n, y - 1));
}

