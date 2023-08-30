#include "lists.h"

/**
 * reverse_listint - fxn reverses a givent list
 * @head: the pointer to the list
 * Return: pointer to the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *temp2 = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = temp2;
		temp2 = *head;
		*head = next;
	}

	*head = temp2;

	return (*head);
}
