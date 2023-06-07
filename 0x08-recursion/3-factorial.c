#include "main.h"

/**
 *factorial(int n) - implementation of puts
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
	if (n == 1 || n == 0 )
	{
		return (1);
	}
	else 
	{
		return (n * (n - 1));
	}
}
