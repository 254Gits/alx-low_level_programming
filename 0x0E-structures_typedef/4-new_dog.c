#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *new_dog - entry point
 *
 *
 *@name:character element
 *@age:float element
 *@owner: owner character element
 *Return: new copied string
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);

	newdog->name = strdup(name);
	newdog->owner = strdup(owner);
	newdog->age = age;

	return (newdog);
}
