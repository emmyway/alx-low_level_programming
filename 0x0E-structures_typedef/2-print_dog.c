#include "dog.h"

/**
 * print_dog - fxn prints elements of dog struct
 * @d: pointer to dog struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";

	else if (!(d->age))
	{
		printf("Age:%s", "(nil)");
		return;
	}

	else if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name:%s\n", d->name);
	printf("Age:%f\n", d->age);
	printf("Owner:%s\n", d->owner);

}
