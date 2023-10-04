#include "main.h"

/**
 * create_array - fxn creates array of unknown size and fill with xter
 * @size: the size of array
 * @c: the character to fill array
 * Return: pointer to array on success or NULL if failed
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *A;

	if (size == 0)
		return (NULL);

	A = (char *)malloc(size * sizeof(char));

	if (A == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		A[i] = c;

	return (A);
}
