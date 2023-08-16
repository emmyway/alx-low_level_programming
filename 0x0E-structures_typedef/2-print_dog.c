#include "dog.h"

/**
 * print_dog - prints element of struct dog
 * @d: pointer to struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);
	if (d->name == NULL)
		d->name = "(nill)";
	if (d->owner == NULL)
		d->owner = "(nill)";

	printf("Name: %s \nAge: %f \nOwner: %s\n", d->name, d->age, d->owner);

}
