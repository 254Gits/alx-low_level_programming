#include "main.h"


/**
 * *_strspn - entry point
 * @s: pointer to the string
 * @accept:bytes store
 *
 * Return: leghth of prefix
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p;

	while (*s)
	{
		p = accept;

		while (*p && *p != *s)
		{
			p++;
			if (*p == '\0')
				break;
				count++;
				s++;
		}
	}
	return (count);
}
