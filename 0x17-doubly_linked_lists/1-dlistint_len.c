#include "lists.h"

/**
 * dlistint_len - the number of elements in a linked list
 * @h: head of the linked list
 * Return: number of elements (size_t)
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
