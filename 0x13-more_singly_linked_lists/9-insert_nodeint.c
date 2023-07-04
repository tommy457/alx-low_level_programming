#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to linked list.
 * @idx: index of node.
 * @n: value of new node.
 *
 * Return: address of the new node or NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *curr;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	curr = *head;

	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}

	while (curr != NULL)
	{
		if (i == idx - 1)
		{
			new_node->next = curr->next;
			curr->next = new_node;

			return (new_node);
		}
		curr = curr->next;
		i++;
	}
	return (NULL);
}
