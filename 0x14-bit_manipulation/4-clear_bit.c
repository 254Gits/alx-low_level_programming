#include "main.h"
/**
 *clear_bit- entry point
 *@n: long interger
 *@index: starting point
 *
 *
 *Return: 1 on success and -1 when it fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
	{
		return (-1);
	}

	*n &= ~(1UL << index);
	return (1);
}
