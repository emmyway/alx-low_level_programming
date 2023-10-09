#include "main.h"

/**
 * malloc_checked - fxn allocates memory using malloc
 * @b: the int size
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
