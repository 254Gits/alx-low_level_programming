#include "main.h"

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;

	if (index > 0)
	{
		n = n << index;
	}

	m = 1 << index;
	return ((n & m) != 0);
}
