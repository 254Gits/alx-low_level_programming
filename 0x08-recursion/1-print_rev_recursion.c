#include "main.h"
#include <stdio.h>

/**
 * *_print_rev_recursion- entry point
 * @s:pointer to char
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar ('\n');
		return;
	}
	
	_putchar(*s);
	_print_rev_recursion(s -1);
}
