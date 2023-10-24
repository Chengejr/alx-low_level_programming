#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: The data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tempr;
	int number;

	if (!head || !*head)
		return (0);
	number = (*head)->n;
	tempr = (*head)->next;
	free(*head);
	*head = tempr;
	return (number);
}
