#include "hash_tables.h"

/**
 * hash_table_get - fxn get value from list
 * @ht: the list table
 * @key: the key
 * Return: pointer to string value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *ptr;

	/*validate input*/
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/*get index value*/
	index = hash_djb2((const unsigned char *)(key)) % ht->size;

	/*get pointer*/
	ptr = ht->array[index];

	/*transverse list to get value*/
	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
			return (ptr->value);
		ptr = ptr->next;
	}

	return (NULL);
}
