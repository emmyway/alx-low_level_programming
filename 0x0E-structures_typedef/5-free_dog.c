#include "dog.h"

/**
 * free_dog - a fxn that frees dog struct allocate memory
 * @d: this is the struct dog to free
 *
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
