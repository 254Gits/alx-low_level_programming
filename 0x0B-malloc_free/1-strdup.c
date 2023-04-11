#include <stdio.h>
#include <stdlib.h>

/**
  *_strdup - entry point
  *
  * @str: charcter pointer
  *
  * Return: NULL
  */
char *_strdup(char *str)
{
	unsigned int l = 0;
	unsigned int i;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[l])
	{
		l++;
	}
	s = malloc(l + 1);

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
