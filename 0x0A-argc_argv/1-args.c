#include <stdio.h>
#include "main.h"

/**
 *main - entry function
 *@argc : argument count
 *@argv : argument vector
 *
 *Return: nothing
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
