#include "main.h"
#include <stddef.h>

/**
  * *_strchr - checks for occurence of c character
  *
  * @s: string pointer
  * @c : character c
  *
  * Return: s or NULL
  */

char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		if (*s == c)
		{
			return (s);
		}
		else 
		{
			return ('\0');
		}
		s++;
	}
	return (0);
}
