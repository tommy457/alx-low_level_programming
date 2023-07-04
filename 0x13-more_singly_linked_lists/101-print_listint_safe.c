#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

size_t has_loop(const listint_t *head);

/**
 * print_listint_safe - prints a listint_t list.
 * @head: pointer to linked list.
 *
 * Return: number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n, i = 0;

	n = has_loop(head);

	if (n == 0)
	{
		for (; head != NULL; n++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}
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
