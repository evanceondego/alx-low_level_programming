#include "lists.h"
/**
 * delete_nodeint_at_index - A function that deletes
 * @head: -A head pointer.
 * @index: indentifier index to be deleted
 * Return: (1) on success or (-1) if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev;
	listint_t *nex_t;

	unsigned int p;

	if (head == NULL || *head == NULL)
		return (-1);
	nex_t = *head;
	prev = NULL;

	if (index == 0)
	{
		*head = (*head)->next;
		free(nex_t);
		return (1);
	}
	for (p = 0; p < index; p += 1)
	{
		if (nex_t == NULL)
			return (-1);
		prev = nex_t;
		nex_t = nex_t->next;
	}
	if (prev)
		prev->next = nex_t->next;
	free(nex_t);
	return (1);
}
