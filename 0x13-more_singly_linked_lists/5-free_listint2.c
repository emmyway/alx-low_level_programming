#include "lists.h"

/**
 * free_listint2 - function frees listint list using pointer head address
 * @head: pointer to head address
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (*head == NULL)
		return;

	ptr = *head;

	while (*head)
	{
		free(*head);
		ptr = (*head)->next;
		*head = ptr;
	}
	*head = NULL;
}
