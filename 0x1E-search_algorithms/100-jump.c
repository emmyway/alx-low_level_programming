#include "search_algos.h"
#include <math.h>
/**
 * jump_search - fxn searches for an integer in an array
 * using Linear Search
 * @array: the array to be looked up
 * @size: the size of array thereof
 * @value: the value to search
 * Return: first index of the search result
 */

/* remember to compile with -lm */

size_t reckoner(int *array, size_t prev, size_t i, int value);

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, low, high, prev;

	/* validate array */
        if (array == NULL || size <= 0)
                return (-1);

	/* get and assign jump, low, high, prev value */
	jump = (int)(sqrt(size));
	low = 0;
	high = size - 1;
	prev = low;

	/* jump search */
	for (i = low; i < high; i += jump)
	{
		/* prints all values searched */
                printf("Value checked array[%d] = [%d]\n", i, array[i]);

		/* test and handle different sceneriors */
		if (array[i] == value)
		{
			printf("Value found between indexes [%d] and [%d]\n", prev, i);
			reckoner(array, prev, i, value);
		}
		else if (array[i] <= value)
		{
			low = i;
		}
		else if (array[i] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", prev, i);
			/* loop to search and print output */
			reckoner(array, prev, i, value);
		}
		prev = i;
	}
	return (-1);
}

/**
 * reckoner - print every array checked
 * @prev - initial indice
 * @i - ending indice
 * @value: the value to search
 */
size_t reckoner(int *array, size_t start, size_t end, int value)
{
	/* loop and print */
	while (start < end)
	{
		/* prints all values searched */
		printf("Value checked array[%d] = [%d]\n", start, array[start]);

		/* return index if value found */
		if (array[start] == value)
		{
			 return (start);
		}
		start++;
	}
	return (-1);
}
