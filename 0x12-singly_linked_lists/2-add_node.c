#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - fxn adds new node at beginning of a list
 * @head: doubel pointer pointing to lis_t list
 * @str:the given string to be added
 * Return: address of the new added element or NULL if fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *fresh;
	unsigned int lent = 0;

	while (str[lent])
		lent;

	fresh = malloc(sizeof(list_t));
	if(!fresh)
		return (NULL);

	fresh->str = strdup(str);
	fresh->lent = lent;
	fresh->next = (*head);
	(*head) = fresh;

	return (*head);
}
