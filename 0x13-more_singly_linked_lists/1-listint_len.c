#include "lists.h"

/**
 * listint_len - fxn return number of elements in a lists of a linlked list
 * @h: the given lists head pointer
 * Return: the number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = h;

	if (h == NULL)
	{
		printf("Error\n");
		return (1);
	}

	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
