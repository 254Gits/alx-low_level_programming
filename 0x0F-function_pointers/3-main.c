#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *main - entry point
 *
 *@argv:argument pointer
 *@argc: character
 *
 *
 *
 *Return: result
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int z, k;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	z = atoi(argv[1]);
	op = argv[2];
	k = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '%' && k == 0) || (*op == '/' && k == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(z, k));

	return (0);
}
