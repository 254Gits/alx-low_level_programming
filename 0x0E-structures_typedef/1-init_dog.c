#include "dog.h"
#include "main.h"
/**
 *init_dog - entry point
 *@d: pointer to struct
 *@age: float of age
 *@name: pointer to name
 *@owner: pointer to owner
 *
 * Description: initialization of struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).age = age;
		(*d).owner = owner;
		(*d).name = name;
	}
}
