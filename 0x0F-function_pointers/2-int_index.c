#include "function_pointers.h"

/**
 * int_index - fxn finds integer in an array
 * @array: the source array
 * @size: the size of the array
 * @cmp: the fxn pointer to compare
 * Return: an int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]) != 0)
			return (j);
	}
	return (-1);
}
