#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 *print_numbers - prints a name as is
 *@n: unsigned interger
 *@separator: character pointer
 *
 *Return: summation
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list print;
	
	va_start(print, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
		{
			printf("%d\n", va_arg(print, int));
		}
		else if(i == 0 && separator)
		{
		printf("%d\n", va_arg(print, int));
		}
		else
		{
		printf("%s%d\n", separator, va_arg(print, int));
		}
	}
	
	va_end(print);
}
