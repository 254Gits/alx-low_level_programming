#include <stdlib.h>
#include "main.h"

/**
  *_calloc - entry point
  *
  * @nmemb: grid unsigned interger
  * @size : size interger
  *
  *
  * Return: j pointer and null when it fails
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *j;

	j = (unsigned int *)calloc(nmemb, size);

	if (j == NULL)
	{
		return (NULL);
	}
	if (nmemb == 0 && size == 0)
	{
		return (NULL);
	}
	return (j);
}
