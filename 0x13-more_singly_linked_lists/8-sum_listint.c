#include "lists.h"

/**
 * sum_listint - sums all list data 
 * @head: pointer to list
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum;

	if (head == 0)
		return (0);

	ptr = head;
	sum = 0;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
