#include "main.h"

/**
 * array_range - fxn creates array of integers range
 * @min: minimum range
 * @max: maximum range
 * Return: pointer to the allocated memory
 */

int *array_range(int min, int max)
{
	int *ptr;
	int range, i;

	if (min > max)
		return (NULL);

	range = (max - min) + 1;

	ptr = malloc(range * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
		ptr[i] = min++;

	return (ptr);
}
