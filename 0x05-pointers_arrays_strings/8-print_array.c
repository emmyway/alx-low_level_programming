#include "main.h"
#include <stdio.h>

/**
 * print_array - prints number of element of an array
 * @n: is the number of elements to be displayed
 * @a: is the array itself
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");

	/**
	 * int a[] = {3,6,7,8,2};
	 * printf("%ld\n", sizeof(a));
	 * printf("%ld\n", sizeof(a[0]));
	 * return (0);
	 */
}
