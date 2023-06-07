#include "main.h"

/**
 *_strlen_recursion- implementation of puts
 *@s: pointer to character
 *
 *
 *
 *Return: nothing
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	{
	return (1 + _strlen_recursion(s + 1));
	}

}

