#include <stdlib.h>
#include "lists.h"

/**
 * free_list - fxn frees a linked list
 * @head: pointer to list_t list to be freed
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		free(head->str);
		head = temp;
	}
}
