#include "hash_tables.h"

/**
 * hash_table_delete - fxn deletes hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr, *temp;
	unsigned long int index;

	/*validate input*/
	if (ht == NULL)
		return;

	/*get a index*/
	index = 0;

	while (index < ht->size)
	{
		/*get a pointer*/
		ptr = ht->array[index];

		while (ptr != NULL)
		{
			temp = ptr;
			free(temp->key);
			free(temp->value);
			free(temp);

			ptr = ptr->next;
		}
		ht->array[index] = NULL;
		index++;
	}
	free(ht->array);
	ht->array = NULL;

	free(ht);

}
