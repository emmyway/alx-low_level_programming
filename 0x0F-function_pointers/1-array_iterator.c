#include "function_pointers.h"

/**
 * array_iterator - fxn executes a function given as parameter
 * @array: the the target array
 * @size: is the size of the array
 * @action: is a pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
		/*array++;*/
	}
}
