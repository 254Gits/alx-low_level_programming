#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_dog - entry point
 *
 *
 *@struct dog*g:struct
 *@d :typedef
 *
 *
 */
void free_dog(dog_t *d)
{
	free (d->name);
	free (d->owner);
}
