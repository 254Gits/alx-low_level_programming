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
	unsigned int l;
	unsigned int i;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	for (l = 0; str[l] != '\0'; l++);
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
