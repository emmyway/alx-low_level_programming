#include "lists.h"

/**
 * add_dnodeint - fxn add node at beginning of list
 * @head: the pointer to node head
 * @n: the node int data
 * Return: address of new node on success or NULL if fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	/*check if list is valid*/
	if (head == NULL)
	{
		dprintf(2, "list is empty");
		return (NULL);
	}

	/*create new node*/
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)/*validate malloc*/
	{
		dprintf(2, "malloc failed");
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	/*insert node*/
	if (*head != NULL)
	{
		new->next = *head;
		(*head)->prev = new;
	}
	*head = new;

	return (new);
}
