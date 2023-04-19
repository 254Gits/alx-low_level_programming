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
	if (d != NULL)
	{

	if (d->name == NULL)
	{
		printf("(nill)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	}
	else
	{
		return;
	}

}
