#include "lists.h"
#include <stdio.h>
/**
 * free_list - fxn frees list_t list
 * @head: pointer to the list_t list to be free
 */

void free_list(list_t *head)
{
	list_t *box;

	while (head)
	{
		box = head->next;
		free(head->str);
		free(head);
		head = box;
	}
}
