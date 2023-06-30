#include <stdio.h>
#include "lists.h"
/**
 * list_len - prints number of elements of a list.
 * @h: pointer to linked list.
 *
 * Return: number of elements.
 */
size_t list_len(const list_t *h)
{

	size_t count = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			h = h->next;
			count++;
		}
	}
	return (count);
}
