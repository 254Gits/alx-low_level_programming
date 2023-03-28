#include "main.h"
/**
 * puts_half -function to print half string
 * @str: string to be printed
 * Return:0
 */
void puts_half(char *str)
{
	int i, j, middle;
	int length = 0;

	for (i = 0; str[i] != '\0'; i++)
		length++;

	if (length % 2 == 0)
	{
		middle = length / 2;
		for (j = middle; str[j] != '\0'; j++)
			_putchar(str[j]);
	}
	else
	{
		middle = (length + 1) / 2;
		for (j = middle; str[j] != '\0'; j++)
			_putchar(str[j]);
	}
	_putchar('\n');

}
