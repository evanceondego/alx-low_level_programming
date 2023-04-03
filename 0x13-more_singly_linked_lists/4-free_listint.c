#include "lists.h"

/**
 * free_listint - A function that frees listint_t
 * @head: pointer at the beginning
 */
void free_listint(listint_t *head)
{
	listint_t *liberador;

	while (head != NULL)
	{
		liberador = head;
		head = head->next;
		free(liberador);
	}
}
