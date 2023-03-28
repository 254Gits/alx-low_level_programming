#include "main.h"

/**
 * puts2 - function to print out even intergers
 * @str: string to reverse
 * Return: 0;
 */

void puts2(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		if (j % 2 == 0)
			_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
