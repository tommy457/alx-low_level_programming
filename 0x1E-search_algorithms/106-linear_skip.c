#include "search_algos.h"

skiplist_t *linear_search_(skiplist_t *list, skiplist_t *jump_, int value);
/**
 * linear_skip - Searches for a value in an skip list of integers
 * using the Jump search algorithm.
 *
 * @list: pointer to the first element of the skip list.
 * @value: value to search for.
 *
 * Return: return a pointer to the first node where value is located or NULL.
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *curr = list, *jump_ = list;

	if (!list)
		return (NULL);

	for (; jump_->next ;)
	{
		jump_ = jump_->express;
		if (!jump_)
		{
			jump_ = curr;
			while (jump_->next)
			{
				jump_ = jump_->next;
			}
			break;
		}
		printf(
				"Value checked at index [%lu] = [%d]\n",
				jump_->index, jump_->n
		      );
		if (jump_->n < value  && jump_->next)
		{
			curr = jump_;
		}
		else
			break;
	}
	printf(
			"Value found between indexes [%lu] and [%lu]\n",
			curr->index, jump_->index
		);
	return (linear_search_(curr, jump_, value));
}

/**
 * linear_search_ - Searches for a value in an array of skip list
 * using the Linear search algorithm.
 *
 * @list: pointer to the node where to start searching.
 * @jump_: pointer to the node where to stop searching.
 * @value: value to search for.
 *
 * Return: return a pointer to the first node where value is located or NULL.
 */

skiplist_t *linear_search_(skiplist_t *list, skiplist_t *jump_, int value)
{
	size_t idx;
	skiplist_t *curr = list;

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
