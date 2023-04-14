#include <stdlib.h>
#include "main.h"

/**
  *malloc_checked - entry point
  *
  * @b: grid double pointer
  *
  *
  * Return: p and exit 98 if it fails
  */
void *malloc_checked(unsigned int b)
{
	unsigned int *c = malloc(b);

	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
