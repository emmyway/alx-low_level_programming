#include "hash_tables.h"

/**
 * hash_table_set - fxn adds element to hash table
 * @ht: the tables structure
 * @key: the character to generate key from
 * @value: the value to be added to table
 * Return: 1 on success or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *ptr, *new_elem;

	/*validate input*/
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	/*derclare allocate and initialize element*/
	new_elem = malloc(sizeof(hash_node_t));
	if (new_elem == NULL)
		return (0);

	new_elem->next = NULL;
	new_elem->key = strdup(key);
	new_elem->value = strdup(value);
	if (new_elem->value == NULL || new_elem->key == NULL)
	{
		free(new_elem->value);
		free(new_elem->key);
		free(new_elem);
		return (0);
	}
	/*generate index with hash key using djb2 algorithm*/
	index = hash_djb2((const unsigned char *)(key)) % ht->size;
	/*create pointer and transverse list*/
	ptr = ht->array[index];
	/*if index list is empty add element at index*/
	if (ptr == NULL)
	{
		ht->array[index] = new_elem;
		return (1);
	}
	/**
	 * if index list is not empty i.e there is collision;
	 * add element to beginning of list
	 */
	new_elem->next = ptr;
	ht->array[index] = new_elem;
	return (1);
}
