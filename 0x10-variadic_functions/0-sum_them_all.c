#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - prints a name as is
 *@n: unsigned interger
 *
 *Return: summation
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args1;
	int x = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}
	va_start(args1, n);

	for (i = 0; i < n; i++)
		x += va_arg(args1, int);

	va_end(args1);
	return (x);
}
