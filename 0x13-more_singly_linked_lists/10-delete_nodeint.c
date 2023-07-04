#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delets a new node at a given position
 * @head: pointer to linked list.
 * @index: index of node.
 *
 * Return: 1 or -1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *prev;
	unsigned int i = 0;

	curr = *head;
	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		return (1);
	}

	while (i != index)
	{
		prev = curr;
		curr = curr->next;

		if (curr == NULL)
			return (-1);
		i++;
	}
	prev->next = curr->next;
	free(curr);
	return (1);
}
