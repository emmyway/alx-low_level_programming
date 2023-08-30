#include "lists.h"

/**
 * get_nodeint_at_index - finds and return reguired nth node
 * @head: the pointer to first node of list
 * @index: the nth nod required
 * Return: pointer to required node or NULL if absent
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int pos;

	pos = 0;
	if (head == NULL)
		return (0);

	while (ptr && pos < index)
	{
		ptr = ptr->next;
		pos++;
	}
	if (ptr)
		return (ptr);
	else
		return (NULL);
}
