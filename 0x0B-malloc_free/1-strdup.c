#include <stdio.h>
#include <stdlib.h>

/**
  *create_array - entry point
  * @size: int pointer
  * @c: charcter pointer
  *
  * Return: NULL
  */
char *_strdup(char *str)
{
	char *s;

	s = (char*) malloc (sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	return (s);
}
