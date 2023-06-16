#include "lists.h"

/**
 * print_dlistint - prints the elements and returns the number of nodes
 * @h: head of the doubly linked list
 * Return: number of nodes (size_t)
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t count = 0;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		count++;
	}

	return (count);
}
