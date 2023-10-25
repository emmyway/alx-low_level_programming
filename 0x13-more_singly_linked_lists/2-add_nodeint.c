#include "lists.h"

/**
 * add_nodeint - fxn adds new node at begining of list
 * @head: pointer to address of head so it could be passed bynreference
 * @n: the data to be addeded to new node
 *
 * Return: pointer to new list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *thenode;

	if (head == NULL)/*check node validity*/
		return (NULL);

	thenode = malloc(sizeof(listint_t));
	if (thenode == NULL)/*create anf validate new node*/
		return (NULL);

	thenode->n = n;

	thenode->next = *head;
	*head = thenode;

	return (thenode);
}
