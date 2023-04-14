#include <stdio.h>
#include <stdlib.h>

/**
  *malloc_checked - entry point
  *
  * @int: grid double pointer
  * 
  *
  * Return: p
  */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc (b*sizeof(int));
	if (p == NULL)
	{
		exit (98);
	}
	return(p);

}
