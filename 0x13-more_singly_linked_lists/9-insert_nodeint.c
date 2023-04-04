#include "lists.h"
/**
 * insert_nodeint_at_index - a function to insert a new node at a position.
 * @head: the head
 * @idx: index of a list.
 * @n: the integer.
 * Return: nodes
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int p = 0;
	listint_t *node;
	listint_t *node_temporal;

	if (!head && !*head)
		return (NULL);
	node_temporal = *head;

	if (idx == p)
	{
		node = malloc(sizeof(listint_t));
		if (!node)
			return (NULL);
		node->n = n;
		node->next = *head;
		*head = node;
		return (node);
	}
	else
	{
		while (node_temporal)
		{
			if (idx == p + 1)
			{
				node = malloc(sizeof(listint_t));

				if (!node)
					return (NULL);
				node->n = n;
				node->next = node_temporal->next;
				node_temporal->next = node;
				return (node);
			}
			node_temporal = node_temporal->next;
			p++;
		}
	}
	return (NULL);
}
