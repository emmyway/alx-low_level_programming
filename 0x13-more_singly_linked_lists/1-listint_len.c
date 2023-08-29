#include "lists.h"

/**
 * listint_len - fxn prints all the elements of a listint_t list.
 * @h: the list to print
 * Return: nuber of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}
	return (number);
}
