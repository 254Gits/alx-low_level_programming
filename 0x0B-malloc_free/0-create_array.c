#include <stdio.h>
#include <stdlib.h>

/**
  *create_array - entry point
  * @size: int pointer
  * @c: charcter pointer
  *
  * Return: NULL
  */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc((size * sizeof(char)));
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
