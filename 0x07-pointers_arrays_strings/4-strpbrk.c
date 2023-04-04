#include "main.h"
#include <stddef.h>

/**
 * *_strspn - entry point
 * @s: pointer to the string
 * @accept:bytes store
 *
 * Return: leghth of prefix
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s)
	{
		for (p = accept; *p; p++)
		{
			if ( *p == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
