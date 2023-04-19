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
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
