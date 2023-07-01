#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a list_t list.
 * @head: head of a list
 *
 * Return: NA.
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
