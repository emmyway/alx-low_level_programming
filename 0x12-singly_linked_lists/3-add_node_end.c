#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - fxn adds new node at end of list
 * @str: given string to be added
 * @head: double pointer pointing to list_t
 * Return: address of new lement or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *fresh;
	list_t *temp = *head;
	unsigned int lent = 0;

	while (str[lent])
		lent++;

	fresh = malloc(sizeof(list_t));
	if (!fresh)
		return (NULL);

	fresh->str = strdup(str);
	fresh->lent = lent;
	fresh->next = NULL;

	if (*head == NULL)
	{
		*head = fresh;
		return (fresh);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = fresh;
	return (fresh);
}
