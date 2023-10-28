#include "main.h"

/**
 * get_bit - fxn return value of a bit at a given index
 * @n: parameter to be modified
 * @index: the index
 * Return: 1 if success, -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1UL << index;
	return ((n & mask) != 0);
}
