#include "lists.h"

/**
 * free_listint - fxn frees listint_t node
 * @head: pointer to node
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		free(head);
		ptr = head->next;

		head = ptr;
	}
}
