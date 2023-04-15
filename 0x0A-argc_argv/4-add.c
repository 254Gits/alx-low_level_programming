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
	long int s = 0;
	int i;

	if (argc <= 1)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= '0' && *argv[i] <= '9')
		{
			s += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%ld\n", s);
	return (0);
}
