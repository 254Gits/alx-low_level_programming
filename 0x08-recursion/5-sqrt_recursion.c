#include "main.h"
#include <stdio.h>

/**
  * _sqrt - entry point
  * @n: int to calculate square
  * @i: iterate through no
  *
  * Return: the natural square root or -1 if no natural square root
  */
int _sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, i + 1));
	}
}

/**
  * _sqrt_recursion - Returns the natural square root
  * @n: intergers to calculate the natural square root
  *
  * Return: the natural square root or -1 if no natural square root
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, 0));
	}
}
