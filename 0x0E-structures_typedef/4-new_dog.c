#include "dog.h"

/**
 * new_dog - fxn creates new dog struct
 * @name: name of new dog
 * @age: age of dog
 * @owner: name of owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof (dog_t));
	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
