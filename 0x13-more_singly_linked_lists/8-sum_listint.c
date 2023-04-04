#include "lists.h"

/**
 * sum_listint -fuction to return sum in listint_t
 * @head: variable pointer at the beginning of listint_t
 * Return: sum of elements
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
