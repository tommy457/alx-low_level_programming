#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list and sets head to NULL
 * @head: pointer to linked list.
 *
 * Return: NA
 */

void free_listint2(listint_t **head)
{
	listint_t *curr, *tmp;

	if (head != NULL)
	{
		curr = *head;
		while (curr != NULL)
		{
			tmp = curr;
			curr = curr->next;
			free(tmp);
		}
		*head = NULL;
	}
}
