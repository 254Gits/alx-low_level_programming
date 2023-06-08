/**
 *sqrt2 - function helper
 *@z: interger
 *@number: isecond integer
 *
 *
 *
 *Return: recursive calls
 */
int sqrt2(int number, int z)
{
	if (number <= 0 || z * z > number)
	{
		return (-1);
	}

	if (z * z == number)
	{
		return (z);
	}
	else
	{
		return (sqrt2(number, z + 1));
	}
}

/**
 *_sqrt_recursion - implementation of sqrt
 *@n: pointer to character
 *
 *
 *
 *Return: recurssive function
 */

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 0));
}
