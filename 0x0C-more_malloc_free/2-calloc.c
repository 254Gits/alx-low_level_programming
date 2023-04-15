#include <stdlib.h>
#include "main.h"


/**
 * *_memset - copies character b to  first s pointer
 * @s:pointer of memory area
 * @b: constant byte
 * @n : unsigned interger
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

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
	char *j;
	unsigned int full_size;

	if (nmemb == 0 && size == 0)
	{
		return (NULL);
	}

	full_size = nmemb * size;

	j = malloc(full_size);

	if (j == NULL)
	{
		return (NULL);
	}
	_memset(j, 0, full_size);
	return (j);
}
