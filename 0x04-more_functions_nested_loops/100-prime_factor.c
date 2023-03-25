#include <stdio.h>
#include <math.h>

/**
 * main - Prints fizz and buzz
 *
 * Return: Always 0
 */

int main(void)
{
	long x, max;
	long numr = 612852475143;
	double square = sqrt(numr);

	for (x = 1; x <= square; x++)
	{
		if (numr % x == 0)
		{
			max = numr / x;
		}
	}
	printf("%ld\n", max);
	return (0);
}
