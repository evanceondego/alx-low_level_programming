#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node
 * @h: double pointer to the list
 * @idx: index of the position to insert the new node
 * @n: data to insert
 *
 * Return: address of new node,else NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new;
	dlistint_t *temp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; temp && i < idx - 1; i++)
		temp = temp->next;

	if (temp == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = temp;
	new->next = temp->next;

	if (temp->next != NULL)
		temp->next->prev = new;

	temp->next = new;

	return (new);
}
