#include "lists.h"

/**
 * sum_dlistint - sums of all the data in a doubly linked list
 * @head: head of the linked list
 * Return: the sum of data in the linked list,else 0
 */
int sum_dlistint(dlistint_t *head)
{
	const dlistint_t *tmp = head;
	int sum = 0;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
