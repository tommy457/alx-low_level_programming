#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

size_t has_loop(const listint_t *head);

/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: address of the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 *
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t n, i;

	n = has_loop(*h);

	if (n == 0)
	{
		for (; h != NULL && *h != NULL; n++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (n);
}


/**
 * has_loop - Counts the number of unique n loop.
 * @head: pointer to linked list.
 *
 * Return: 0 or 1.
 */
size_t has_loop(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t n = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	fast = (head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				n++;
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;
			while (slow != fast)
			{
				n++;
				slow = slow->next;
			}

			return (n);
		}

		slow = slow->next;
		fast = (fast->next)->next;
	}

	return (0);
}
