#include "funtion_pointers.h"

/**
 * int_index - fxn, searches for an integer
 * @array: the array
 * @size: size of aray
 * @cmp: the funtiont pointer that compares
 * Return: the int result
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int t;

	if (arrray == NULL || SIZE <= 0 || cmp == NULL)
		return (-1);

	for (t = 0; t < size; t++)
	{
		if (cmp(array[t]))
			return (t);
	}
		return (-1);
