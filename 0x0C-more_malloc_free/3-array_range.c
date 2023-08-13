#include "main.h"

/**
 * array_range - creats an array of integers
 * @min: minimum range of number
 * @max: maximum range of integer
 * Return: pointer to string
 */

int *array_range(int min, int max)
{
	if (max > min)
	{
		int m, range, t;
		int *arr;

		t = 0;
		range = (max - min) + 1;

		arr = malloc(range * sizeof(int));
		if (arr == NULL)
			return (NULL);

		for (m = min; m <= max; m++)
		{
			arr[t] = m;
			t++;
		}
		return (arr);
	}
	else
		return (NULL);
}
