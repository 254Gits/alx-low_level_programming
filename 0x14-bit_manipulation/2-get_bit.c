#include "main.h"
/**
 * get_bit- entry point
 * @n: checks bit
 * @index: where to check bit
 * Return:  and 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask, note;

	if (index > (sizeof(unsigned long int) * 8 - 1))

		return (-1);

	mask = 1 << index;
	note = n & mask;
	if (note == mask)
	{
		return (1);
	}
	return (0);
}
