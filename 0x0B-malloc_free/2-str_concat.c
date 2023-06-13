#include <stdlib.h>
#include "main.h"
/**
 *_strlen_- implementation of strlen function
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
	else
	{
		return (1 + _strlen_(s + 1));
	}
}

/**
 *str_concat- implementation of concate
 *@s1: pointer to character 1
 *@s2: pointer to character 2
 *
 *
 *Return:NULL
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, totalLen, i, j;
	char *s;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	len1 = _strlen_(s1);
	len2 = _strlen_(s2);
	totalLen = len1 + len2;

	s = malloc((totalLen + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		s[i + j] = s2[j];
	}

	s[i + j] = '\0';

	return (s);
}
