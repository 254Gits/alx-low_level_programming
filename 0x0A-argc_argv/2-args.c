#include <stdio.h>
#include "main.h"

/**
 *main - entry function
 *@argc : argument count
 *@argv : argument vector
 *
 *Return: nothing
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
