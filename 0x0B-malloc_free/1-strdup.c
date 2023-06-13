#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *_strlen_- implementation of puts
 *@s: pointer to character
 *
 *
 *
 *Return: nothing
 */

int _strlen_(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_(s + 1));
}

/**
 *_strdup- makeshift strdup
 * @str: pointer to character
 *
 *
 *
 *Return: nothing
 *
 */

char *_strdup(char *str)
{
	char *s;
	int i, length;

	if (str == NULL)
	{
		return (NULL);
	}

	length = _strlen_(str);
	s = malloc((length + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}
