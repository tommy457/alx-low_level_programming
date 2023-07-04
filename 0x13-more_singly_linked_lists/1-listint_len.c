#include <stdio.h>
#include "lists.h"

/**
  * listint_len - prints number of elements in a list
  * @h: pointer to linked list
  *
  * Return: number of nodes
  */

size_t listint_len(const listint_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		h = h->next;
		elem++;
	}
	return (elem);
}
