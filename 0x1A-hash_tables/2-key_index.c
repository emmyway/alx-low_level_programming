#include "hash_tables.h"

/**
 * key_index - fxn returns index number from a hash key
 * @key: the character string drive the key value
 * @size: the size of the array
 * Return: rhe index of tje key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
