#include <stdio.h>

/**
 * print_to_98 - Entry point.
 *
 *@n: the number to begin counting at
 * description : print all natural numbers
 *
 * Return: Always 0
 *
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		int i = n;

		while (i < 98)
		{
			printf("%d, ", i);
			i++;
		}
	}
	else
	{
		int i = n;

		while (i > 98)
		{
			printf("%d, ", i);
			i--;
		}
	}
	printf("98\n");
}
