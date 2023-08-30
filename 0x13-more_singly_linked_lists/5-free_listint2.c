#include "lists.h"

/**
 * free_listint2 - fxn frees a given lists
 * @head: a pointer to pointer to the listint_t
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while(*head)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
	*head = NULL;
}
