#include "main.h"

/**
 * create_array - creates an array containing characters
 * @size: the size of the array
 * @c: the character to be used to fill the arrray
 * Return: pointer to the array created
 */

char *create_array(unsigned int size, char c)
{
	unsigned int m;
	char *xters;

	xters = malloc(sizeof(char) * size);

	if (size == 0 || xters == NULL)
		return (NULL);

	for (m = 0; m < size; m++)
		xters[m] = c;
	return (xters);
}
