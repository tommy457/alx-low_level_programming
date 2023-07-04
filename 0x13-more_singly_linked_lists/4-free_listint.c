#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list.
 * @head: pointer to linked list.
 *
 * Return: NA
 */

void free_listint(listint_t *head)
{
	listint_t *curr;

	while (head != NULL)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}
