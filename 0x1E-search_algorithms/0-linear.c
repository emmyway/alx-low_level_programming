#include "search_algos.h"
/**
 * linear_search - fxn searches for an integer in an array
 * using Linear Search
 * @array: the array to be looked up
 * @size: the size of array thereof
 * @value: the value to search
 * Return: index value of the search result
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* validate array */
	if (array == NULL || size <= 0)
		return (-1);
	/* loop to search and print output */
	for (i = 0; i < size; i++)
	{
		/* prints all values searched */
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		/* return index if value found */
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
