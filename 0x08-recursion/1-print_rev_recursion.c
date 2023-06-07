#include "main.h"

/**
 *_print_rev_recursion - implementation of puts
 *@s: pointer to character
 *
 *
 *
 *Return: newline once recursion is complete
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

	else
	{
		_putchar ('\n');
	}
}
