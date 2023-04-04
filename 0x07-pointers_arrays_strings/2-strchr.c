#include "main.h"


/**
 * *_strchr - finds the first occurrence of a character in a string
 * @s: pointer to the string to search
 * @c: search for c
 *
 * Return: pointer to the first occurrence of c in the string
 *         and NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c || (c == '\0' && *s == '\0'))
		{
			return (s);
		}
		s++;
	}
	return (0);
}
