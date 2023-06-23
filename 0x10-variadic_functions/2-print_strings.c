#include <stdarg.h>
#include <stdio.h>
/**
 *print_strings - entry point
 *@n: max number to be printed
 *@separator:pointer to separator
 *
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(arguments, char*);

		const char *sep = (i < n - 1 && separator != NULL) ? separator : "";

		printf("%s%s", (str != NULL) ? str : "(nil)", sep);
	}
	printf("\n");

	va_end(arguments);
}
