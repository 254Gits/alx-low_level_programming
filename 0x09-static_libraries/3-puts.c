#include "main.h"

/**
 *_puts- Swaps the values of two integers
 *
 *@str:points to the str string
 *
 *
 *Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar ('\n');
}
