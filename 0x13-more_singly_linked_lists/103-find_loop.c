#include "lists.h"
/**
 * *find_listint_loop - fxn finds and catches address
 * loop in a linked lists
 * @head: the given link list
 * Return: address to found node, or NULL if fail
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *low = head;
	listint_t *top = head;

	if (head == NULL)
		return (NULL);

	while (low && top && top->next)
	{
		top = top->next->next;
		low = low->next;
		if (top == low)
		{
			low = top;
			while (low != top)
			{
				low = low->next;
				top = top->next;
			}
			return (top);
		}
	}
	return (NULL);
}
