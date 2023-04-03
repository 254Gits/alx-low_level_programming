#include "main.h"

/**
  * *_strchr - checks for occurence of c character
  *
  * @s: string a
  * @c : character c
  *
  * Return: null and s
  */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}
