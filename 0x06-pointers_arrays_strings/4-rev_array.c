#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: the array
 * @n: the element of the array
 */

void reverse_array(int *a, int n)
{
	int i, temp, half;

		half = n / 2;
		for (i = 0; i < half; i++)
		{
			temp = a[i];
			a[i] = a[n - 1 - i];
			a[n - 1 - i] = temp;
		}
}
