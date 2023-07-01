#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list.
 * @head: head of a list
 * @str: value of node to be added
 *
 * Return: number of elements.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *new_node, *end_node;

	if (*head == NULL)
	{
		new_node = malloc(sizeof(list_t));

		if (new_node == NULL)
			return (NULL);

		new_node->next = NULL;
		*head = new_node;
		new_node->str = strdup(str);
		while (str[i] != '\0')
			i++;
		new_node->len = i;
	}
	else
	{
		end_node = *head;
		while (1)
		{
			if (end_node->next == NULL)
				break;
			end_node = end_node->next;
		}
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
			return (NULL);
		new_node->next = NULL;
		end_node->next = new_node;
		new_node->str = strdup(str);
		while (i < strlen(str))
			i++;
		new_node->len = i;
	}
	return (new_node);
}
