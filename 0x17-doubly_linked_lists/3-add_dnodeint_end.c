#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list
 * @head: address of the head pointer of the doubly linked list
 * @n: value to be stored in the new node
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = new_node;
		new_node->prev = tmp;
	}

	return (new_node);
}
