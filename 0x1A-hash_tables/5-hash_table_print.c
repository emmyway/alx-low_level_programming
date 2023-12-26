#include "hash_tables.h"

/**
 * hash_table_print - fxn prints table element
 * @ht: the struct table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;
	unsigned long int index;

	/*validate input*/
	if (ht == NULL)
	{
		printf("{}");
		return;
	}

	/*initialize index*/
	index = 0;

	/*get a pointer*/

	printf("{");
	/*iterate through list and print pair elements*/
	while (index < ht->size)
	{
		ptr = ht->array[index];
		while (ptr != NULL)
		{
			printf("\'%s\':\'%s\'", ptr->key, ptr->value);
			if (!(index == ht->size - 1 && ptr->next == NULL))
				printf(", ");
			ptr = ptr->next;
		}

		index++;
	}
	printf("}\n");
}
