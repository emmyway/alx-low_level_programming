#include "lists.h"
#include <stdio.h>
/**
 * add_node - fxn adds new node at the begining of a new node
 * @head: pointer to the list_t list to print
 * @str: str to be added
 * Return: address of a new node or null if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i, index = 0;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		index++;

	new->len = index;
	new->next = *head;
	*head = new;

	return (*head);
}

