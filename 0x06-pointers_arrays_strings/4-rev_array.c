#include "main.h"

/**
 * reverse_array - function to concatenate to the maximum value of n
 * @n: number of intergers
 * @a: an array of intergers
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int z = a[i];

		a[i] = a[n - 1 - i];
		a[n - 1 - i] = z;
}

}
