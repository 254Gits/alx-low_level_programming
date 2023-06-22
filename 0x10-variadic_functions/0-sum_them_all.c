#include <stdarg.h>
/**
 *sum_them_all - entry point
 *@n : other argunent
 *
 *
 *Return: sum and o
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list arguments;

	va_start(arguments, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		int num = va_arg(arguments, int);

		sum += num;
	}

	va_end(arguments);

	return (sum);
}
