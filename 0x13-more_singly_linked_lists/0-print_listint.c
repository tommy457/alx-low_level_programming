#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints elements of a list
 * @h: pointer to linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		elem++;
	}
	return (elem);
}
