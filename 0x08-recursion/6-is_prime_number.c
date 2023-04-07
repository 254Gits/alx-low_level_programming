#include "main.h"

/**
 * is_prime_ - function for is_prime_number
 *
 * @n: the number to test
 * @i: the current divisor being tested
 *
 * Return: 1 if n is prime, 0 if not
 */

int is_prime_(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_(n, i - 1));
}

/**
 * is_prime_number - checks if an digit is prime
 *
 * @n: the test digit
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_(n, n - 1));
}
