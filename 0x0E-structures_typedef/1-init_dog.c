#include "dog.h"
/**
 *init_dog - entry point
 *
 *
 *@struct dog*g:struct
 *@d :typedef
 *@name: First char member pointer
 *@age: Second float member
 *@owner: Third member char pointer
 *
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
