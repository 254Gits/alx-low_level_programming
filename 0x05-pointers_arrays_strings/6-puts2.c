#include "main.h"

/**
 * rev_string - function to reverse
 * @s: string to reverse
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
