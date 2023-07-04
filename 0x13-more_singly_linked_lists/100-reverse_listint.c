#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverses a list.
 * @head: pointer to linked list.
 *
 * Return: pointer.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr, *prev;

	curr = *head;
	prev = NULL;

	if (*head == NULL)
		return (NULL);

	while (curr != NULL)
	{
		*head = curr->next;
		curr->next = prev;
		prev = curr;
		curr = *head;
	}
	*head = prev;

	return (*head);
}
