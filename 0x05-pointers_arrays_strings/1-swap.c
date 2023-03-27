#include "main.h"

/**
  * swap_int - swaps a and b
  * @a: pointer to a
  * @b:pointer to b
  *
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
