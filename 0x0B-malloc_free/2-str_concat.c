#include <stdio.h>
#include <stdlib.h>

/**
  *create_array - entry point
  * @size: int pointer
  * @c: charcter pointer
  *
  * Return: NULL
  */
char *str_concat(char *s1, char *s2)
{
	unsigned int a;
	unsigned int z = 0;
	char *s;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	while (s1[z])
	{
		z++;
	}

	s = malloc(z +1);

	for (a = 0; a < z; a++)
	{
		s1[z + a] = s2[a];
	}
	return (NULL);
}
