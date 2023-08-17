#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: head of dlistint.
 *
 * Return: number o3f elements.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_elem = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_elem += 1;
	}
	return (num_elem);
}
