#include "lists.h"
/**
 * free_listint2 - A function to free listint_t
 * @head: a pointer at the start of a list
 */
void free_listint2(listint_t **head)
{
	listint_t *liberador;

	if (!head)
		return;
	while (*head != NULL)
	{
		liberador = *head;
		*head = (*head)->next;
		free(liberador);
	}
}
