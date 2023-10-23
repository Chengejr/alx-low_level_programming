#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the element of a listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return:The number of nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	do {
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	} while (h != NULL);
	return (nodes);
}
