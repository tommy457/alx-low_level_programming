#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list.
 * @head: head of a list
 * @str: value of node to be added
 *
 * Return: number of elements.
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *temp;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);

	while (i < strlen(str))
		i++;

	temp->len = i;
	temp->next = *head;
	*head = temp;

	return (*head);
}
