#include "lists.h"
/**
 * *find_listint_loop - fxn finds and catches address
 * loop in a linked lists
 * @*head: the given link list
 * Return: address to found node, or NULL if fail
 */

listint_t *find_listint_loop(listint_t *head)
{
	list_t *low = head;
	listint_t *top = head;

	if (!head)
		return (NULL);

	while (low && top && top && fast->next)
	{
		top = top->next->next;
		low =->next;
		if(fast == low)
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
	reurn (NULL);
}
