#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at the given index
 * in a doubly linked list
 * @head: double pointer to the list
 * @index: index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev;
	unsigned int i;

	if (*head == NULL || index >= dlistint_len(*head))
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		prev = temp;
		temp = temp->next;
	}

	prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = prev;

	free(temp);
	return (1);
}
