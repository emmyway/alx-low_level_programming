#include "lists.h"

/**
 * reverse_listint - fxn reverses a givent list
 * @head: the pointer to the list
 * Return: pointer to the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp1 = NULL;
	listint_t *temp2 = NULL;

	while (*head != NULL)
	{
		temp1 = (*head)->temp1;
		(*head)->temp1 = temp2;
		temp1 = *head;
		*head = temp2;
	}

	*head = temp1;

	return (*head);
}
