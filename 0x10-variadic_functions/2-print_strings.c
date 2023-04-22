#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 *print_strings - prints a name as is
 *@n: unsigned interger
 *@separator: character pointer
 *
 *Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;

	va_list last;

	va_start(last, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(last, char *);
		if (!string)
		{
			string = "(nil)";
		}
		if (!separator)
		{
			printf("%s", string);
		}
		else if `(separator && i == 0)
		{
			printf("%s", string);
		}
		else
		{
			printf("%s%s", separator, string);
		}
	}
		printf("\n");

		va_end(last);
}
