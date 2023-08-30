#include "lists.h"

/**
 * free_listint - 
 * @head:
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	if (head == NULL)
		return;
	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
