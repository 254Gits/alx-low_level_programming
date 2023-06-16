#include <stdio.h>
#include <stdlib.h>

/**
 *_strlen- implementation of strlen function
 *@i: pointer to character
 *
 *
 *
 *Return: nothing
 */

int _strlen(char *i)
{
	int length = 0;

	if (i == NULL)
	{
		return (0);
	}

	while (*i != '\0')
	{
		length++;
		i++;
	}
	return (length);
}

/**
 *string_nconcat- implementation of concatnation function
 *@s1: pointer to character one
 *@s2: pointer to character two
 *@n : new string
 *
 *
 *Return: NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, tlen, i, j;
	char *s;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}
	tlen = len1 + n;

	s = (char *)malloc((tlen + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		s[i + j] = s2[j];
	}
	s[i + j] = '\0';
	return (s);
}
