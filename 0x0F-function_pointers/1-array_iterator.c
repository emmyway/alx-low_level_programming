#include "funtion_pointers.h"

/**
 * array_iterator - 
 * @size: size of array
 * @action: the pointer to print
 * @array: the array 
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int t;

	if (array == NULL || array NULL)
	{
		for (t = 0; t < size; t++)
			action(array[t]);
	}
