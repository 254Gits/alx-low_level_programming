#include "main.h"
#include <stddef.h>

/**
 * *_strspn - entry point
 * @s: pointer to the string
 * @accept:bytes store
 *
 * Return: leghth of prefix
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
