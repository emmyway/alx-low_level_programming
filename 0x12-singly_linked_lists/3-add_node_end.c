#include "lists.h"
#include <stdio.h>
/**
 * add_node_end(list_t - fxn return number of element of linked list
 * @head: double pointer to the list_t list
 * @str: string to include in new node
 * Return: address of new element list or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int  num = 0;

	while (str[num])
		num++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = num;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
