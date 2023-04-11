#include <stdio.h>
#include <stdlib.h>

/**
  *main - entry point
  * @argv: array pointer
  * @argc: argument count
  *
  * Return: 0
  */

char *create_array(unsigned int size, char c)
{
	char *s;
	
	s = malloc((c * sizeof(char)));
	if (size == 0)
	{
		return (NULL);
	}
	else 
	{
		return (s);
	}
	return (0);

}
