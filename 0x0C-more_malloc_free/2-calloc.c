#include <stddef.h>
#include <stdlib.h>
/**
 *_calloc- implementation of strlen function
 *@nmemb: placeholder fo nmemb
 *@size : placeholder for size
 *
 *
 *Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *c;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	c = calloc(nmemb, size);

	if (c == NULL)
	{
		return (NULL);
	}

	return (c);
}
