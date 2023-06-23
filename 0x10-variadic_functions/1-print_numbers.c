#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - entry point
 *@n: max number to be printed
 *@separator:pointer to separator
 *
 *
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;

	va_start(arguments, n);

	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			int num = va_arg(arguments, int);

			printf("%d\n", num);
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			int num = va_arg(arguments, int);

			printf("%d", num);
			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
		printf("\n");
	}
	va_end(arguments);
}
