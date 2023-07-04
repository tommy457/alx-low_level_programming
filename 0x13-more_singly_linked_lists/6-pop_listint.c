#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - pops head.
 * @head: pointer to linked list.
 *
 * Return: head.
 */

int pop_listint(listint_t **head)
{
	listint_t *curr;
	int i;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		curr = (*head)->next;
		i = (*head)->n;
		free(*head);
		*head = curr;
		return (i);
	}
}
