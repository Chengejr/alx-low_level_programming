#include "lists.h"

/**
 * add_nodeint_end - Add a new node at the end
 * of a linked list
 * @head: head of a list.
 *@n: data to insert in the new element
 * Return: address of the new element. Null if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tempr;

	(void)tempr;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	tempr = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (tempr->next != NULL)
		{
			tempr = tempr->next;
		}
		tempr->next = new;
	}
	return (*head);
}
