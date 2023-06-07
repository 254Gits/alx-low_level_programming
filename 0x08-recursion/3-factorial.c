#include "main.h"

/**
 *factorial - implementation of factorial
 *@n: pointer to character
 *
 *
 *
 *Return: newline once recursion is complete
 */

int factorial(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
