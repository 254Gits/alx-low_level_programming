#include "main.h"

/**
 * is_prime_number - implementation of n
 *@n: pointer to character
 *
 *
 *
 *Return: newline once recursion is complete
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_check(n, n - 1));
}
/**
 *_check - implementation of divisor checker
 *@y: interger two
 *@n: interger one
 *
 *
 *Return: factorial
 */

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

