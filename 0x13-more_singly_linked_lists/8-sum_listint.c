#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sum of all the data (n) of a list.
 * @head: pointer to linked list.
 *
 * Return: sum.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
