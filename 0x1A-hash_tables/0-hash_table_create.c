#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: the given size
 * Return: pointer to new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hash_table;

	/* validate input*/
	if (size < 1)
		return (NULL);

	/*declare and allocate table*/
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	/*prepare table propaties*/
	hash_table->size = size;

	/*declare and allocate array of items*/
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	/*initialize individual array slots*/
	for(i = 0; i < size; i++)
	{
		hash_table->array[i] = NULL;
	}

	return (hash_table);
}
