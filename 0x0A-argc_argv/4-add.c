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
	int i, j, add;

	i = atoi(argv[1]);
	j = atoi(argv[2]);		

	if (argc == 0)
	{
		printf("0\n");
	}
	if (argv[i] > 30 && argv[i] <= 39)
	{
		printf("Error\n");
		return (1);
	}

	add = i + j;
	printf("%d\n", add);
	return (0);
}

