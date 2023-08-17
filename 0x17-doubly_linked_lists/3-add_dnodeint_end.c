#include "lists.h"

/**
 * add_dnodeint_end - Adds a new element at the end of dlistint_t list.
 * @head: pointer to the head of the dlistint_t list.
 * @n: value of the new node to contain.
 *
 * Return: pinter to the new node or NULL.
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	new->prev = last;

	return (new);
}
