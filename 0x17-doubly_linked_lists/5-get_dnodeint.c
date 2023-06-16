#include "lists.h"

/**
 * get_dnodeint_at_index - retrieves the nth node of a doubly linked list
 * @head: head of the doubly linked list
 * @index: index of the node to retrieve
 * Return: the address of the nth node, else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int count = 0;

	while (tmp != NULL && count < index)
	{
		tmp = tmp->next;
		count++;
	}

	if (count == index)
		return (tmp);
	else
		return (NULL);
}
