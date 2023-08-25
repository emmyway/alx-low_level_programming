#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints to stdout the element of a list
 * @h: pointer for the list to be printed
 * Return: number of noded that were printed
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		s++;
	}
	return (n);
}
