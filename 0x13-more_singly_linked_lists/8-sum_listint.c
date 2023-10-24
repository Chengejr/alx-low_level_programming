#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *tempr = head;

	do {
		s += tempr->n;
		tempr = tempr->next;
	} while (tempr);
	return (s);
}
