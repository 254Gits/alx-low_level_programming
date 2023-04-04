#include "main.h"


/**
 * *_strspn - entry point
 * @s: pointer to the string
 * @accept:bytes store
 *
 * Return: leghth of prefix
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int count= 0;

	do { 
		if (*s == accept)
			{
				return (s);
			}
		}
	while (*s)
	{
		char *p = accept;

		if (*s == *p)
		{
			count++;
			break;
		}
		p++;
	}
	if (!*p && *p != '\0')
		break;
	s++;
	return (count);
	}while (s++);
	return (0);
}
