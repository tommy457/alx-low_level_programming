#include "search_algos.h"

listint_t *linear_search_(
		listint_t *list, size_t start, size_t end, int value);
/**
 * jump_list - Searches for a value in an list of integers
 * using the Jump search algorithm.
 *
 * @list: pointer to the first element of the array.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * Return: return a pointer to the first node where value is located or NULL.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t tmp_idx, idx, jump = sqrt(size);
	listint_t *jump_ = list, *curr = list;

	if (!list)
		return (NULL);

	for (idx = curr->index; jump_; idx += jump)
	{
		tmp_idx = 0;
		while (tmp_idx < jump && jump_->next)
		{
			jump_ = jump_->next;
			tmp_idx++;
		}
		tmp_idx = 0;

		if (idx + jump > size)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
					idx - jump, size - 1);
			return (linear_search_(curr, idx - jump, size - 1, value));
		}

		printf("Value checked at index [%lu] = [%d]\n", jump_->index, jump_->n);
		if (curr->n <= value && jump_->n >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
					idx, idx + jump);
			return (linear_search_(curr, idx, idx + jump - 1, value));
		}
		while (tmp_idx < jump && jump_->next)
		{
			curr = curr->next;
			tmp_idx++;
		}
	}
	return (NULL);
}

/**
 * linear_search_ - Searches for a value in an array of list
 * using the Linear search algorithm.
 *
 * @list: pointer to the first element of the array.
 * @start: index where to start searching.
 * @end: index where to stop searching
 * @value: value to search for.
 *
 * Return: return a pointer to the first node where value is located or NULL.
 */

listint_t *linear_search_(listint_t *list, size_t start, size_t end, int value)
{
	size_t idx;
	listint_t *curr = list;

	if (!list)
		return (NULL);

	for (idx = start; idx <= end; idx++)
	{
		printf("Value checked at index [%lu] = [%d]\n", idx, curr->n);
		if (curr->n == value)
			return (curr);
		curr = curr->next;
	}
	return (NULL);
}
