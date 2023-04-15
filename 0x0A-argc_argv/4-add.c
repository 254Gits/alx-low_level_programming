#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  *main - entry point
  * @argv: array pointer
  * @argc: argument count
  *
  * Return: 0 and 1
  */
int main(int argc, char *argv[])
{
	int i, sum = 0;


	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		while (*arg)
		{
			if (!isdigit(*arg))
			{
				printf("Error\n");
				return (1);
			}
			arg++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
