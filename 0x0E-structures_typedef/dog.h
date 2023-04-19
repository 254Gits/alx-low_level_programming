#ifndef DOG
# define DOG
/**
 *struct dog - entry point
 *@name: First char member pointer
 *@age: Second float member
 *@owner: Third member char pointer
 *
 *Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 *struct dog_t - entry point
 *@name: First char member pointer
 *@age: Second float member
 *@owner: Third member char pointer
 *
 *      Description: Longer description
 */

struct dog_t
{
	char *name;
	float age;
	char *owner;
};

/*
 * dog-Typedef
 * dog_t - Typedef for unsigned int
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
