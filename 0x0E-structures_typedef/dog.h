#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>
/**
 *struct dog - user defined data type
 *@name: pointer to name
 *@owner: pointer to owner
 *@age : age place holder
 *
 *Description: Longer description
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
