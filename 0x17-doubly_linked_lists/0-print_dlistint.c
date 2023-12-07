#include "lists.h"

/**
 * print_dlistint - prints all the element of dlistint_t list
 * @h: the head pointer to dlistint_t
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	int num_elem = 0;

	/* check if list is empty */
	if (h == NULL)
	{
		dprintf(2, "list is empty\n");
	}

	/*create and iterating poointer*/

	/*assign iterating pointer*/
	temp = h;

	/*print elements of the list*/
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		num_elem += 1;
	}

	return (num_elem);
}
