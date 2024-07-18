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

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, low, high, prev;

	/* validate array */
        if (array == NULL || size <= 0)
                return (-1);

	/* get and assign jump, low, high, prev value */
	jump = (int)(sqrt(size));
	prev = jump;
	low = 0;
	high = size - 1;

	/* jump search */
	for (i = low; i < high; i += jump)
	{
		/* prints all values searched */
                printf("Value checked array[%d] = [%d]\n", i, array[i]);

		/* test and handle different sceneriors */
		if (array[i] == value)
		{
			return (i);
		}
		else if (array[i] <= value)
		{
			prev = low++;
			low = i;
		}
		else if (array[i] >= value)
		{
			/* loop to search and print output */
			for (k = prev; k < i; k++)
			{
				/* prints all values searched */
				printf("Value checked array[%d] = [%d]\n", i, array[i]);

				/* return index if value found */
				if (array[i] == value)
					return (i);
			}
			return (-1);
		}
	}
	return (-1);
}
