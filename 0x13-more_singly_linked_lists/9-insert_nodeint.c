#include "lists.h"

/**
 * insert_nodeint_at_index - fxn creates & inserts node at a required position
 * @head: the pointer to the list
 * @idx: the given position
 * @n: the data for the node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == 0)
		return (NULL);

	temp->n = n;
	temp->next = NULL;
	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
			return (temp);
	}

	temp->n = n;
	temp->next = NULL;
	while (idx - 1)
	{
		ptr = ptr->next;
		idx -= 1;
	}
		temp->next = ptr->next;
		ptr->next = temp;

	return (temp);
}
