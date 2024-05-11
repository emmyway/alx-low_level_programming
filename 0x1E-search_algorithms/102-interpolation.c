#include "search_algos.h"
/**
 * interpolation_search - fxn searches for an integer in an array
 * using interpolation search
 * @array: the array to be looked up
 * @size: the size of array thereof
 * @value: the value to search
 * Return: index value of the search result
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	low = 0;
	high = size - 1;
	/* validate array */
	if (array == NULL || size <= 0)
		return (-1);

	/* find interpol position */
	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			low = pos - 1;
		else if (array[pos] < value)
			high = pos + 1;
	}
	pos = low + (((double)(high - low) /
				(array[high] - array[low])) * (value - array[low]));
	printf("Value checked array[%d] is out of range\n", pos);
	return (-1);
}
