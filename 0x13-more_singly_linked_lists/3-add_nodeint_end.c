#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds new node at the end of a list.
 * @head: pointer to linked list.
 * @n: value of new node.
 *
 * Return: address of the new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *curr;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		curr = *head;

		while (curr->next != NULL)
			curr = curr->next;

		curr->next = new_node;
	}
	return (new_node);
}
