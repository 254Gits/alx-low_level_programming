#include "main.h"

/**
 * _puts_recursion - implementation of puts
 *@s: pointer to character
 *
 *
 *
 *Return: newline once recursion is complete
 */

void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar ('\n');
	}
}
