#include "lists.h"

/**
 * free_listint2 - Frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *tempr;

	if (head == NULL)
		return;
	do {
		tempr = (*head)->next;
		free(*head);
		*head = tempr;
	} while (*head);
	*head = NULL;
}
