#include "main.h"

/**
 * set_bit - fxn set value of a bit to 1 at a given index
 * @n: parameter to be modified
 * @index: the index
 * Return: 1 if success, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1UL << index;
	*n = *n | mask;
	return (1);
}
