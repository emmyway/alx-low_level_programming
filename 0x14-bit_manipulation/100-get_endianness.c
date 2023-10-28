#include "main.h"

/**
 * get_endianness - fxn chexck of endianness
 * Return: 0 if big endian, 1mif little endian
 */
int get_endianness(void)
{
	int i;
	char *j;

	i = 1;
	j = (char *) &i;

	return (*j);
}
