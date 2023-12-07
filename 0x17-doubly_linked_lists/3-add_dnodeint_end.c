#include "lists.h"

/**
 * add_dnodeint_end - fxn add node at the end
 * @head: pointer to list
 * @n: the data
 * Return: address of new node or NULL if fail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *ptr;

	if (head == NULL)
	{
		dprintf(2, "list is empty");
		return (NULL);
	}

	/*create new node*/
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "malloc failef");
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	ptr = *head;

	/*et new as head if list is empty*/
	if (ptr == NULL)
	{
		*head = new;
		return (*head);
	}

	/*iterate to last node*/
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	/*add node*/
	new->prev = ptr;
	ptr->next = new;

	return (*head);
}
