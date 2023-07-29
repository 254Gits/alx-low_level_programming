#include "main.h"

/**
 *get_endianness - checks if it's big endian or little
 *
 *Return: 1 when endian or 0
 */
int get_endianness(void)
{
	unsigned int test = 1;
	char *endian = (char *)&test;

	if (*endian)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
