#include "lists.h"

/**
 * free_listint - Frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *tempr;

	do {
		tempr = head->next;
		free(head);
		head = tempr;
	} while (head);
}
