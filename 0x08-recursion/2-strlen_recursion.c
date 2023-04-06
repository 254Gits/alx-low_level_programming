#include "main.h"
#include <stdio.h>

/**
 * *_print_rev_recursion- entry point
 * @s:pointer to char
 *
 * Return: nothing
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
	_strlen_recursion(s+1);
}
