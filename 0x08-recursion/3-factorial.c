#include "main.h"
#include <stdio.h>

/**
 * factorial- entry point
 * @n:interger n
 * Description: factorial for n
 * Return: factorial
 */

int factorial(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
