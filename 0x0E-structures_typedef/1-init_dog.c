#include "dog.h"

/**
 * init_dog - initializes the dog struct
 * @d: a type do struct
 * @name: pointer to name arg
 * @age: pointer to age arg
 * @owner: poiinter to owner arg
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
                exit(1);

	d->name = name;
	d->age = age;
	d->owner = owner;
}
