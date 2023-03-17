# include <stdlib.h>
# include <time.h>
# include <stdio.h>
/* more headers go there */

/**
 * main - Entry point
 * Return: Always 0(Succes)
 */
int main(void)
{
	int n;
	int last_digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d greater than 5\n", n, last_digit);
	}
	if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6\n", n, last_digit);
	}
	return (0);
}
