#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given index
 * in a doubly linked list
 * @head: double pointer to the list
 * @index: index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *previous;
	unsigned int i;

	if (*head == NULL || index >= dlistint_len(*head))
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		previous = current;
		current = current->next;
	}

	previous->next = current->next;
	if (current->next != NULL)
		current->next->prev = previous;
	free(current);

	return (1);
}
