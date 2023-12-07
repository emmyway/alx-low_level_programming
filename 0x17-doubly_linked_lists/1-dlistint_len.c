#include "lists.h"

/**
 * dlistint_len - prints the number of element of dlistint_t list
 * @h: the head pointer to dlistint_t
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	int num_elem = 0;

	/* check if list is empty */
	if (h == NULL)
	{
		dprintf(2, "list is empty\n");
	}

	/*assign iterating pointer*/
	temp = h;

	/*print elements of the list*/
	while (temp)
	{
		num_elem += 1;
		temp = temp->next;
	}

	return (num_elem);
}
