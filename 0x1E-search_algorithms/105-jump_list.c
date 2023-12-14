#include "search_algos.h"

listint_t *linear_search_(listint_t *list, listint_t *jump_, int value);
/**
 * jump_list - Searches for a value in an list of integers
 * using the Jump search algorithm.
 *
 * @list: pointer to the first element of the list.
 * @size: number of elements in list.
 * @value: value to search for.
 *
 * Return: return a pointer to the first node where value is located or NULL.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t tmp_idx = 0, end = 0, jump = sqrt(size);
	listint_t *curr = list, *jump_ = list;

	if (!list)
		return (NULL);

	for (; jump_->next ;)
	{
		while (tmp_idx < jump && jump_->next)
		{
			jump_ = jump_->next;
			tmp_idx++;
		}
		tmp_idx = 0;
		printf("Value checked array [%lu] = [%d]\n", jump_->index, jump_->n);
		if (jump_->n < value && jump_->next)
		{
			curr = jump_;
		}
		else
			break;
	}
	end = jump_->index < size ? jump_->index : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", curr->index, end);
	return (linear_search_(curr, jump_, value));
}

/**
 * linear_search_ - Searches for a value in an array of list
 * using the Linear search algorithm.
 *
 * @list: pointer to the node where to start searching.
 * @jump_: pointer to the node where to stop searching.
 * @value: value to search for.
 *
 * Return: return a pointer to the first node where value is located or NULL.
 */

listint_t *linear_search_(listint_t *list, listint_t *jump_, int value)
{
	size_t idx;
	listint_t *curr = list;

	if (!list)
		return (NULL);

	for (idx = curr->index; idx <= jump_->index; idx++, curr = curr->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
		if (curr->n == value)
			return (curr);
	}
	return (NULL);
}
