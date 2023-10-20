#include "lists.h"
#include <stdio.h>
/**
 * print_list - fxn prints all element of linker list
 * @h: pointer to the list_t list to print
 * Return: number of nodes fxn printed
 */

size_t print_list(const list_t *h)
{
	size_t num;

	num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;

		num++;
	}

	return (num);
}
