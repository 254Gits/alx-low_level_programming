#include "main.h"
#include <stddef.h>

/**
 * *_strstr - entry point
 * @haystack: storage of string
 * @needle:substring function
 *
 * Return: haystack
 */

char *_strstr(char *haystack, char *needle)
{
	char *p = haystack;

	while (*p)
	{
		char *h = p;
		char *s = needle;

	while (*h == *s && *s)
	{
		h++;
		s++;
	}

	if (!*s)
	{
		return (p);
	}
	p++;
	}
	return (NULL);
}
