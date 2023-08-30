#include "lists.h"

/**
 * free_listint_safe - fxn frees a given linked list
 * @h: pointer to list
 * Return: size freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	int diff;
	size_t len = 0;

	if (!*h || !h)
		return (0);

	else
	{
			while (*h)
		{
			diff = *h - (*h)->next;
			if (diff <= 0)
			{
				free(*h);
				*h = NULL;
				len++;
				break;
			}
			else
			{
				current = (*h)->next;
				free(*h);
				*h = current;
				len++;
			}
		}
		*h = NULL;
		return (len);
	}
}
