#include "dog.h"

/**
 * init_dog - fxn initializes dog struct
 * @d: pointer to struct dog
 * @name: name of new dog
 * @age: age of dog
 * @owner: name of owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
