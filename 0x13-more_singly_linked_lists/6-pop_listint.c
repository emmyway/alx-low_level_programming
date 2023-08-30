#include "lists.h"

/**
 * pop_listint - fxn deleted head node
 * @head: pointer to begining of node
 * Return: the data inside the deleted node or 0 on if empty
 */

int pop_listint(listint_t **head)
{
	int tempstore;

	if (!head || !*head)
		return (0);

	else if (**head->next == NULL)
	{
		tempstore = head->n;
		free(head);
		head->next = NULL;

		return (tempstore);
	}

	listsint_t *ptr;
	ptr = (*head)->next;
	tempstore = (*head)->n;
	free(*head);
	*head = ptr;

	return (tempstore);
}
