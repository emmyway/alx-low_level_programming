#include "lists.h"
#include <stdio.h>
/**
 * list_len - fxn return number of element of linked list
 * @h: pointer to the list_t list to print
 * Return: number of element of list
 */

size_t list_len(const list_t *h)
{
	size_t num;

	num = 0;

	while (h != NULL)
	{
		num++;

		h = h->next;
	}

	return (num);
}
