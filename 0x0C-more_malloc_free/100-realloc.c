#include "main.h"

/**
 * _realloc - fxn reallocates memory
 * @ptr: pointer to old memory
 * @old_size: the old size
 * @new_size: the new size
 * Return: pointer new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	int i;

	if (ptr == NULL)
		return (malloc(new_size * unsigned int));
