#include "main.h"

/**
 * _calloc - fxn allocates memory with malloc and set to zrero
 * @nmemb: numver of elements
 * @size: size of memory
 * Return: pointer to new string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;
	size_t i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size * sizeof(unsigned int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}
