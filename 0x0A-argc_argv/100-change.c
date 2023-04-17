#include <stdio.h>
#include <stdlib.h>

/**
  *main - entry point
  * @argv: array pointer
  * @argc: argument count
  *
  * Return: 0 and 1
  */

int main(int argc, char *argv[])
{
	int cents, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (; cents > 0 ; cents++)
	{
		if (cents >= 25)
		{
			cents = cents - 25;
		}
		else if (cents >= 10)
		{
			cents = cents - 10;
		}
		else if (cents >= 5)
		{
			cents = cents - 5;
		}
		else if (cents >= 2)
		{
			cents = cents - 2;
		}
		else
		{
			cents = cents - 1;
		}
		change++;
	}
	printf("%d\n", change);
	return (0);
}
