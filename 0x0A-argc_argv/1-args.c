#include <stdio.h>

/**
  *main - entry point
  * @argv: array pointer
  * @argc: argument count
  *
  * Return: 0
  */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
