#include "main.h"

/**
 * malloc_checked - creates a function that allocates memory
 * and exit  with 98 or return pointer to memory created
 * @b: the size of memory
 * Return: pointer to created memory
 */

void *malloc_checked(unsigned int b)
{
	void *pt = malloc(b);

	if (pt == NULL)
		exit(98);

	return (pt);
}
