#include "lists.h"

/**
 * add_nodeint_end - fxn  adds a new node at the end of a listint_t list.
 * @head: pointer to first node
 * @n: the data to be contained by the new node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current, *ptr;

	current = malloc(sizeof(listint_t));
	if (!current)
		return (NULL);

	current->n = n;
	current->next = NULL;

	if (*head == NULL)
	{
		*head = current;
		return (current);
	}

	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = current;

	return (current);
}
