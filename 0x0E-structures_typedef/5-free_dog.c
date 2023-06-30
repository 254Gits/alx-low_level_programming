#include "dog.h"
#include <stdio.h>
/**
 *free_dog - frees all dogs.
 *@d: struct  of dog.
 *
 *
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).name);
		free((*d).name);
		free(d);
	}
}
