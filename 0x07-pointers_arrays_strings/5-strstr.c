#include "main.h"


/**
 * *_strspn - entry point
 * @s: pointer to the string
 * @accept:bytes store
 *
 * Return: leghth of prefix
 */

char *_strstr(char *haystack, char *needle)
{
	char p;

	while (*haystack)
	{
		for (p = needle; *p; *p++)
		{
			if (*haystack == *needle)
			{
				return (haystack);
			}
			haystack ++
		}
		return (NULL);
}
