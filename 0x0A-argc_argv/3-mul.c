#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry function
 *@argc : argument count
 *@argv : argument vector
 *
 *Return: nothing and 1 when error
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error");
		return (1);
	}
	else
	{
		int mult = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", mult);
	}
	return (0);
}
