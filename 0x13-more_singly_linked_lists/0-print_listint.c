#include "lists.h"

/**
 * print_listint - fxn prints all lists of a linlked list
 * @h: the given lists head pointer
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = h;

	if (h == NULL)
	{
		printf("Error\n");
		return (0);
	}

	while (ptr)
	{
		count++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}

	return (count);
}
