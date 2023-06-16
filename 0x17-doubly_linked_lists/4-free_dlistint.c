#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: head of the list to free
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
