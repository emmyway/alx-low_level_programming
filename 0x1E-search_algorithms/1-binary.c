#include "search_algos.h"
/**
 * binary_search - fxn searches for an integer in an array
 * using Binary Search
 * @array: the array to be looked up
 * @size: the size of array thereof
 * @value: the value to search
 * Return: index value of the search result
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low, high, i, mid;

	low = 0;
	high = size - 1;

	/* validate array */
	if (array == NULL || size <= 0)
		return (-1);
	/* loop to search and print output */
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i != high)
				printf(", ");
		}
		printf("\n");

		/* search within half of array */
		mid = (low + high) / 2;
		if (value == array[mid])
			return (i);
		/* get new location for low and high */
		else if (value > array[mid])
		{
			low = mid + 1;
		}
		else if (value < array[mid])
		{
			high = mid - 1;
		}
	}
	return (-1);
}
