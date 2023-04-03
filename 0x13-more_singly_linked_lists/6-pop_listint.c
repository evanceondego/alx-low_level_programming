#include "lists.h"

/**
 * pop_listint -function to delete head node of listint_t
 * @head: pointer to a pointer at the start of listint_t
 * Return: the node data
 */
int pop_listint(listint_t **head)
{
	int p;
	listint_t *node;

	if (head == NULL || *head == NULL)
		return (0);

	node = *head;
	p = (*head)->n;
	*head = (*head)->next;
	free(node);
	return (p);
}
